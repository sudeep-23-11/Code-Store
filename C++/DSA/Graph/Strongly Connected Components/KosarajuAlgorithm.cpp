//KosarajuAlgorithm
#include<iostream>
#include<vector>
#include<cstring>
#include<stack>
using namespace std;
bool vis[100001];
vector<int>adj[100001];
vector<int>trans[100001];
stack<int>st;
void DFSa(int n);
void DFSt(int n);
int main()
{
    int i, m, n, u, v;
    cin>>n>>m;
    memset(vis, false, sizeof(vis));
    for(i=1;i<=m;i++)
    {
        cin>>u>>v;
        adj[u].push_back(v);
        trans[v].push_back(u);
    }
    for(i=1;i<=n;i++)
    {
        if(vis[i]==false)
        DFSa(i);
    }
    memset(vis, false, sizeof(vis));
    while(st.empty()==0)
    {
        if(vis[st.top()]==false)
        {
            DFSt(st.top());
            cout<<endl;
        }
        st.pop();
    }
    return 0;
}
void DFSa(int n)
{
    vis[n]=true;
    for(auto i:adj[n])
    {
        if(vis[i]==false)
        DFSa(i);
    }
    st.push(n);
}
void DFSt(int n)
{
    vis[n]=true;
    cout<<n<<" ";
    for(auto i:trans[n])
    {
        if(vis[i]==false)
        DFSt(i);
    }
}