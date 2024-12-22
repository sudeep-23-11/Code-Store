% GenServer
-module(server).
-behaviour(gen_server).
-export([init/1, handle_call/3, handle_cast/2, handle_continue/2, handle_info/2, terminate/2]).

init(Args) ->
    State=Args,
    {ok, State}.
    % {ok, State, {continue, init_continue}}.
    % {ok, State, 1000}.
    % {stop, {shutdown, init_stop}}.

handle_call(get, _From, State) ->
    [H|_T]=State,
    % gen_server:reply(From, sudeep),
    {reply, H, State}.
    % {reply, H, State, {continue, call_continue}}.
    % {reply, H, State, 1000}.
    % {stop, {shutdown, call_stop}, H, State}.

handle_cast({put, Value}, State) ->
    NewState=[Value|State],
    {noreply, NewState}.
    % {noreply, NewState, {continue, cast_continue}}.
    % {noreply, NewState, 1000}.
    % {stop, {shutdown, cast_stop}, NewState}.

handle_continue(Info, State) ->
    io:format("~p ~n", [Info]),
    {noreply, State}.

handle_info(timeout, State) ->
    io:format("~p ~n", [timeout]),
    {noreply, State};
handle_info(Info, State) ->
    io:format("~p ~n", [Info]),
    {noreply, State}.

terminate(Reason, _State) ->
    io:format("~p ~n", [Reason]),
    ok.