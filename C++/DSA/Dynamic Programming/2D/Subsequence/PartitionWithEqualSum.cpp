//PartitionWithEqualSum
#include<iostream>
#include<vector>
using namespace std;
int func(int n, int s, int A[], vector<vector<int>>&dp);
int main()
{
    int i, N, s;
    cin>>N;
    int A[N];
    s=0;
    for(i=0;i<N;i++)
    {
        cin>>A[i];
        s+=A[i];
    }
    if((s%2)==0)
    {
        s/=2;
        vector<vector<int>>dp(N, vector<int>(s+1, -1));
        cout<<func(N-1, s, A, dp)<<endl;
    }
    else
    cout<<0<<endl;
    return 0;
}
int func(int n, int s, int A[], vector<vector<int>>&dp)
{
    if(s==0)
    return 1;
    if((n==-1)||(s<0))
    return 0;
    if(dp[n][s]!=-1)
    return dp[n][s];
    return dp[n][s]=func(n-1, s-A[n], A, dp)||func(n-1, s, A, dp);
}