import streamlit as st
import pandas as pd
import matplotlib.pyplot as plt


x=5
y='''def func(a, b):
    return a+b'''
dict1={"Name":["Sudeep", "Aryan", "Shivam", "Jatin", "Anshuman"], "Rank":[1, 2, 3, 4, 5], "PriceMoney":[1000.0, 500.0, 200.0, 100.0, 40.0]}
df1=pd.DataFrame(dict1)
dict2={"A":[1, 3, 5, 7, 8, 6, 4, 2], "B":[2, 4, 6, 8, 1, 3, 5, 7]}
df2=pd.DataFrame(dict2)


#Text
st.title("Title")
st.header("Header")
st.subheader("Sub Header")
st.caption("Caption")
st.text("Text")

st.markdown("Markdown")
st.write("x =", x)
st.code(y)


#Data
st.metric(label="Temperature", value="25 °C", delta="-2.5 °C", delta_color="normal")                    #inverse, off

st.json(dict1)
st.dataframe(data=df1, height=200, width=300)
st.table(data=df1)


#Plot
st.line_chart(data=df2, x="A", y="B", height=400, width=600)
st.area_chart(data=df2, x="A", y="B", height=400, width=600)
st.bar_chart(data=df2, x="A", y="B", height=400, width=600)

fig, ax = plt.subplots()
ax.scatter([1, 3, 5, 7, 8, 6, 4, 2], [2, 4, 6, 8, 1, 3, 5, 7])
st.pyplot(fig)


#streamlit run app.py