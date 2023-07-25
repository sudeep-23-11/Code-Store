//LongestSubarrayWithKSum
#include<iostream>
using namespace std;
int main()
{
    int i, j, N, K, s, m;
    cin>>N;
    int A[N];
    for(i=0;i<N;i++)
    cin>>A[i];
    cin>>K;
    i=0;
    s=0;
    m=0;
    for(j=0;j<N;j++)
    {
        s+=A[j];
        if(s>=K)
        {
            while(s>K)
            {
                s-=A[i];
                i++;
            }
            if(s==K)
            m=max(m, j-i+1);
        }
    }
    cout<<m<<endl;
    return 0;
}