//Queues
#include<iostream>
#include<queue>
using namespace std;
int main()
{
    queue<int>q, q2;
    int x;
    while(x!=0)
    {
        cin>>x;
        q.push(x);
    }
    q.swap(q2);
    cout<<q2.size()<<" "<<q2.back()<<endl;
    while(q2.empty()==0)
    {
        cout<<q2.front()<<" ";
        q2.pop();
    }
    return 0;
}