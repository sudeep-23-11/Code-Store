%GenServer
-module(client).
-export([start/0, stop/0, get/0, put/1, reqid/0]).

start() ->
    gen_server:start({local, server}, server, [0], []).
    % gen_server:start_link({local, server}, server, [], []).
    % gen_server:start_monitor({local, server}, server, [], []).

stop() ->
    server ! info,
    gen_server:stop(server, normal, 1000).

get() ->
    gen_server:call(server, get, 1000).

put(Value) ->
    gen_server:cast(server, {put, Value}).

reqid() ->
    I=gen_server:send_request(server, get),
    {_, R}=gen_server:receive_response(I, 1000),
    % {_, R}=gen_server:wait_response(I, 1000),
    % {_, R}=gen_server:check_response(1, I),
    io:format("~p ~n", [R]),

    C=gen_server:reqids_add(I, sudeep, gen_server:reqids_new()),
    io:format("~p ~p ~n", [gen_server:reqids_size(C), gen_server:reqids_to_list(C)]).