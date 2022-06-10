//LowerAndUpperBound
#include<iostream>
using namespace std;
int main()
{
    int i, N, l, u, m, ele, lb, ub;
    cin>>N;
    int A[N];
    for(i=0;i<N;i++)
    cin>>A[i];
    l=0;
    u=N-1;
    lb=N+1;
    ub=N+1;
    cin>>ele;
    while(l<=u)
    {
        m=(l+u)/2;
        if(ele<=A[m])
        lb=min(lb, m);
        if(ele<A[m])
        ub=min(ub, m);
        if(ele<A[m])
        u=m-1;
        else
        l=m+1;
    }
    if(lb!=(N+1))
    cout<<"Lower Bound of "<<ele<<" is "<<A[lb]<<endl;
    if(ub!=(N+1))
    cout<<"Upper Bound of "<<ele<<" is "<<A[ub]<<endl;
    return 0;
}