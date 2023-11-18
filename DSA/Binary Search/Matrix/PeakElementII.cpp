//PeakElementII
#include<iostream>
#include<vector>
using namespace std;
int func(vector<vector<int>>&A, int j);
int main()
{
    int i, j, N, M, lo, hi, m, p, n;
    cin>>N>>M;
    vector<vector<int>>A(N, vector<int>(M));
    for(i=0;i<N;i++)
    {
        for(j=0;j<M;j++)
        cin>>A[i][j];
    }
    lo=0;
    hi=M-1;
    while(lo<=hi)
    {
        m=(lo+hi)/2;
        i=func(A, m);
        p=m>0 ? A[i][m-1] : -1;
        n=m < M-1 ? A[i][m+1] : -1;
        if(p<A[i][m] && A[i][m]>n)
        {
            cout<<i<<" "<<m<<endl;
            exit(0);
        }
        else if(p<=A[i][m] && A[i][m]<=n)
        lo=m+1;
        else
        hi=m-1;
    }
    cout<<-1<<" "<<-1<<endl;
    return 0;
}
int func(vector<vector<int>>&A, int j)
{
    int i, m, res;
    m=0;
    for(i=0;i<A.size();i++)
    {
        if(A[i][j]>m)
        {
            m=A[i][j];
            res=i;
        }
    }
    return res;
}