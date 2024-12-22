-module (index).
-compile(export_all).
-include_lib("nitrogen_core/include/wf.hrl").

main() -> #template { file="./priv/templates/bare.html" }.
title() -> "Nitrogen".
body() ->
    #container_12 { body=[
        #grid_8 { alpha=true, prefix=2, suffix=2, omega=true, body=inner_body() }
    ]}.

inner_body() -> 
    container:body()++
    form:body()++
    layout:body()++
    wf_e:body()++
    inplace_e:body().

event(Tag) -> wf_a:type(Tag).

inplace_textbox_event(Tag, Value) -> inplace_a:type(Tag, Value).
inplace_textarea_event(Tag, Value) -> inplace_a:type(Tag, Value).
inplace_event(Tag, Value) -> inplace_a:type(Tag, Value).