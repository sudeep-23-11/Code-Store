% Tuple
-module(xTuple).
-export([props/0, create/0]).
-define(T, {sudeep, 69}).

props() ->
    io:format("~p ~p ~p ~n", [?T, is_tuple(?T), tuple_size(?T)]),
    io:format("~p ~p ~n", [element(1, ?T), element(2, ?T)]).

create() ->
    AT=erlang:append_element(?T, 23),
    IT=erlang:insert_element(2, ?T, 23),
    DT=erlang:delete_element(2, ?T),
    UT=setelement(2, ?T, 23),
    io:format("~p ~p ~p ~p ~n", [AT, IT, DT, UT]),

    MT=erlang:make_tuple(3, hello),
    LT=list_to_tuple(tuple_to_list({-1, 0, 1})),
    io:format("~p ~p ~n", [MT, LT]).