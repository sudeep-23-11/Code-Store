//TopologicalSort
//KahnAlgorithm
#include<iostream>
#include<vector>
#include<stack>
#include<queue>
using namespace std;
void DFS(int n, vector<int>adj[], bool vis[], stack<int>&st);
void BFS(int n, vector<int>adj[], int indeg[]);
int main()
{
    int i, N, M, u, v;
    cin>>N>>M;
    vector<int>adj[N+1];
    bool vis[N+1]={false};
    stack<int>st;
    int indeg[N+1]={0};
    for(i=1;i<=M;i++)
    {
        cin>>u>>v;
        adj[u].push_back(v);
        indeg[v]++;
    }
    DFS(1, adj, vis, st);
    while(!st.empty())
    {
        cout<<st.top()<<" ";
        st.pop();
    }
    cout<<endl;
    BFS(N, adj, indeg);
    cout<<endl;
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
void BFS(int n, vector<int>adj[], int indeg[])
{
    int i;
    queue<int>q;
    for(i=1;i<=n;i++)
    {
        if(!indeg[i])
        q.push(i);
    }
    while(!q.empty())
    {
        n=q.front();
        q.pop();
        cout<<n<<" ";
        for(auto x:adj[n])
        {
            indeg[x]--;
            if(!indeg[x])
            q.push(x);
        }
    }
}