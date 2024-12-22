% Supervisor
-module(xSupervisor).
-behaviour(supervisor).
-export([init/1, start/0, child/0]).

specs(Id, Func) -> #{id => Id,
    start => {ops, Func, [2, 3]},
    restart => transient,                                                   % permanent, temporary
    significant => false,                                                   % true
    shutdown => 5000,                                                       % brutal_kill
    type => worker,                                                         % supervisor
    modules => [ops]}.                                                      % dynamic

init(Args) ->
    {MaxR, MaxT}=Args,
    SupFlags=#{strategy => one_for_one,                                     % one_for_all, rest_for_one, simple_one_for_one
        intensity => MaxR,
        period => MaxT},
    ChildSpec1=specs(child1, add_proc),
    ChildSpec2=specs(child2, subtract_proc),

    io:format("~p ", [supervisor:check_childspecs([ChildSpec1, ChildSpec2])]),
    {ok, {SupFlags, [ChildSpec1, ChildSpec2]}}.
    % ignore.

start() ->
    supervisor:start_link({local, ?MODULE}, ?MODULE, {5, 10}),
    io:format("~n ~p ~n ~p ~n", [supervisor:count_children(?MODULE), supervisor:which_children(?MODULE)]).

child() ->
    ChildSpec3=specs(child3, multiply_proc),
    supervisor:start_child(?MODULE, ChildSpec3),
    io:format("~n ~p ~n", [supervisor:get_childspec(?MODULE, child3)]),

    supervisor:terminate_child(?MODULE, child3),
    supervisor:restart_child(?MODULE, child3),
    supervisor:terminate_child(?MODULE, child3),
    supervisor:delete_child(?MODULE, child3).