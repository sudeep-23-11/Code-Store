//Stacks
#include<iostream>
#include<stack>
using namespace std;
int main()
{
    stack<int>stk;
    stack<int>stl;
    int i, x, l;
    for(i=0;;i++)
    {
        cin>>x;
        if(x==0)
        break;
        else
        stk.push(x);
    }
    l=stk.size();
    for(i=0;i<l;i++)
    {
        cout<<stk.top()<<" ";
        stk.pop();
    }
    stk.swap(stl);
    cout<<endl<<stk.empty()<<endl;
    return 0;
}