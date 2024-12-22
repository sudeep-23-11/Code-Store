% Function
-module(xFunction).
-export([fun_/0, pattern_matching/2, guard/1, underscore/3, block_expression/2]).
-export([case_construct/2, if_construct/1, recursion/1, accumulator/1]).

fun_() ->
    F=fun(A, B) -> A*B end,
    io:format("~p ~p ~n", [F(2, 3), is_function(F, 2)]),
    io:format("~p ~n", [erlang:fun_to_list(F)]),
    io:format("~p ~n", [apply(erlang, fun_to_list, [F])]).

pattern_matching(square, A) -> A*A;
pattern_matching(cube, A) -> A*A*A.

guard(A) when A>0 -> positive;
guard(A) when A<0 -> negative;
guard(_A) -> zero.

underscore(_, _A, B) -> B.

block_expression(A, B) ->
    begin
        X=A,
        Y=X*B,
        Z=Y,
        Z
    end.

case_construct(R, A) ->
    case R of
        square -> A*A;
        cube -> A*A*A;
        _ -> A
    end.

if_construct(A) ->
    if
        A>0 -> positive;
        A<0 -> negative;
        true -> zero
    end.

recursion(A) when A==1 -> 1;
recursion(A) -> A*recursion(A-1).

accumulator(A) -> accumulator(1, A, 1).
accumulator(A, B, R) when A>B -> R;
accumulator(A, B, R) -> accumulator(A+1, B, R*A).