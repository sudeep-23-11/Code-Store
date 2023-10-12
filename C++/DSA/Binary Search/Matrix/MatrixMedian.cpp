//MatrixMedian
#include<iostream>
#include<vector>
#include<climits>
using namespace std;
bool func(vector<vector<int>>&A, int m, int k);
int main()
{
    int i, j, N, M, lo, hi, m, k, res;
    cin>>N>>M;
    vector<vector<int>>A(N, vector<int>(M));
    lo=INT_MAX;
    hi=INT_MIN;
    for(i=0;i<N;i++)
    {
        for(j=0;j<M;j++)
        {
            cin>>A[i][j];
            lo=min(lo, A[i][j]);
            hi=max(hi, A[i][j]);
        }
    }
    k=N*M/2;
    while(lo<=hi)
    {
        m=(lo+hi)/2;
        if(func(A, m, k))
        {
            res=m;
            hi=m-1;
        }
        else
        lo=m+1;
    }
    cout<<res<<endl;
    return 0;
}
bool func(vector<vector<int>>&A, int m, int k)
{
    int i, c, lo, hi, mi, ub;
    c=0;
    for(i=0;i<A.size();i++)
    {
        lo=0;
        hi=A[i].size()-1;
        ub=A[i].size();
        while(lo<=hi)
        {
            mi=(lo+hi)/2;
            if(m<A[i][mi])
            {
                ub=mi;
                hi=mi-1;
            }
            else
            lo=mi+1;
        }
        c+=ub;
    }
    if(c>k)
    return true;
    return false;
}