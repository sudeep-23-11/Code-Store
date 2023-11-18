//SortStack
#include<iostream>
#include<stack>
using namespace std;
void sort(stack<int>&st);
void insert(stack<int>&st, int n);
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
    if(st.empty())
    return;
    int x=st.top();
    st.pop();
    sort(st);
    insert(st, x);
}
void insert(stack<int>&st, int n)
{
    if(st.empty() || n<=st.top())
    {
        st.push(n);
        return;
    }
    int x=st.top();
    st.pop();
    insert(st, n);
    st.push(x);
}