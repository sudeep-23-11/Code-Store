//StackUsingQueue
#include<iostream>
#include<queue>
using namespace std;
void push(int v, queue<int>&q);
void pop(queue<int>&q);
int main()
{
    queue<int>q;
    push(0, q);
    push(1, q);
    pop(q);
    push(2, q);
    pop(q);
    pop(q);
    return 0;
}
void push(int v, queue<int>&q)
{
    queue<int>t;
    t.push(v);
    while(!q.empty())
    {
        t.push(q.front());
        q.pop();
    }
    q.swap(t);
}
void pop(queue<int>&q)
{
    cout<<q.front()<<endl;
    q.pop();
}