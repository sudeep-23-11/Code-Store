//Sets
#include<iostream>
#include<set>
using namespace std;
int main()
{
    set<int>st;
    set<int>su;
    set<int>::iterator it;
    int x;
    while(x!=0)
    {
        cin>>x;
        st.insert(x);
    }
    st.erase(0);
    cout<<st.count(0)<<endl<<st.size()<<endl;
    for(auto i:st)
    cout<<i<<" ";
    cout<<endl<<*(st.find(5))<<endl;;
    cout<<*(st.lower_bound(5))<<endl<<*(st.upper_bound(5))<<endl;
    st.swap(su);
    for(it=su.begin();it!=su.end();it++)
    cout<<*it<<" ";
    su.clear();
    cout<<endl<<su.empty()<<endl;
    return 0;
}