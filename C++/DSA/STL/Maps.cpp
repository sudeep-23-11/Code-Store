//Maps
#include<iostream>
#include<map>
#include<unordered_map>
using namespace std;
int main()
{
    map<string, int>m, m2;
    map<int, int, greater<int>>a;
    multimap<int, int>b;
    unordered_map<int, int>c;
    unordered_multimap<int, int>d;
    map<string, int>::iterator it;
    int x;
    string s;
    while(x!=0)
    {
        cin>>x;
        s='a'+to_string(x);
        m.insert(make_pair(s, x));
    }
    m.swap(m2);
    m2.erase("a0");
    cout<<m2.size()<<" "<<m2.count("a0")<<" "<<m2.at("a2")<<endl;
    cout<<m2.find("a2")->first<<" "<<m2.find("a2")->second<<endl;
    cout<<m2.lower_bound("a2")->first<<" "<<m2.lower_bound("a2")->second<<endl;
    cout<<m2.upper_bound("a2")->first<<" "<<m2.upper_bound("a2")->second<<endl;
    for(it=m2.begin();it!=m2.end();it++)
    cout<<it->first<<" "<<it->second<<endl;
    m2.clear();
    cout<<m2.empty()<<endl;
    return 0;
}