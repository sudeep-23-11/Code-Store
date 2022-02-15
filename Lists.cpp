//Lists
#include<iostream>
#include<list>
using namespace std;
int main()
{
    list<int>lis;
    list<int>lit;
    list<int>::iterator it, it1, it2;
    int i, x;
    for(i=0;;i++)
    {
        cin>>x;
        if(x==0)
        break;
        else if(i%2==0)
        lis.push_front(x);
        else
        lis.push_back(x);
    }
    it1=lis.begin();
    it1++;
    it2=lis.end();
    it2--;
    cout<<lis.front()<<" ";
    for(it=it1;it!=it2;it++)
    cout<<*it<<" ";
    cout<<lis.back()<<endl;
    lis.pop_front();
    lis.pop_back();
    it1=lis.end();
    it1--;
    it1--;
    it1--;
    it2=lis.end();
    lis.erase(it1, it2);
    it1=lis.end();
    lis.insert(it1, 3, 0);
    for(it=lis.begin();it!=lis.end();it++)
    cout<<*it<<" ";
    cout<<endl;
    lis.sort();
    lis.reverse();
    lit.resize(lis.size());
    lis.swap(lit);
    for(it=lit.begin();it!=lit.end();it++)
    cout<<*it<<" ";
    lit.clear();
    cout<<endl<<lit.empty()<<endl;
    return 0;
}