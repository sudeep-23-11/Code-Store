//AllPairsShortestPath
//FloydWarshallAlgorithm
#include<iostream>
#include<climits>
using namespace std;
int main()
{
    int i, j, k, N, M, u, v, wt;
    cin>>N>>M;
    int dist[N+1][N+1];
    for(i=1;i<=N;i++)
    {
        for(j=1;j<=N;j++)
        {
            if(i==j)
            dist[i][j]=0;
            else
            dist[i][j]=INT_MAX;
        }
    }
    for(i=1;i<=M;i++)
    {
        cin>>u>>v>>wt;
        dist[u][v]=wt;
        dist[v][u]=wt;
    }
    for(k=1;k<=N;k++)
    {
        for(i=1;i<=N;i++)
        {
            for(j=1;j<=N;j++)
            {
                if(dist[i][k]!=INT_MAX && dist[k][j]!=INT_MAX && dist[i][j]>dist[i][k]+dist[k][j])
                dist[i][j]=dist[i][k]+dist[k][j];
            }
        }
    }
    for(i=1;i<=N;i++)
    {
        for(j=1;j<=N;j++)
        {
            if(dist[i][j]!=INT_MAX)
            cout<<dist[i][j]<<" ";
            else
            cout<<"I ";
        }
        cout<<endl;
    }
    return 0;
}