//PriorityQueues
#include<iostream>
#include<queue>
using namespace std;
int main()
{
    priority_queue<int>pque;
    priority_queue<int>pquf;
    int i, x, l;
    for(i=0;;i++)
    {
        cin>>x;
        if(x==0)
        break;
        else
        pque.push(x);
    }
    l=pque.size();
    for(i=0;i<l;i++)
    {
        cout<<pque.top()<<" ";
        pque.pop();
    }
    pque.swap(pquf);
    cout<<endl<<pque.empty()<<endl;
    return 0;
}