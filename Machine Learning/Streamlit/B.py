import streamlit as st
from datetime import date
from datetime import time


#Media
st.image(image="../Media/images/github1.png", caption="Caption", width=200)
st.audio(data="../Media/audios/Github.mp3", format="audio/mp3", start_time=0)
st.video(data="../Media/videos/Github.mp4", format="video/mp4", start_time=0)


#Input
st.button(label="Button", type="secondary")                                                                     #primary
st.download_button(label="Download Button", data="streamlit", file_name="streamlit.txt", mime="text")

st.checkbox(label="Checkbox", value=False)
st.radio(label="Radio", options=["A", "B", "C"], index=0, horizontal=False)
st.selectbox(label="Dropdown", options=["A", "B", "C"], index=0)
st.multiselect(label="Multi Select Dropdown", options=["A", "B", "C"], default=["A", "B"], max_selections=2)

st.number_input(label="Number", min_value=0, max_value=100, value=10, step=1)
st.slider(label="Numerical Sider", min_value=0, max_value=100, value=10, step=1)
st.select_slider(label="Slider", options=["A", "B", "C"], value="A")

st.text_input(label="Text Area", value="", placeholder="Enter", max_chars=100, type="default")                  #password
st.text_area(label="Multi Line Text Area", value="", placeholder="Enter", max_chars=100, height=100)

st.date_input(label="Date", min_value=date(2000, 1, 1), max_value=date(2100, 12, 31), value=date(2050, 7, 15))
st.time_input(label="Time", value=time(10, 20))

st.color_picker(label="Color", value="#FF0000")
st.file_uploader(label="File", type=["png", "jpg"], accept_multiple_files=False)
st.camera_input(label="Camera")

with st.form(key="Form", clear_on_submit=False):
    st.text("Form")
    st.form_submit_button(label="Submit", type="secondary")                                                     #primary