% PostgreSQL
-module(xPostgreSQL).
-behaviour(gen_server).
-export([start_link/0, stop/0, simple/0, extended/0]).
-export([init/1, handle_call/3, terminate/2]).

start_link() ->
    application:ensure_all_started(epgsql),
    gen_server:start_link({local, ?MODULE}, ?MODULE, [], []).
stop() ->
    gen_server:stop(?MODULE, normal, 1000).

simple() ->
    gen_server:call(?MODULE, simple, 1000).
extended() ->
    gen_server:call(?MODULE, extended, 1000).

init([]) ->
    {_, Connection}=epgsql:connect(#{host => "localhost",
        username => "root",
        password => "sudeep23posq",
        database => "demo",
        port => 5432}),
    {ok, Connection}.

handle_call(simple, _From, Connection) ->
    epgsql:squery(Connection, "create table data (name varchar(255), iq int)"),
    epgsql:squery(Connection, "insert into data (name, iq) values ('aarush', 90)"),
    epgsql:squery(Connection, "insert into data (name, iq) values ('aryan', 60)"),
    epgsql:squery(Connection, "insert into data (name, iq) values ('shivam', -30)"),

    epgsql:squery(Connection, "update data set iq=30 where iq<0"),
    epgsql:squery(Connection, "delete from data where iq=60"),
    {_, _Columns, Rows}=epgsql:squery(Connection, "select * from data"),
    epgsql:squery(Connection, "drop table data"),
    {reply, Rows, Connection};

handle_call(extended, _From, Connection) ->
    epgsql:equery(Connection, "create table data (name varchar(255), iq int)"),
    epgsql:equery(Connection, "insert into data (name, iq) values ($1, $2)", ['aarush', 90]),
    epgsql:equery(Connection, "insert into data (name, iq) values ($1, $2)", ['aryan', 60]),
    epgsql:equery(Connection, "insert into data (name, iq) values ($1, $2)", ['shivam', -30]),

    epgsql:equery(Connection, "update data set iq=$1 where iq<$2", [30, 0]),
    epgsql:equery(Connection, "delete from data where iq=$1", [60]),
    {_, _Columns, Rows}=epgsql:equery(Connection, "select * from data"),
    epgsql:equery(Connection, "drop table data"),
    {reply, Rows, Connection}.

terminate(_Reason, Connection) ->
    epgsql:close(Connection).