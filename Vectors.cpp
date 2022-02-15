//Vectors
#include<iostream>
#include<vector>
using namespace std;
int main()
{
    vector<int>v;
    vector<int>w;
    vector<int>::iterator it;
    int i, x;
    for(i=0;;i++)
    {
        cin>>x;
        if(x==0)
        break;
        else
        v.push_back(x);
    }
    cout<<v.front()<<" ";
    for(i=1;i<(v.size()-1);i++)
    cout<<v.at(i)<<" ";
    cout<<v.back()<<endl;
    v.pop_back();
    it=v.end();
    v.erase(it-3, it);
    v.insert(it-3, 3, 0);
    w.resize(v.size());
    v.swap(w);
    for(it=w.begin();it!=w.end();it++)
    cout<<*it<<" ";
    w.clear();
    cout<<endl<<w.empty()<<endl;
    return 0;
}