//AlienDictionary
#include<iostream>
#include<vector>
#include<stack>
using namespace std;
void DFS(int n, vector<char>adj[], bool vis[], stack<char>&st);
int main()
{
    int i, j, n;
    string p, s;
    cin>>n;
    vector<char>adj[4];
    bool vis[4]={false};
    stack<char>st;
    cin>>p;
    for(i=1;i<n;i++)
    {
        cin>>s;
        for(j=0;j<min(p.size(), s.size());j++)
        {
            if(p[j]!=s[j])
            {
                adj[p[j]-'a'].push_back(s[j]);
                break;
            }
        }
        p=s;
    }
    for(i=0;i<4;i++)
    {
        if(vis[i]==false)
        DFS(i, adj, vis, st);
    }
    while(st.empty()==0)
    {
        cout<<st.top()<<" ";
        st.pop();
    }
    return 0;
}
void DFS(int n, vector<char>adj[], bool vis[], stack<char>&st)
{
    vis[n]=true;
    for(auto i:adj[n])
    {
        if(vis[i-'a']==false)
        DFS(i-'a', adj, vis, st);
    }
    st.push(n+'a');
}