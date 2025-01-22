%Process
-module(xProcess).
-export([proc/0, add_proc/0, subtract_proc/0, multiply_proc/0]).

proc() ->
    Pid=spawn(fun() -> io:format("~p ~n", [sudeep]) end),
    register(proc, Pid),
    io:format("~p ~p ~n ~p ~n", [is_pid(Pid), whereis(proc), registered()]),
    unregister(proc).

add_proc() ->
    Pid=self(),
    Aid=spawn(ops, add, [2, 3]),
    Pid ! {Aid, add},
    receive {Id, Msg} -> io:format("~p : ~p ~n", [Id, Msg])
    after 1000 -> io:format("~p ~n", [failed])
    end.

subtract_proc() ->
    Pid=self(),
    Sid=spawn(ops, subtract, [2, 3]),
    link(Sid),
    % Sid=spawn_link(ops, subtract, [2, 3]),
    Pid ! {Sid, subtract},
    unlink(Sid),
    receive {Id, Msg} -> io:format("~p : ~p ~n", [Id, Msg])
    after 1000 -> io:format("~p ~n", [failed])
    end.

multiply_proc() ->
    Pid=self(),
    Mid=spawn(ops, multiply, [2, 3]),
    Ref=monitor(process, Mid),
    % {Mid, Ref}=spawn_monitor(ops, multiply, [2, 3]),
    Pid ! {Mid, multiply},
    demonitor(Ref),
    receive {Id, Msg} -> io:format("~p : ~p ~n", [Id, Msg])
    after 1000 -> io:format("~p ~n", [failed])
    end.