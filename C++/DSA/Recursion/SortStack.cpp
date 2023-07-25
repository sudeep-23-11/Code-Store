//SortStack
#include<iostream>
#include<stack>
using namespace std;
void sort(stack<int>&st);
void insert(int x, stack<int>&st);
int main()
{
    int x;
    stack<int>st;
    while(x)
    {
        cin>>x;
        st.push(x);
    }
    sort(st);
    while(!st.empty())
    {
        cout<<st.top()<<" ";
        st.pop();
    }
    return 0;
}
void sort(stack<int>&st)
{
    int x;
    if(st.empty())
    return;
    x=st.top();
    st.pop();
    sort(st);
    insert(x, st);
}
void insert(int x, stack<int>&st)
{
    int y;
    if(st.empty() || x>=st.top())
    st.push(x);
    else
    {
        y=st.top();
        st.pop();
        insert(x, st);
        st.push(y);
    }
}