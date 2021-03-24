//Deques
#include<iostream>
#include<deque>
using namespace std;
int main()
{
    
    deque<int>deq;
    deque<int>der;
    deque<int>::iterator it;
    int i, x, l;
    for(i=0;;i++)
    {
        cin>>x;
        if(x==0)
        break;
        else if(i%2==0)
        deq.push_front(x);
        else
        deq.push_back(x);
    }
    cout<<deq.front()<<" ";
    for(i=1;i<(deq.size()-1);i++)
    cout<<deq.at(i)<<" ";
    cout<<deq.back()<<endl;
    deq.pop_front();
    deq.pop_back();
    it=deq.end();
    deq.erase(it-3, it);
    deq.insert(it-3, 3, 0);
    for(it=deq.begin();it!=deq.end();it++)
    cout<<*it<<" ";
    deq.swap(der);
    der.clear();
    cout<<endl<<der.empty()<<endl;
    return 0;
}