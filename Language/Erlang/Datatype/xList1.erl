%List
-module(xList1).
-export([props/0, create/0, recursion/1]).
-define(L, [-1, 0, 1]).

props() ->
    io:format("~p ~p ~p ~n", [?L, is_list(?L), length(?L)]),
    io:format("~p ~p ~p ~n", [lists:member(0, ?L), lists:prefix([-1, 0], ?L), lists:suffix([0, 1], ?L)]),
    io:format("~p ~p ~p ~n", [lists:last(?L), lists:nth(1, ?L), lists:nthtail(1, ?L)]),
    io:format("~p ~p ~p ~n", [lists:sum(?L), lists:max(?L), lists:min(?L)]).

create() ->
    SQL=lists:seq(-1, 1, 1),
    DPL=lists:duplicate(3, hello),
    io:format("~p ~p ~n", [SQL, DPL]),

    DLL=lists:delete(0, ?L),
    MIL=[1, 2, 3]--[2, 3],
    STL=lists:subtract(?L, [0, 1]),
    SBL=lists:sublist(?L, 1, 2),
    SPL=lists:split(2, ?L),
    io:format("~p ~p ~p ~p ~p ~n", [DLL, MIL, STL, SBL, SPL]),

    UL=lists:uniq(?L),
    RL=lists:reverse(?L),
    SOL=lists:sort(?L),
    JL=lists:join(69, ?L),
    CL=lists:concat(?L),
    io:format("~p ~p ~p ~p ~p ~n", [UL, RL, SOL, JL, CL]),

    PL=[1, 2, 3]++[4, 5, 6],
    AL=lists:append([1, 2, 3], [4, 5, 6]),
    MRL=lists:merge([1, 3, 5], [2, 4, 6]),
    FL=lists:flatten([1, [2, 3, [4, 5, 6]]]),
    EL=lists:enumerate(1, 1, ?L),
    io:format("~p ~p ~p ~p ~p ~n", [PL, AL, MRL, FL, EL]),

    A=list_to_atom(atom_to_list(sudeep)),
    I=list_to_integer(integer_to_list(69)),
    F=list_to_float(float_to_list(69.23)),
    TL=lists:unzip(lists:zip([abc, def, ghi], [-1, 0, 1])),
    io:format("~p ~p ~p ~p ~n", [A, I, F, TL]).

recursion([]) -> 0;
recursion([H|T]) ->
    io:format("~p ", [H]),
    H+recursion(T).