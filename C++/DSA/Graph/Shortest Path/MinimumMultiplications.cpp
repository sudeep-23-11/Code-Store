//MinimumMultiplications
#include<iostream>
#include<queue>
using namespace std;
int main()
{
    int i, N, s, d, n;
    cin>>N;
    int A[N];
    int dist[100000];
    queue<pair<int, int>>q;
    for(i=0;i<100000;i++)
    dist[i]=100001;
    for(i=0;i<N;i++)
    cin>>A[i];
    cin>>s>>d;
    dist[s]=0;
    q.push(make_pair(0, s));
    while(q.empty()==0)
    {
        auto x=q.front();
        q.pop();
        for(i=0;i<N;i++)
        {
            n=(x.second*A[i])%100000;
            if(dist[n]>(x.first+1))
            {
                dist[n]=x.first+1;
                if(n==d)
                goto l;
                q.push(make_pair(dist[n], n));
            }
        }
    }
    l: cout<<dist[n]<<endl;
    return 0;
}