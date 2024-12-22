-module(ops).
-export([add/2, subtract/2, multiply/2]).
-export([add_proc/2, subtract_proc/2, multiply_proc/2]).

add(A, B) -> io:format("~p ", [A+B]).
subtract(A, B) -> io:format("~p ", [A-B]).
multiply(A, B) -> io:format("~p ", [A*B]).

add_proc(A, B) -> {ok, spawn_link(ops, add, [A, B])}.
subtract_proc(A, B) -> {ok, spawn_link(ops, subtract, [A, B])}.
multiply_proc(A, B) -> {ok, spawn_link(ops, multiply, [A, B])}.