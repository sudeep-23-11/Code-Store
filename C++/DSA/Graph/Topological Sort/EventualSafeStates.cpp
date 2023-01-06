//EventualSafeStates
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
    queue<int>q;
    for(int i=1;i<=n;i++)
    {
        if(indeg[i]==0)
        q.push(i);
    }
    while(q.empty()==0)
    {
        n=q.front();
        q.pop();
        cout<<n<<" ";
        for(auto i:radj[n])
        {
            indeg[i]--;
            if(indeg[i]==0)
            q.push(i);
        }
    }
}