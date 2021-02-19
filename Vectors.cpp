//Vectors
#include<iostream>
#include<vector>
using namespace std;
int main()
{
    vector<int>v;
    vector<int>w(10, 0);
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
    it=v.end();
    v.erase(it-3, it);
    v.insert(it-3, 3, 0);
    for(it=v.begin();it<v.end();it++)
    cout<<*it<<" ";
    cout<<endl;
    v.clear();
    v.swap(w);
    v.pop_back();
    cout<<w.empty()<<endl;
    for(i=0;i<v.size();i++)
    cout<<v[i]<<" ";
    cout<<endl;
    return 0;
}