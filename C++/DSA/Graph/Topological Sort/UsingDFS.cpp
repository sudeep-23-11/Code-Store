//UsingDFS
#include<iostream>
#include<vector>
#include<cstring>
#include<stack>
using namespace std;
bool vis[100001];
vector<int>adj[100001];
stack<int>st;
void DFS(int n);
int main()
{
    int i, n, m, u, v;
    cin>>n>>m;
    memset(vis, false, sizeof(vis));
    for(i=1;i<=m;i++)
    {
        cin>>u>>v;
        adj[u].push_back(v);
    }
    for(i=1;i<=n;i++)
    {
        if(vis[i]==false)
        DFS(i);
    }
    while(st.empty()==0)
    {
        cout<<st.top()<<" ";
        st.pop();
    }
    return 0;
}
void DFS(int n)
{
    vis[n]=true;
    for(auto i:adj[n])
    {
        if(vis[i]==false)
        DFS(i);
    }
    st.push(n);
}