//StronglyConnectedComponents
//KosarajuAlgorithm
#include<iostream>
#include<vector>
#include<stack>
using namespace std;
void DFS(int n, vector<int>adj[], bool vis[], stack<int>&st);
void rDFS(int n, vector<int>radj[], bool vis[]);
int main()
{
    int i, m, n, u, v;
    cin>>n>>m;
    vector<int>adj[n+1], radj[n+1];
    bool vis[n+1]={false};
    stack<int>st;
    for(i=1;i<=m;i++)
    {
        cin>>u>>v;
        adj[u].push_back(v);
        radj[v].push_back(u);
    }
    for(i=1;i<=n;i++)
    {
        if(vis[i]==false)
        DFS(i, adj, vis, st);
    }
    for(i=1;i<=n;i++)
    vis[i]=false;
    while(st.empty()==0)
    {
        if(vis[st.top()]==false)
        {
            rDFS(st.top(), radj, vis);
            cout<<endl;
        }
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
void rDFS(int n, vector<int>radj[], bool vis[])
{
    vis[n]=true;
    cout<<n<<" ";
    for(auto i:radj[n])
    {
        if(vis[i]==false)
        rDFS(i, radj, vis);
    }
}