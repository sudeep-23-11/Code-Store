//MaximumSubarrayProduct
#include<iostream>
using namespace std;
int main()
{
    int i, N, pp, sp, p;
    cin>>N;
    int A[N];
    for(i=0;i<N;i++)
    cin>>A[i];
    pp=1;
    sp=1;
    p=1;
    for(i=0;i<N;i++)
    {
        pp*=A[i];
        if(pp==0)
        pp=1;
        sp*=A[N-1-i];
        if(sp==0)
        sp=1;
        p=max(p, max(pp, sp));
    }
    cout<<p<<endl;
    return 0;
}