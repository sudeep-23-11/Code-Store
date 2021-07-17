//Maps
#include<iostream>
#include<map>
using namespace std;
int main()
{
    map<string, int>mp;
    map<string, int>mq;
    map<string, int>::iterator it;
    string x;
    int y;
    while((x!="Null")&&(y!=0))
    {
        cin>>x>>y;
        mp.insert(make_pair(x, y));
    }
    mp.erase("Null");
    cout<<mp.count("Null")<<endl<<mp.size()<<endl;
    for(auto i:mp)
    cout<<(i.first)<<" "<<(i.second)<<endl;
    cout<<mp.at("Sudeep")<<endl;
    cout<<(mp.find("Sudeep")->first)<<" "<<(mp.find("Sudeep")->second)<<endl;
    cout<<(mp.lower_bound("Sudeep")->first)<<" "<<(mp.lower_bound("Sudeep")->second)<<endl;
    cout<<(mp.upper_bound("Sudeep")->first)<<" "<<(mp.upper_bound("Sudeep")->second)<<endl;
    mp.swap(mq);
    for(it=mq.begin();it!=mq.end();it++)
    cout<<(it->first)<<" "<<(it->second)<<endl;
    mq.clear();
    cout<<mq.empty()<<endl;
    return 0;
}