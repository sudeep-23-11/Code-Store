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
    int i, N, M, u, v;
    cin>>N>>M;
    vector<int>adj[N+1], radj[N+1];
    bool vis[N+1]={false};
    stack<int>st;
    for(i=1;i<=M;i++)
    {
        cin>>u>>v;
        adj[u].push_back(v);
        radj[v].push_back(u);
    }
    for(i=1;i<=N;i++)
    {
        if(!vis[i])
        DFS(i, adj, vis, st);
    }
    vis[N+1]={false};
    while(!st.empty())
    {
        if(!vis[st.top()])
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
        if(!vis[i])
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
        if(!vis[i])
        rDFS(i, radj, vis);
    }
}