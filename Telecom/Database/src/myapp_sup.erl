-module(myapp_sup).
-behaviour(supervisor).
-export([start_link/0, init/1]).

start_link() ->
    supervisor:start_link({local, ?MODULE}, ?MODULE, []).

init([]) ->
    SupFlags=#{
        strategy => one_for_all,
        intensity => 5,
        period => 10
    },
    ChildSpecs=[#{id => xPostgreSQL,
        start => {xPostgreSQL, start_link, []},
        restart => transient,
        significant => false,
        shutdown => 5000,
        type => worker,
        modules => [xPostgreSQL]
    }],
    {ok, {SupFlags, ChildSpecs}}.