//QueueUsingStack
#include<iostream>
#include<stack>
using namespace std;
void push(int v, stack<int>&st);
void pop(stack<int>&st);
int main()
{
    stack<int>st;
    push(0, st);
    push(1, st);
    pop(st);
    push(2, st);
    pop(st);
    pop(st);
    return 0;
}
void push(int v, stack<int>&st)
{
    stack<int>t;
    while(!st.empty())
    {
        t.push(st.top());
        st.pop();
    }
    t.push(v);
    while(!t.empty())
    {
        st.push(t.top());
        t.pop();
    }
}
void pop(stack<int>&st)
{
    cout<<st.top()<<endl;
    st.pop();
}