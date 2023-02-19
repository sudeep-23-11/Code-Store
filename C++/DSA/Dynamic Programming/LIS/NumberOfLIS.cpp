//NumberOfLIS
#include<iostream>
using namespace std;
int main()
{
    int i, j, N, m, c;
    cin>>N;
    int A[N], dp[N], count[N];
    for(i=0;i<N;i++)
    {
        cin>>A[i];
        dp[i]=1;
        count[i]=1;
    }
    m=-100001;
    for(i=0;i<N;i++)
    {
        for(j=0;j<i;j++)
        {
            if(A[j]<A[i])
            {
                if((dp[j]+1)>dp[i])
                {
                    dp[i]=dp[j]+1;
                    count[i]=count[j];
                }
                else if((dp[j]+1)==dp[i])
                count[i]+=count[j];
            }
        }
        m=max(m, dp[i]);
    }
    c=0;
    for(i=0;i<N;i++)
    {
        if(dp[i]==m)
        c+=count[i];
    }
    cout<<c<<endl;
    return 0;
}