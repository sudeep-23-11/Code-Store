//MaximumSubarrayProduct
#include<iostream>
#include<climits>
using namespace std;
int main()
{
    int i, N, pp, sp, m;
    cin>>N;
    int A[N];
    for(i=0;i<N;i++)
    cin>>A[i];
    pp=1;
    sp=1;
    m=INT_MIN;
    for(i=0;i<N;i++)
    {
        pp*=A[i];
        m=max(m, pp);
        if(!pp)
        pp=1;
        sp*=A[N-1-i];
        m=max(m, sp);
        if(!sp)
        sp=1;
    }
    cout<<m<<endl;
    return 0;
}