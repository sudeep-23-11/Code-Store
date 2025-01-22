%ConsoleIO
-module(xConsoleIO).
-export([reading/0, writing/0]).

reading() ->
    C=io:get_chars("Enter chars ", 6),
    L=io:get_line("Enter line "),
    {_, T}=io:read("Enter term "),
    io:format("~p ~n ~p ~n ~p ~n", [C, L, T]).

writing() ->
    io:format("~p ~p ~n", ["sudeep", 69.23]),
    io:put_chars("hello world\n"),
    io:write({sudeep, 69}),
    io:nl().