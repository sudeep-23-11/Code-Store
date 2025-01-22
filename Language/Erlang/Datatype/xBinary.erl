%Binary
-module(xBinary).
-export([props/0, create/0]).
-define(B, <<"abcde">>).

props() ->
    io:format("~p ~p ~n", [?B, <<97, 98, 99, 100, 101>>]),
    io:format("~p ~p ~n", [is_binary(?B), is_bitstring(?B)]),
    io:format("~p ~p ~p ~n", [size(?B), byte_size(?B), bit_size(?B)]),
    io:format("~p ~p ~p ~n", [binary:first(?B), binary:last(?B), binary:at(?B, 2)]),
    io:format("~p ~n", [binary:longest_common_prefix([<<"abc">>, <<"abd">>])]),
    io:format("~p ~n", [binary:longest_common_suffix([<<"acd">>, <<"bcd">>])]).

create() ->
    CB=binary:copy(?B, 3),
    PB=binary:part(?B, 2, 2),
    SB1=split_binary(?B, 2),
    io:format("~p ~p ~p ~n", [CB, PB, SB1]),

    MB=binary:match(?B, [<<"b">>, <<"de">>]),
    MSB=binary:matches(?B, [<<"b">>, <<"de">>]),
    RB=binary:replace(?B, [<<"b">>, <<"de">>], <<"xyz">>, [global]),
    SB2=binary:split(?B, [<<"b">>, <<"d">>], [global]),
    io:format("~p ~p ~p ~p ~n", [MB, MSB, RB, SB2]),
    
    A=binary_to_atom(atom_to_binary(sudeep)),
    I=binary_to_integer(integer_to_binary(69)),
    F=binary_to_float(float_to_binary(69.23)),
    T=binary_to_term(term_to_binary({sudeep, 69})),
    L=binary_to_list(list_to_binary([1, 2, 3])),
    io:format("~p ~p ~p ~p ~p ~n", [A, I, F, T, L]),

    LB=binary:list_to_bin(binary:bin_to_list(?B, 2, 2)),
    HB=binary:decode_hex(binary:encode_hex(?B, uppercase)),                     %lowercase
    USB=binary:decode_unsigned(binary:encode_unsigned(11111111, big), big),     %little little
    io:format("~p ~p ~p ~n", [LB, HB, USB]).