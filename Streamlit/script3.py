import streamlit as st
import time


#Status
P=st.progress(value=0)
with st.spinner(text="Spinner"):
    for i in range(100):
        time.sleep(0.1)
        P.progress(i)

st.balloons()
st.snow()

st.error("Error")
st.info("Information")
st.success("Success")
st.warning("Warning")
st.exception(RuntimeError("Exception"))


#layout
with st.sidebar:
    st.text("Sidebar")
with st.expander(label="Expander", expanded=False):
    st.text("Expander")

c1, c2, c3=st.columns(spec=[1, 2, 3], gap="small")                  #medium, large
with c1:
    st.text("Column 1")
with c2:
    st.text("Column 2")
with c3:
    st.text("Column 3")
t1, t2, t3=st.tabs(tabs=["A", "B", "C"])
with t1:
    st.text("Tab 1")
with t2:
    st.text("Tab 2")
with t3:
    st.text("Tab 3")

C=st.container()
C.text("streamlit")
C.text("Multi Element Container")
E=st.empty()
E.text("streamlit")
E.text("Single Element Container")


#Execution
st.stop()