-module(container).
-include_lib("nitrogen_core/include/wf.hrl").
-export([body/0]).

body() -> [
    #panel { text="Div" },
    #span { text="Span" },

    #header { body="Header", style="background-color: #FF0000;" },
    #nav { body="Nav", html_id="A" },
    #main { body="Main", class="B" },
    #section { body="Section", class="B" },
    #article { body="Article", title="Title" },
    #aside { body="Aside", show_if=true },
    #footer { body="Footer", actions=action:type(over_out) },
    #main { body="Main", actions=action:type(down_up) },

    #mark { text="Mark" },
    #time { text="Time", datetime="2002-11-23 18:30" }
].