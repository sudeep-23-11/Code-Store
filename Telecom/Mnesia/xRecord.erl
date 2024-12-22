% Record
-module(xRecord).
-export([create/0]).
-include("records.hrl").

create() ->
    A=#person{name=sudeep, rank=2, percent=95.0},
    B=A#person{},
    C=A#person{rank=5, percent=90.5},
    io:format("~p ~p ~n ~p ~n ~p ~n", [is_record(A, person), A, B, C]),

    D=#figure{name=rectangle},
    E=#figure{name=square, height=25, width=25},
    io:format("~p ~n ~p ~n", [D, E]),

    #person{name=N, rank=_R, percent=_P}=A,
    io:format("~p ~p ~p ~n", [N, #person.name, A#person.name]).