-module(inplace_e).
-include_lib("nitrogen_core/include/wf.hrl").
-export([body/0]).

body() -> [
    #inplace_textbox { text="Inplace Input",
        start_mode=view, tag=itxb },                                %edit
    #inplace_textarea { text="Inplace Text Area",
        start_mode=view, tag=itxa },                                %edit

    #inplace { text="Inplace", view=#panel{}, edit=#textbox{},
        start_mode=view, tag=ipl                                    %edit
    }
].