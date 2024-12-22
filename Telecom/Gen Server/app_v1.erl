-module(app_v1).
-behaviour(gen_server).
-export([init/1, handle_call/3, handle_cast/2, terminate/2, code_change/3]).
-export([start/0, stop/0, get/0, put/2]).

init(Args) -> {ok, Args}.
handle_call(get, _From, State) -> {reply, State, State}.
handle_cast({put, Key, Value}, State) -> {noreply, [{Key, Value}|State]}.
terminate(_Reason, _State) -> ok.
code_change(_OldVsn={down, v2}, State, _Extra) -> {ok, maps:to_list(State)}.

start() -> gen_server:start({local, ?MODULE}, ?MODULE, [{0, 0}], []).
stop() -> gen_server:stop(?MODULE, normal, 1000).
get() -> gen_server:call(?MODULE, get, 1000).
put(Key, Value) -> gen_server:cast(?MODULE, {put, Key, Value}).