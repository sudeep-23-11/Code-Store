//MajorityElement2
//BoyerMooreMajorityVoteAlgorithm
#include<iostream>
using namespace std;
int main()
{
    int i, N, c1, c2, v1, v2;
    cin>>N;
    int A[N];
    for(i=0;i<N;i++)
    cin>>A[i];
    v1=0;
    v2=0;
    for(i=0;i<N;i++)
    {
        if(v1==0)
        {
            c1=A[i];
            v1++;
        }
        else if(A[i]==c1)
        v1++;
        else if(v2==0)
        {
            c2=A[i];
            v2++;
        }
        else if(A[i]==c2)
        v2++;
        else
        {
            v1--;
            v2--;
        }
    }
    v1=0;
    v2=0;
    for(i=0;i<N;i++)
    {
        if(A[i]==c1)
        v1++;
        else if(A[i]==c2)
        v2++;
    }
    if(v1>(N/3))
    cout<<c1<<endl;
    if(v2>(N/3))
    cout<<c2<<endl;
    return 0;
}