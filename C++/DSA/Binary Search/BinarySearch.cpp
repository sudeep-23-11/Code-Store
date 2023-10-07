//BinarySearch
#include<iostream>
using namespace std;
int main()
{
    int i, N, e, lo, hi, m;
    cin>>N>>e;
    int A[N];
    for(i=0;i<N;i++)
    cin>>A[i];
    lo=0;
    hi=N-1;
    while(lo<=hi)
    {
        m=(lo+hi)/2;
        if(e==A[m])
        {
            cout<<m<<endl;
            exit(0);
        }
        else if(e<A[m])
        hi=m-1;
        else
        lo=m+1;
    }
    cout<<-1<<endl;
    return 0;
}