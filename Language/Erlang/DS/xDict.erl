%Dict
-module(xDict).
-export([props/0, create/0, function/0]).
-define(D, {dict,3,16,16,8,80,48,{[],[],[],[],[],[],[],[],[],[],[],[],[],[],[],[]},
    {{[],[],[],[[abc|-1]],[],[],[[def|0]],[],[],[[ghi|1]],[],[],[],[],[],[]}}}).
-define(_D, {dict,3,16,16,8,80,48,{[],[],[],[],[],[],[],[],[],[],[],[],[],[],[],[]},
    {{[],[],[],[[abc|-1]],[],[],[[def|69]],[],[],[[xyz|0]],[],[],[],[],[],[]}}}).

props() ->
    io:format("~p ~n ~p ~p ~n", [?D, dict:is_empty(?D), dict:size(?D)]),
    io:format("~p ~n", [dict:fetch_keys(?D)]),
    io:format("~p ~p ~p ~n", [dict:is_key(abc, ?D), dict:find(abc, ?D), dict:fetch(abc, ?D)]).

create() ->
    ND=dict:new(),
    ID=dict:store(xyz, 0, ?D),
    DD=dict:erase(def, ?D),
    io:format("~p ~n ~p ~n ~p ~n", [ND, ID, DD]),

    AD1=dict:append(xyz, 0, ?D),
    AD2=dict:append_list(xyz, [-1, 1], ?D),
    TD=dict:take(def, ?D),
    io:format("~p ~n ~p ~n ~p ~n", [AD1, AD2, TD]),
    
    IV=dict:update_counter(def, 1, ?D),
    LD=dict:from_list(dict:to_list(?D)),
    io:format("~p ~n ~p ~n", [IV, LD]).

function() ->
    FT=dict:filter(fun(_K, V) -> V>0 end, ?D),
    MP=dict:map(fun(_K, V) -> V+1 end, ?D),
    io:format("~p ~n ~p ~n", [FT, MP]),

    FD=dict:fold(fun(_K, V, A) -> V+A end, 0, ?D),
    UV=dict:update(def, fun(V) -> V+1 end, 1, ?D),
    MR=dict:merge(fun(_K, V1, V2) -> V1-V2 end, ?D, ?_D),
    io:format("~p ~p ~n ~p ~n", [FD, UV, MR]).