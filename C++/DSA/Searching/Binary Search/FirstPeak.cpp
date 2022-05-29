//FirstPeak
#include<iostream>
using namespace std;
int main()
{
    int i, N, l, u, m, fp;
    cin>>N;
    int A[N];
    for(i=0;i<N;i++)
    cin>>A[i];
    l=0;
    u=N-1;
    fp=N+1;
    while(l<=u)
    {
        m=(l+u)/2;
        if(A[m+1]<A[m])
        {
            fp=min(fp, m);
            u=m-1;
        }
        else
        l=m+1;
    }
    if(fp!=(N+1))
    cout<<"First Peak is "<<A[fp]<<endl;
    return 0;
}