//MatrixMedian
#include<iostream>
#include<algorithm>
using namespace std;
int main()
{
    int i, j, N, M, lo, hi, m, c;
    cin>>N>>M;
    int A[N][M];
    for(i=0;i<N;i++)
    {
        for(j=0;j<M;j++)
        cin>>A[i][j];
    }
    lo=0;
    hi=100001;
    while(lo<=hi)
    {
        m=(lo+hi)/2;
        c=0;
        for(i=0;i<N;i++)
        {
            j=upper_bound(A[i], A[i]+M, m)-A[i];
            c+=j;
        }
        if((N*M)/2<c)
        hi=m-1;
        else
        lo=m+1;
    }
    cout<<lo<<endl;
    return 0;
}