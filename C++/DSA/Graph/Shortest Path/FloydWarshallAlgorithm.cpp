//AllPairsShortestPath
//FloydWarshallAlgorithm
#include<iostream>
using namespace std;
int main()
{
    int i, j, k, n, m, u, v, wt;
    cin>>n>>m;
    int dist[n+1][n+1];
    for(i=1;i<=n;i++)
    {
        for(j=1;j<=n;j++)
        {
            if(i==j)
            dist[i][j]=0;
            else
            dist[i][j]=100001;
        }
    }
    for(i=1;i<=m;i++)
    {
        cin>>u>>v>>wt;
        dist[u][v]=wt;
        dist[v][u]=wt;
    }
    for(k=1;k<=n;k++)
    {
        for(i=1;i<=n;i++)
        {
            for(j=1;j<=n;j++)
            {
                if((dist[i][k]!=100001)&&(dist[k][j]!=100001)&&(dist[i][j]>(dist[i][k]+dist[k][j])))
                dist[i][j]=dist[i][k]+dist[k][j];
            }
        }
    }
    for(i=1;i<=n;i++)
    {
        for(j=1;j<=n;j++)
        {
            if(dist[i][j]!=100001)
            cout<<dist[i][j]<<" ";
            else
            cout<<"I ";
        }
        cout<<endl;
    }
    return 0;
}