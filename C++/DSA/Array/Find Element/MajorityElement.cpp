//MajorityElement
//BoyerMooreMajorityVoteAlgorithm
#include<iostream>
using namespace std;
void nby2(int A[], int N);
void nby3(int A[], int N);
int main()
{
    int i, N;
    cin>>N;
    int A[N];
    for(i=0;i<N;i++)
    cin>>A[i];
    cout<<"Greater than N/2"<<endl;
    nby2(A, N);
    cout<<"Greater than N/3"<<endl;
    nby3(A, N);
    return 0;
}
void nby2(int A[], int N)
{
    int i, c, v;
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
}
void nby3(int A[], int N)
{
    int i, c1, c2, v1, v2;
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
}