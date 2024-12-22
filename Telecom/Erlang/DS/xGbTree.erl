% GbTree
-module(xGbTree).
-export([props/0, create/0, iterator/0]).
-define(T, {3, {0, 0, {-1, -10, nil, nil}, {1, 10, nil, nil}}}).

props() ->
    io:format("~p ~n ~p ~p ~n", [?T, gb_trees:is_empty(?T), gb_trees:size(?T)]),
    io:format("~p ~p ~n", [gb_trees:keys(?T), gb_trees:values(?T)]),
    io:format("~p ~p ~p ~n", [gb_trees:is_defined(0, ?T), gb_trees:lookup(0, ?T), gb_trees:get(0, ?T)]),
    io:format("~p ~p ~n", [gb_trees:smallest(?T), gb_trees:largest(?T)]),
    io:format("~p ~p ~n", [gb_trees:smaller(0, ?T), gb_trees:larger(0, ?T)]).

create() ->
    NT=gb_trees:empty(),
    BT=gb_trees:balance(?T),
    io:format("~p ~n ~p ~n", [NT, BT]),

    IT1=gb_trees:insert(2, 20, ?T),
    IT2=gb_trees:enter(0, 2, ?T),
    DT1=gb_trees:delete(0, ?T),
    DT2=gb_trees:delete_any(2, ?T),
    UT=gb_trees:update(0, 2, ?T),
    io:format("~p ~n ~p ~n ~p ~n ~p ~n ~p ~n", [IT1, IT2, DT1, DT2, UT]),

    TT1=gb_trees:take(0, ?T),
    TT2=gb_trees:take_any(2, ?T),
    TST=gb_trees:take_smallest(?T),
    TLT=gb_trees:take_largest(?T),
    io:format("~p ~n ~p ~n ~p ~n ~p ~n", [TT1, TT2, TST, TLT]),

    LT=gb_trees:from_orddict(gb_trees:to_list(?T)),
    MT=gb_trees:map(fun(_K, V) -> V+1 end, ?T),
    io:format("~p ~n ~p ~n", [LT, MT]).

iterator() ->
    It1=gb_trees:iterator(?T, ordered),                                     % reversed
    It2=gb_trees:iterator_from(0, ?T, ordered),                             % reversed
    io:format("~p ~n ~p ~n", [gb_trees:next(It1), gb_trees:next(It2)]).