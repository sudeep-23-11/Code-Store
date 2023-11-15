//MaximumStack
#include<iostream>
#include<stack>
using namespace std;
void push(int v, stack<int>&st, int &m);
void pop(stack<int>&st, int &m);
int main()
{
    int m;
    stack<int>st;
    m=0;
    push(0, st, m);
    cout<<"Maximum "<<m<<endl;
    push(1, st, m);
    cout<<"Maximum "<<m<<endl;
    pop(st, m);
    cout<<"Maximum "<<m<<endl;
    push(2, st, m);
    cout<<"Maximum "<<m<<endl;
    pop(st, m);
    cout<<"Maximum "<<m<<endl;
    pop(st, m);
    return 0;
}
void push(int v, stack<int>&st, int &m)
{
    if(st.empty())
    {
        st.push(v);
        m=v;
    }
    else if(v>m)
    {
        st.push(v*2-m);
        m=v;
    }
    else
    st.push(v);
}
void pop(stack<int>&st, int &m)
{
    if(st.top()>m)
    {
        cout<<m<<endl;
        m=m*2-st.top();
    }
    else
    cout<<st.top()<<endl;
    st.pop();
}