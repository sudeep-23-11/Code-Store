//WordLadderII
#include<iostream>
#include<vector>
#include<queue>
#include<set>
using namespace std;
void BFS(set<string>st, string s, string d);
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
    BFS(st, s, d);
    return 0;
}
void BFS(set<string>st, string s, string d)
{
    bool f;
    int i, j, l;
    string t;
    vector<string>v;
    queue<vector<string>>q;
    set<string>_st;
    f=false;
    v.push_back(s);
    q.push(v);
    st.erase(s);
    while(q.empty()==0)
    {
        l=q.size();
        while(l--)
        {
            auto x=q.front();
            q.pop();
            if((x[x.size()-1])==d)
            {
                for(auto _x:x)
                cout<<_x<<" ";
                cout<<endl;
                f=true;
                continue;
            }
            for(i=0;i<x[x.size()-1].size();i++)
            {
                t=x[x.size()-1];
                for(j=0;j<26;j++)
                {
                    t[i]='a'+j;
                    if(st.count(t)==1)
                    {
                        x.push_back(t);
                        q.push(x);
                        x.pop_back();
                        _st.insert(t);
                    }
                }
            }
        }
        for(auto _x:_st)
        st.erase(_x);
        _st.clear();
        if(f==true)
        break;
    }
}