%Mnesia
-module(xMnesia).
-include_lib("stdlib/include/qlc.hrl").
-export([start/0, stop/0, transaction/0, dirty/0, activity/0, query/0]).
-record(person, {roll, name, percent}).
-define(F, fun(V, A) -> A++[V] end).

start() ->
    mnesia:create_schema([node()]),
    mnesia:start(),
    mnesia:create_table(person,
        [{access_mode, read_write},                                         %read_only
        {type, ordered_set},                                                %set, bag
        {record_name, person},
        {attributes, [roll, name, percent]},
        {index, [name]},
        {disc_copies, [node()]}]),                                          %ram_copies, disc_only_copies
    mnesia:add_table_index(person, percent),
    mnesia:schema(person).

stop() ->
    mnesia:del_table_index(person, percent),
    mnesia:clear_table(person),
    mnesia:delete_table(person),
    mnesia:stop(),
    mnesia:delete_schema([node()]).

transaction() ->
    mnesia:transaction(fun() ->
        mnesia:write(#person{roll=1, name="sudeep", percent=95}),
        mnesia:write(#person{roll=2, name="aryan", percent=90}),
        io:format("~p ~p ~n", [mnesia:first(person), mnesia:last(person)]),
        io:format("~p ~p ~n", [mnesia:prev(person, 2), mnesia:next(person, 1)])
    end),
    mnesia:sync_transaction(fun() ->
        [Record]=mnesia:read({person, 1}),
        mnesia:write(Record#person{percent=97}),
        mnesia:delete({person, 2}),
        Data=mnesia:select(person, [{
            #person{roll='$1', name="sudeep", percent='$2'},
            [{'==', '$2', 97}],
            ['$1']
        }]),
        io:format("~p ~p ~n", [mnesia:all_keys(person), Data])
    end).

dirty() ->
    mnesia:async_dirty(fun() ->
        mnesia:dirty_write(#person{roll=3, name="aarush", percent=85}),
        mnesia:dirty_write(#person{roll=4, name="shivam", percent=80}),
        io:format("~p ~p ~n", [mnesia:dirty_first(person), mnesia:dirty_last(person)]),
        io:format("~p ~p ~n", [mnesia:dirty_prev(person, 4), mnesia:dirty_next(person, 3)])
    end),
    mnesia:sync_dirty(fun() ->
        [Record]=mnesia:dirty_read({person, 3}),
        mnesia:dirty_write(Record#person{percent=87}),
        mnesia:dirty_delete({person, 4}),
        Data=mnesia:dirty_select(person, [{
            #person{roll='$1', name='_', percent='$2'},
            [{'>', '$2', 85}, {'<', '$2', 90}],
            ['$_']
        }]),
        io:format("~p ~p ~n", [mnesia:dirty_all_keys(person), Data])
    end).

activity() ->
    mnesia:activity(transaction, fun() ->                                   %sync_transaction
        Data1=mnesia:index_read(person, "sudeep", name),
        Data2=mnesia:foldl(?F, [], person),
        io:format("~p ~p ~n ~p ~n", [mnesia:is_transaction(), Data1, Data2])
    end),
    mnesia:activity(async_dirty, fun() ->                                   %sync_dirty
        Data1=mnesia:dirty_index_read(person, "aarush", name),
        Data2=mnesia:foldr(?F, [], person),
        io:format("~p ~p ~n ~p ~n", [mnesia:is_transaction(), Data1, Data2])
    end).

query() ->
    mnesia:transaction(fun() ->
        Data1=qlc:e(qlc:q([R || R <- mnesia:table(person), R#person.percent>90])),
        Data2=qlc:e(qlc:q([R#person.name || R <- mnesia:table(person)])),
        io:format("~p ~n ~p ~n", [Data1, Data2])
    end).