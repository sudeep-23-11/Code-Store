//WordLadderI
#include<iostream>
#include<queue>
#include<set>
using namespace std;
int BFS(set<string>st, string s, string d);
int main()
{
    int i, N;
    string s, d;
    set<string>st;
    cin>>N;
    for(i=0;i<N;i++)
    {
        cin>>s;
        st.insert(s);
    }
    cin>>s>>d;
    cout<<BFS(st, s, d)<<endl;
    return 0;
}
int BFS(set<string>st, string s, string d)
{
    int i, j;
    string t;
    queue<pair<string, int>>q;
    q.push(make_pair(s, 1));
    st.erase(s);
    while(q.empty()==0)
    {
        auto x=q.front();
        q.pop();
        for(i=0;i<x.first.size();i++)
        {
            t=x.first;
            for(j=0;j<26;j++)
            {
                t[i]='a'+j;
                if(st.count(t)==1)
                {
                    if(t==d)
                    return x.second+1;
                    q.push(make_pair(t, x.second+1));
                    st.erase(t);
                }
            }
        }
    }
}