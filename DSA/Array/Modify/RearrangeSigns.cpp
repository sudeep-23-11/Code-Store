//RearrangeSigns
#include<iostream>
using namespace std;
int main()
{
    int i, p, n, N;
    cin>>N;
    int A[N], B[N];
    for(i=0;i<N;i++)
    cin>>A[i];
    p=0;
    n=1;
    for(i=0;i<N;i++)
    {
        if(A[i]>0)
        {
            B[p]=A[i];
            p+=2;
        }
        else
        {
            B[n]=A[i];
            n+=2;
        }
    }
    for(i=0;i<N;i++)
    cout<<B[i]<<" ";
    cout<<endl;
    return 0;
}