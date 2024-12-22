-module(myapp_app).
-behaviour(application).
-export([start/2, stop/1]).

start(_StartType, _StartArgs) ->
    myapp_sup:start_link().

stop(_State) ->
    ok.

% rebar3 new app myapp
% rebar3 update
% rebar3 compile
% rebar3 shell