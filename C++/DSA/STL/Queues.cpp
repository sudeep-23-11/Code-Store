//Queues
#include<iostream>
#include<queue>
using namespace std;
int main()
{
    queue<int>que;
    queue<int>quf;
    int i, x, l;
    for(i=0;;i++)
    {
        cin>>x;
        if(x==0)
        break;
        else
        que.push(x);
    }
    l=que.size();
    for(i=0;i<l;i++)
    {
        cout<<que.front()<<" ";
        que.pop();
    }
    que.swap(quf);
    cout<<endl<<que.empty()<<endl;
    return 0;
}