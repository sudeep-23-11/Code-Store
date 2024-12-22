-module(form).
-include_lib("nitrogen_core/include/wf.hrl").
-export([body/0]).

body() -> [
    #fieldset { text="Fieldset", legend_text="Legend" },

    #textbox { text="Input", maxlength=10, size=20,
        disabled=false, readonly=false, placeholder="Enter",
        id=txb, next=txa, type="text"   % email, tel, url, search, number, range, color
                                        % month, week, date, datetime, datetime-local, time
    },
    #textarea { text="Text Area", rows=10, columns=20,
        disabled=false, readonly=false, placeholder="Enter",
        id=txa, next=psd, actions=action:type(change)
    },
    #password { disabled=false, readonly=false,
        id=psd, next=btn, actions=action:type(focus)
    },

    #checkbox { text="HTML", value="HTML", checked=true, id=ckb },
    #checkbox { text="CSS", value="CSS", id=ckb },
    #radiogroup { id=rgp, body=[
        #radio { text="JavaScript", value="JavaScript", checked=true },
        #radio { text="TypeScript", value="TypeScript" }
    ]},
    #dropdown { options=[
        #option { text="Python", value="Python", selected=true },
        #option { text="Java", value="Java" }
    ]},

    #button { text="Button", disabled=false, id=btn, actions=action:type(click) }
].