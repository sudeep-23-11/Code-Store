//ReverseStack
#include<iostream>
#include<stack>
using namespace std;
stack<int>st;
void reverse();
void insert(int x);
int main()
{
    int x;
    while(x!=0)
    {
        cin>>x;
        st.push(x);
    }
    reverse();
    while(st.empty()==0)
    {
        cout<<st.top()<<" ";
        st.pop();
    }
    return 0;
}
void reverse()
{
    int x;
    if(st.empty()==1)
    return;
    x=st.top();
    st.pop();
    reverse();
    insert(x);
}
void insert(int x)
{
    int y;
    if(st.empty()==1)
    st.push(x);
    else
    {
        y=st.top();
        st.pop();
        insert(x);
        st.push(y);
    }
}