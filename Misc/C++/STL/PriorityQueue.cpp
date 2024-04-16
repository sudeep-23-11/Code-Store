//PriorityQueue
#include<iostream>
#include<queue>
using namespace std;
int main()
{
    priority_queue<int>q, q2;
    priority_queue<int, vector<int>, greater<int>>a;
    int x;
    while(x)
    {
        cin>>x;
        q.push(x);
    }
    q.swap(q2);
    cout<<q2.size()<<endl;
    while(!q2.empty())
    {
        cout<<q2.top()<<" ";
        q2.pop();
    }
    return 0;
}