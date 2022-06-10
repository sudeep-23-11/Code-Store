//Vector
#include<iostream>
#include<vector>
using namespace std;
int main()
{
    vector<int>v, v2;
    vector<int>::iterator it;
    int x;
    while(x!=0)
    {
        cin>>x;
        v.push_back(x);
    }
    v.swap(v2);
    cout<<v2.size()<<" "<<v2.front()<<" "<<v2.at(2)<<endl;
    while(v2.empty()==0)
    {
        cout<<v2.back()<<" ";
        v2.pop_back();
    }
    cout<<endl;
    v.resize(5, 1);
    it=v.end();
    v.erase(it-2, it);
    v.insert(it-2, 2, -1);
    for(it=v.begin();it!=v.end();it++)
    cout<<*it<<" ";
    v.clear();
    return 0;
}