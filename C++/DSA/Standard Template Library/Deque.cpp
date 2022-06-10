//Deque
#include<iostream>
#include<deque>
using namespace std;
int main()
{
    deque<int>q, q2;
    deque<int>::iterator it;
    int x;
    while(x!=0)
    {
        cin>>x;
        q.push_front(x);
        q.push_back(x);
    }
    q.swap(q2);
    q2.pop_front();
    cout<<q2.size()<<" "<<q2.front()<<" "<<q2.at(2)<<endl;
    while(q2.empty()==0)
    {
        cout<<q2.back()<<" ";
        q2.pop_back();
    }
    cout<<endl;
    q.resize(5, 1);
    it=q.end();
    q.erase(it-2, it);
    q.insert(it-2, 2, -1);
    for(it=q.begin();it!=q.end();it++)
    cout<<*it<<" ";
    q.clear();
    return 0;
}