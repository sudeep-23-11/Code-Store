//Sets
#include<iostream>
#include<set>
#include<unordered_set>
using namespace std;
int main()
{
    set<int>st, st2;
    set<int, greater<int>>a;
    multiset<int>b;
    unordered_set<int>c;
    unordered_multiset<int>d;
    set<int>::iterator it;
    int x;
    while(x!=0)
    {
        cin>>x;
        st.insert(x);
    }
    st.swap(st2);
    st2.erase(0);
    cout<<st2.size()<<" "<<st2.count(0)<<endl;
    cout<<*st2.find(2)<<" "<<*st2.lower_bound(2)<<" "<<*st2.upper_bound(2)<<endl;
    for(it=st2.begin();it!=st2.end();it++)
    cout<<*it<<" ";
    st2.clear();
    cout<<endl<<st2.empty()<<endl;
    return 0;
}