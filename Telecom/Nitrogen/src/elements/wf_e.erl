-module(wf_e).
-include_lib("nitrogen_core/include/wf.hrl").
-export([body/0]).

body() ->
    wf:eager(eml, #validate {
        success_text="Correct email", on=blur,
        validators=[
            #is_required { text="Required" },
            #min_length { text="Min length is 10", length=10 },
            #max_length { text="Max length is 15", length=15 },
            #is_email { text="Invalid email" }
        ]
    }),
    wf:defer(vdt, nmb, #validate {
        success_text="Correct number", on=submit,
        validators=[
            #is_integer { text="Number in between 10 and 15", min=10, max=15 },
            #confirm_same { text="Same Value", confirm_id="txb" },
            #confirm_password { text="Same Password", password="psd" }
        ]
    }),

    wf:state(page_state, hello),
    wf:session(session_state, world),
    wf:user(sudeep),
    wf:role(super_user, true),

    [
        #panel { id=e0, text="0" },
        #button { id=e5, text="5", postback=insert },

        #textbox { id=eml, text="", type="email" },
        #textbox { id=nmb, text="", type="number" },
        #button { id=vdt, text="validate", postback=validate },

        #button { id=sbt, text="submit", postback=submit },
        #flash{}
    ].