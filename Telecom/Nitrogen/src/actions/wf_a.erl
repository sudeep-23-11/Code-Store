-module(wf_a).
-include_lib("nitrogen_core/include/wf.hrl").
-export([type/1]).

type(insert) ->
    wf:insert_top(e0, #panel { id=e1, body=#value { text="1" }}),
    wf:insert_bottom(e0, #panel { id=e2, text="2" }),
    wf:insert_before(e0, #textbox { id=e3, text="3" }),
    wf:insert_after(e0, #button { id=e4, text="4", postback=update }),
    wf:disable(e5);

type(update) ->
    wf:update(e1, #value { text="5" }),
    wf:replace(e2, #panel { id=e2, text="6" }),
    wf:set(e3, "7"),
    wf:remove(e4),
    wf:enable(e5);

type(validate) ->
    io:format("~p ~n ~p ~n", [wf:q(rgp), wf:mq([txb, rgp])]),
    io:format("~p ~n", [wf:q_pl([txb, rgp])]),
    io:format("~p ~n ~p ~n", [wf:qs(ckb), wf:mqs([txb, ckb])]),
    io:format("~p ~n", [wf:qs_pl([txb, ckb])]),

    wf:redirect("https://www.youtube.com/");

type(submit) ->
    wf:wire(#clear_validation { validation_target=eml }),
    wf:wire(#clear_validation { validation_trigger=vdt }),

    io:format("~p ~p ~n", [wf:state(page_state), wf:state_default(page_state, na)]),
    io:format("~p ~p ~n", [wf:session(session_state), wf:session_default(session_state, na)]),
    wf:clear_state(),
    wf:clear_session(),
    wf:logout(),

    io:format("~p ~p ~n", [wf:user(), wf:role(super_user)]),
    wf:clear_roles(),
    wf:clear_user(),

    Msg=wf:f("~p ~n", ["Flash"]),
    wf:flash(Msg).