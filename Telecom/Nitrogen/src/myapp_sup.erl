-module(myapp_sup).
-behaviour(supervisor).
-export([start_link/0, init/1]).
-define(CHILD(I, Type), {I, {I, start_link, []}, permanent, 5000, Type, [I]}).

start_link() ->
    supervisor:start_link({local, ?MODULE}, ?MODULE, []).

init([]) ->
    application:ensure_all_started(nitrogen_core),
    application:ensure_all_started(nitro_cache),
    application:ensure_all_started(crypto),
    application:ensure_all_started(nprocreg),
    application:ensure_all_started(simple_bridge),

    {ok, { {one_for_one, 5, 10}, []} }.