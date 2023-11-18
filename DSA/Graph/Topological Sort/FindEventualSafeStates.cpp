//FindEventualSafeStates
#include<iostream>
#include<vector>
#include<queue>
using namespace std;
void BFS(int n, vector<int>radj[], int indeg[]);
int main()
{
    int i, n, m, u, v;
    cin>>n>>m;
    vector<int>radj[n+1];
    int indeg[n+1]={0};
    for(i=1;i<=m;i++)
    {
        cin>>u>>v;
        radj[v].push_back(u);
        indeg[u]++;
    }
    BFS(n, radj, indeg);
    return 0;
}
void BFS(int n, vector<int>radj[], int indeg[])
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
        for(auto x:radj[n])
        {
            indeg[x]--;
            if(!indeg[x])
            q.push(x);
        }
    }
}