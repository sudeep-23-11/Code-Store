//SpiralTraversal
#include<iostream>
using namespace std;
int main()
{
    int i, j, N, M, t, b, l, r;
    cin>>N>>M;
    int A[N][M];
    for(i=0;i<N;i++)
    {
        for(j=0;j<M;j++)
        cin>>A[i][j];
    }
    t=0;
    b=N-1;
    l=0;
    r=M-1;
    while(t<=b && l<=r)
    {
        for(i=l;i<=r;i++)
        cout<<A[t][i]<<" ";
        t++;
        for(i=t;i<=b;i++)
        cout<<A[i][r]<<" ";
        r--;
        if(t<=b)
        {
            for(i=r;i>=l;i--)
            cout<<A[b][i]<<" ";
            b--;
        }
        if(l<=r)
        {
            for(i=b;i>=t;i--)
            cout<<A[i][l]<<" ";
            l++;
        }
    }
    cout<<endl;
    return 0;
}