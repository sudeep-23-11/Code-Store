% Ftp
-module(xFtp).
-export([start/0]).
-define(IP, "0.0.0.0").
-define(UN, "hemal").
-define(PW, "desai").
-define(AC, "hemal").
-define(RP, "/home/hemal/").
-define(LP, "/home/sudeep/").

start() ->
    ftp:start(),
    {_, Connection}=ftp:open(?IP, 21),
    ftp:user(Connection, ?UN, ?PW),
    ftp:account(Connection, ?AC),
    ftp:type(Connection, ascii),                                            % binary
    reading(Connection),
    writing(Connection),
    ftp:close(Connection),
    ftp:stop().

    % ftp:mkdir(C, D) -------------------- create folder D
    % ftp:nlist(C, D) -------------------- content of folder D in short form
    % ftp:ls(C, D) ----------------------- content of folder D in long form
    % ftp:rmdir(C, D) -------------------- delete folder D
    % ftp:rename(C, F, NF) --------------- rename file F to NF
    % ftp:delete(C, F) ------------------- delete file F
    % ftp:pwd(C) ------------------------- get working folder in remote
    % ftp:cd(C, D) ----------------------- set working folder to D in remote
    % ftp:lpwd(C) ------------------------ get working folder in local
    % ftp:lcd(C, D) ---------------------- set working folder to D in local

reading(C) ->
    {_, BF}=ftp:recv_bin(C, ?RP++"reading.dat"),
    io:format("~p ~n", [BF]),

    ftp:recv_chunk_start(C, ?RP++"reading.dat"),
    {_, CF}=ftp:recv_chunk(C),
    io:format("~p ~n", [CF]),

    ftp:recv(C, ?RP++"reading.dat", ?LP++"writing.dat").

writing(C) ->
    ftp:send_bin(C, "hello world", ?RP++"writing.dat"),
    ftp:append_bin(C, "hello world", ?RP++"writing.dat"),

    ftp:send_chunk_start(C, ?RP++"writing.dat"),
    ftp:send_chunk(C, "hello world"),
    ftp:send_chunk_end(C),
    ftp:append_chunk_start(C, ?RP++"writing.dat"),
    ftp:append_chunk(C, "hello world"),
    ftp:append_chunk_end(C),

    ftp:send(C, ?LP++"reading.dat", ?RP++"writing.dat"),
    ftp:append(C, ?LP++"reading.dat", ?RP++"writing.dat").