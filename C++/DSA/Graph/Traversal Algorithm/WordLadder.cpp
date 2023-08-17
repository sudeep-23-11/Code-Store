//WordLadder
#include<iostream>
#include<vector>
#include<queue>
#include<unordered_set>
using namespace std;
void BFS(string &bw, string &ew, unordered_set<string>&vis);
int main()
{
    int i, N;
    string s, bw, ew;
    unordered_set<string>vis;
    cin>>N;
    for(i=0;i<N;i++)
    {
        cin>>s;
        vis.insert(s);
    }
    cin>>bw>>ew;
    BFS(bw, ew, vis);
    return 0;
}
void BFS(string &bw, string &ew, unordered_set<string>&vis)
{
    int i, l;
    char j;
    string s, ts;
    vector<string>v, tv;
    unordered_set<string>st;
    queue<vector<string>>q;
    v.push_back(bw);
    q.push(v);
    if(vis.count(bw))
    vis.erase(bw);
    while(!q.empty())
    {
        l=q.size();
        while(l--)
        {
            v=q.front();
            q.pop();
            s=v[v.size()-1];
            if(s==ew)
            {
                cout<<v.size()<<endl;
                for(auto x:v)
                cout<<x<<" ";
                cout<<endl;
                goto _l;
            }
            for(i=0;i<s.size();i++)
            {
                for(j='a';j<='z';j++)
                {
                    ts=s;
                    ts[i]=j;
                    if(vis.count(ts))
                    {
                        tv=v;
                        tv.push_back(ts);
                        q.push(tv);
                        st.insert(ts);
                    }
                }
            }
        }
        for(auto i:st)
        vis.erase(i);
        st.clear();
    }
    _l: while(!q.empty())
    {
        v=q.front();
        q.pop();
        s=v[v.size()-1];
        if(s==ew)
        {
            for(auto x:v)
            cout<<x<<" ";
            cout<<endl;
        }
    }
}