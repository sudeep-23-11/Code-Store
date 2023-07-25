//Stack
#include<iostream>
#include<stack>
using namespace std;
int main()
{
    stack<int>st, st2;
    int x;
    while(x)
    {
        cin>>x;
        st.push(x);
    }
    st.swap(st2);
    cout<<st2.size()<<endl;
    while(!st2.empty())
    {
        cout<<st2.top()<<" ";
        st2.pop();
    }
    return 0;
}