%Proplist
-module(xProplist).
-export([props/0, create/0]).
-define(M, [{abc, -1}, {def, -2}, {abc, 1}, {def, [0, 2]}, {ghi, 0}]).
-define(B, [{abc, true}, {def, true}]).

props() ->
    io:format("~p ~p ~p ~n", [proplists:get_keys(?M), proplists:is_defined(abc, ?M), proplists:get_bool(abc, ?B)]),
    io:format("~p ~p ~n", [proplists:lookup(abc, ?M), proplists:lookup_all(abc, ?M)]),
    io:format("~p ~p ~p ~n", [proplists:get_value(abc, ?M, na), proplists:get_all_values(abc, ?M), proplists:append_values(def, ?M)]).

create() ->
    DL=proplists:delete(abc, ?M),
    SL=proplists:split(?M, [abc, ghi]),
    io:format("~p ~n ~p ~n", [DL, SL]),

    P=proplists:property({abc, true}),
    BL=proplists:unfold(proplists:compact(?B)),
    ML=proplists:from_map(proplists:to_map([{abc, -1}, {def, 0}, {ghi, 1}])),
    io:format("~p ~p ~n ~p ~n", [P, BL, ML]).