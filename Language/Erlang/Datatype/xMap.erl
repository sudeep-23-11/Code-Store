%Map
-module(xMap).
-export([props/0, create/0, function/0, iterator/0]).
-define(M, #{abc => -1, def => 0, ghi => 1}).
-define(_M, #{abc => -1, def => 69, xyz => 0}).

props() ->
    io:format("~p ~n ~p ~p ~p ~n", [?M, is_map(?M), is_map_key(abc, ?M), maps:size(?M)]),
    io:format("~p ~p ~n", [maps:keys(?M), maps:values(?M)]),
    io:format("~p ~p ~p ~n", [maps:is_key(abc, ?M), maps:find(abc, ?M), maps:get(abc, ?M, na)]).

create() ->
    NM=maps:new(),
    ISM=maps:put(xyz, 0, ?M),
    DM=maps:remove(def, ?M),
    UM=maps:update(def, 69, ?M),
    TM=maps:take(def, ?M),
    io:format("~p ~n ~p ~n ~p ~n ~p ~n ~p ~n", [NM, ISM, DM, UM, TM]),

    KM=maps:from_keys([abc, def, ghi], 0),
    WM=maps:with([def, ghi], ?M),
    WOM=maps:without([def, ghi], ?M),
    io:format("~p ~n ~p ~n ~p ~n", [KM, WM, WOM]),

    MM=maps:merge(?M, ?_M),
    ITM=maps:intersect(?M, ?_M),
    LM=maps:from_list(maps:to_list(?M)),
    io:format("~p ~n ~p ~n ~p ~n", [MM, ITM, LM]).

function() ->
    maps:foreach(fun(_K, V) -> io:format("~p ", [V]) end, ?M),
    FT=maps:filter(fun(_K, V) -> V>0 end, ?M),
    MP=maps:map(fun(_K, V) -> V+1 end, ?M),
    FM=maps:filtermap(fun(_K, V) -> if
        V>0 -> {true, V+1};
        true -> false
    end end, ?M),
    io:format("~n ~p ~n ~p ~n ~p ~n", [FT, MP, FM]),

    FD=maps:fold(fun(_K, V, A) -> V+A end, 0, ?M),
    UV=maps:update_with(def, fun(V) -> V+1 end, 1, ?M),
    GR=maps:groups_from_list(fun(K) -> if K<0 -> zero; true -> non_zero end end,
        fun(V) -> V+1 end, [-1, 0, 1]),
    io:format("~p ~p ~n ~p ~n", [FD, UV, GR]),

    MR=maps:merge_with(fun(_K, V1, V2) -> V1-V2 end, ?M, ?_M),
    IT=maps:intersect_with(fun(_K, V1, V2) -> V1-V2 end, ?M, ?_M),
    io:format("~p ~n ~p ~n", [MR, IT]).

iterator() ->
    It=maps:iterator(?M, ordered),                                          %reversed
    io:format("~p ~n", [maps:next(It)]).