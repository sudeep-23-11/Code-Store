//UsingDFS
#include<iostream>
#include<vector>
#include<stack>
using namespace std;
void DFS(int n, vector<int>adj[], bool vis[], stack<int>&st);
int main()
{
    int i, n, m, u, v;
    cin>>n>>m;
    vector<int>adj[n+1];
    bool vis[n+1]={false};
    stack<int>st;
    for(i=1;i<=m;i++)
    {
        cin>>u>>v;
        adj[u].push_back(v);
    }
    for(i=1;i<=n;i++)
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
void DFS(int n, vector<int>adj[], bool vis[], stack<int>&st)
{
    vis[n]=true;
    for(auto i:adj[n])
    {
        if(vis[i]==false)
        DFS(i, adj, vis, st);
    }
    st.push(n);
}