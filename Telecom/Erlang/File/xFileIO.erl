% FileIO
-module(xFileIO).
-export([start/0]).

start() ->
    reading(),
    writing().

    % file:make_dir(D) ------------------- create folder D
    % file:list_dir(D) ------------------- content of folder D
    % file:del_dir(D) -------------------- delete empty folder D
    % file:del_dir_r(D) ------------------ delete non-empty folder D
    % file:rename(F, NF) ----------------- rename file F to NF
    % file:copy(F, NF) ------------------- copy file F to NF
    % file:delete(F) --------------------- delete file F
    % file:get_cwd() --------------------- get working folder
    % file:set_cwd(D) -------------------- set working folder to D

reading() ->
    {_, AF}=file:consult("reading.dat"),
    {_, BF}=file:read_file("reading.dat"),
    io:format("~p ~n ~p ~n", [AF, BF]),
    
    {_, F1}=file:open("reading.dat", [read]),
    {_, R}=file:read(F1, 12),
    {_, RL}=file:read_line(F1),
    {_, PR1}=file:pread(F1, 12, 23),
    file:position(F1, {bof, 12}),                                           % cur, eof
    {_, PR2}=file:read(F1, 23),
    file:close(F1),
    io:format("~p ~n ~p ~n ~p ~n ~p ~n", [R, RL, PR1, PR2]),

    {_, F2}=file:open("reading.dat", [read]),
    C=io:get_chars(F2, "", 12),
    L=io:get_line(F2, ""),
    {_, T}=io:read(F2, ""),
    file:close(F2),
    io:format("~p ~n ~p ~n ~p ~n", [C, L, T]).

writing() ->
    file:write_file("writing.dat", "hello world"),

    {_, F1}=file:open("writing.dat", [write]),
    file:truncate(F1),
    file:write(F1, "{69, 69.23,\n"),
    file:pwrite(F1, 12, "[-1, 0, 1], \"sudeep\"}.\n\n"),
    file:close(F1),

    {_, F2}=file:open("writing.dat", [append]),                             % exclusive
    io:put_chars(F2, "{69, 69.23,\n"),
    io:format(F2, "~p, ~p}. ~n ~n", [[-1, 0, 1], "sudeep"]),
    io:write(F2, {<<"sudeep">>, {sudeep,69}}),
    io:nl(F2),
    file:close(F2).