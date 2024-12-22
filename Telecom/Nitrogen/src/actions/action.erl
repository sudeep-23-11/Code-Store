-module(action).
-include_lib("nitrogen_core/include/wf.hrl").
-export([type/1]).

type(over_out) -> [
    #event { type=mouseover, actions=#alert { text="Alert" } },
    #event { type=mouseout, actions=#console_log { text="Console log" } }
];

type(down_up) -> [
    #event { type=mousedown, actions=#confirm { text="Confirm" } },
    #event { type=mouseup, actions=#script { script="console.log(\"Script\");" } }
];

type(change) -> #event { type=change, trigger=txa, actions=[
    #make_readonly { target=txb },
    #disable { target=btn }
]};

type(focus) -> #event { type=focus, trigger=psd, actions=[
    #make_writable { target=txb },
    #enable { target=btn }
]};

type(click) -> #event { type=click, delay=5000, show_if=true,
    actions=#redirect { url="https://www.youtube.com/" }
}.