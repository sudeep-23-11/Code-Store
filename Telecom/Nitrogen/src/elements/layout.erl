-module(layout).
-include_lib("nitrogen_core/include/wf.hrl").
-export([body/0]).

body() -> [
    #h1 { text="H1 Heading" },
    #h2 { text="H2 Heading" },
    #h3 { text="H3 Heading" },
    #h4 { text="H4 Heading" },

    #label { text="Label" },
    #value { text="Value" },
    #literal { text="Literal" },

    #list { numbered=false, body=[
        #listitem{ text="HTML" },
        #listitem{ text="CSS" },
        #listitem{ text="JavaScript" }
    ]},

    #table { rows=[
        #tablerow { cells=[
            #tableheader { text="Front", colspan=2 },
            #tableheader { text="Back" }
        ]},
        #tablerow { cells=[
            #tablecell { text="React" },
            #tablecell { text="Next", rowspan=2 },
            #tablecell { text="Node", align="center" }              %left, right
        ]},
        #tablerow { cells=[
            #tablecell { text="Redux" },
            #tablecell { text="Express", valign="middle" }          %top, bottom
        ]}
    ]},
    #singlerow { cells=[
        #tablecell { text="MySQL" },
        #tablecell { text="MongoDB" }
    ]},

    #image { image="images/erlang.png", alt="loading" },
    #spinner { image="images/spinner.gif" },
    #p{},
    "
    Paragraph
    ",
    #p{},

    #link { text="Link", url="https://www.youtube.com/", new=false },
    #email_link { text="Email", email="abc@xyz.com" },
    #br{},
    #hr{}
].