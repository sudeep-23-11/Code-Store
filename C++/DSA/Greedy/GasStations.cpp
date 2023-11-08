//GasStations
#include<iostream>
using namespace std;
int main()
{
    int i, N, s, ns, res;
    cin>>N;
    int A[N], B[N], C[N];
    for(i=0;i<N;i++)
    cin>>A[i];
    for(i=0;i<N;i++)
    cin>>B[i];
    for(i=0;i<N;i++)
    C[i]=A[i]-B[i];
    s=ns=0;
    for(i=0;i<N;i++)
    {
        s+=C[i];
        if(s<0)
        {
            ns+=s;
            s=0;
            res=i+1;
        }
    }
    if(s+ns < 0)
    res=-1;
    cout<<res<<endl;
    return 0;
}