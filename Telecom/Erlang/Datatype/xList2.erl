% List
-module(xList2).
-export([function/0, map/0, comprehension/0]).
-define(L, [-1, 0, 1]).
-define(M, [{abc, -1}, {def, 0}, {ghi, 1}]).
-define(F1, fun(V) -> V>0 end).
-define(F2, fun(V) -> V+1 end).
-define(F3, fun(V, A) -> V+A end).
-define(F4, fun(V, A) -> {V+1, V+A} end).

function() ->
    AL=lists:all(?F1, ?L),
    AN=lists:any(?F1, ?L),
    SR=lists:search(?F1, ?L),
    io:format("~p ~p ~p ~n", [AL, AN, SR]),

    FT=lists:filter(?F1, ?L),
    PT=lists:partition(?F1, ?L),
    io:format("~p ~p ~n", [FT, PT]),

    TW=lists:takewhile(?F1, ?L),
    DW=lists:dropwhile(?F1, ?L),
    SW=lists:splitwith(?F1, ?L),
    io:format("~p ~p ~p ~n", [TW, DW, SW]),

    lists:foreach(fun(V) -> io:format("~p ", [V]) end, ?L),
    MP=lists:map(?F2, ?L),
    FM=lists:filtermap(fun(V) -> if
        V>0 -> {true, V+1};
        true -> false
    end end, ?L),
    io:format("~p ~p ~n", [MP, FM]),

    FL=lists:foldl(?F3, 0, ?L),
    FR=lists:foldr(?F3, 0, ?L),
    MFL=lists:mapfoldl(?F4, 0, ?L),
    MFR=lists:mapfoldr(?F4, 0, ?L),
    io:format("~p ~p ~p ~p ~n", [FL, FR, MFL, MFR]).

map() ->
    KMB=lists:keymember(def, 1, ?M),
    KF=lists:keyfind(def, 1, ?M),
    KSR=lists:keysearch(def, 1, ?M),
    io:format("~p ~p ~p ~n", [KMB, KF, KSR]),

    KD=lists:keydelete(def, 1, ?M),
    KT=lists:keytake(def, 1, ?M),
    KR=lists:keyreplace(def, 1, ?M, {xyz, 0}),
    KST=lists:keystore(jkl, 1, ?M, {xyz, 0}),
    io:format("~p ~p ~p ~p ~n", [KD, KT, KR, KST]),

    KMP=lists:keymap(?F2, 2, ?M),
    KSO=lists:keysort(2, ?M),
    KMR=lists:keymerge(2, ?M, [{xyz, 0}]),
    io:format("~p ~p ~p ~n", [KMP, KSO, KMR]).

comprehension() ->
    FC=[V || V <- ?L, V>0],
    MC=[V+1 || V <- ?L],
    io:format("~p ~p ~n", [FC, MC]).