%Sftp
-module(xSftp).
-export([start/0]).
-define(IP, "0.0.0.0").
-define(UN, "hemal").
-define(PW, "desai").
-define(RP, "/home/hemal/").

start() ->
    application:ensure_all_started(ssh),
    {_, Connection}=ssh:connect(?IP, 22, [{user, ?UN}, {password, ?PW}]),
    {_, Channel}=ssh_sftp:start_channel(Connection),
    {_, Handle}=ssh_sftp:opendir(Channel, "sudeep"),
    ssh_sftp:close(Channel, Handle),
    reading(Channel),
    writing(Channel),
    ssh_sftp:stop_channel(Channel),
    ssh:close(Connection).

    % sshc_sftp:make_dir(C, D) ----------- create folder D
    % {_, L}=ssh_sftp:list_dir(C, D) ----- content of folder D
    % ssh_sftp:del_dir(C, D) ------------- delete folder D
    % ssh_sftp:rename(C, F, NF) ---------- rename file F to NF
    % ssh_sftp:delete(C, F) -------------- delete file F

reading(C) ->
    {_, BF}=ssh_sftp:read_file(C, ?RP++"reading.dat"),
    io:format("~p ~n", [BF]),

    {_, H}=ssh_sftp:open(C, ?RP++"reading.dat", [read]),
    {_, R}=ssh_sftp:read(C, H, 12),
    {_, PR1}=ssh_sftp:pread(C, H, 12, 23),
    ssh_sftp:position(C, H, {bof, 12}),                                     %cur, eof
    {_, PR2}=ssh_sftp:read(C, H, 23),
    ssh_sftp:close(C, H),
    io:format("~p ~n ~p ~n ~p ~n", [R, PR1, PR2]).

writing(C) ->
    ssh_sftp:write_file(C, ?RP++"writing.dat", "hello world"),

    {_, H}=ssh_sftp:open(C, ?RP++"writing.dat", [write]),                   %append
    ssh_sftp:write(C, H, "{69, 69.23,\n"),
    ssh_sftp:pwrite(C, H, 12, "[-1, 0, 1], \"sudeep\"}.\n\n"),
    ssh_sftp:close(C, H).