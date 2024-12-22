% General
-module(xGeneral).
-export([operator/2, decimal/1, datatype/0]).

operator(A, B) ->
    io:format("~p ~p ~p ~n", [A/B, A div B, A rem B]),
    io:format("~p ~p ~p ~p ~n", [1==1.0, 1/=1.0, 1=:=1.0, 1=/=1.0]),
    io:format("~p ~p ~n", [1=<2, 1>=2]),
    io:format("~p ~p ~p ~n", [false and true, true or false, not(false)]),
    io:format("~p ~p ~n", [false andalso true, true orelse false]).

decimal(A) ->
    io:format("~p ~p ~n", [round(A), trunc(A)]),
    io:format("~p ~p ~p ~n", [2#1010, 8#12, 16#A]).

datatype() ->
    io:format("~p ~p ~n", [is_atom($a), is_atom(sudeep)]),
    io:format("~p ~p ~n", [is_atom('Hello World'), is_boolean(true)]),
    io:format("~p ~p ~p ~n", [is_number(69.23), is_integer(69), is_float(69.23)]).