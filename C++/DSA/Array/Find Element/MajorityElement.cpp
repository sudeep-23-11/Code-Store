//MajorityElement
//BoyerMooreMajorityVoteAlgorithm
#include<iostream>
using namespace std;
int main()
{
    int i, N, c, v;
    cin>>N;
    int A[N];
    for(i=0;i<N;i++)
    cin>>A[i];
    v=0;
    for(i=0;i<N;i++)
    {
        if(v==0)
        {
            c=A[i];
            v++;
        }
        else if(A[i]==c)
        v++;
        else
        v--;
    }
    v=0;
    for(i=0;i<N;i++)
    {
        if(A[i]==c)
        v++;
    }
    if(v>(N/2))
    cout<<c<<endl;
    return 0;
}