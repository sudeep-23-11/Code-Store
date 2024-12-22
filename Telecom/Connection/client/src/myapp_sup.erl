-module(myapp_sup).
-behaviour(supervisor).
-export([start_link/0, init/1]).
-export([start_hackney/0, stop_hackney/0, start_gun/0, stop_gun/0]).
-export([start_gun_websocket/0, stop_gun_websocket/0]).

specs(Id) ->
    #{id => Id,
    start => {Id, start_link, []},
    restart => transient,
    significant => false,
    shutdown => 5000,
    type => worker,
    modules => [Id]}.

start_link() ->
    supervisor:start_link({local, ?MODULE}, ?MODULE, []).

init([]) ->
    SupFlags=#{strategy => one_for_one,
        intensity => 5,
        period => 10},
    ChildSpecs=[],
    {ok, {SupFlags, ChildSpecs}}.

start_hackney() ->
    supervisor:start_child(?MODULE, specs(xHackney)).
stop_hackney() ->
    supervisor:terminate_child(?MODULE, xHackney),
    supervisor:delete_child(?MODULE, xHackney).

start_gun() ->
    supervisor:start_child(?MODULE, specs(xGun)).
stop_gun() ->
    supervisor:terminate_child(?MODULE, xGun),
    supervisor:delete_child(?MODULE, xGun).

start_gun_websocket() ->
    supervisor:start_child(?MODULE, specs(xGunWebsocket)).
stop_gun_websocket() ->
    supervisor:terminate_child(?MODULE, xGunWebsocket),
    supervisor:delete_child(?MODULE, xGunWebsocket).