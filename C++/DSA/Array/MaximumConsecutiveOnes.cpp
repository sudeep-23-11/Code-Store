//MaximumConsecutiveOnes
#include<iostream>
using namespace std;
int main()
{
    int i, N, c, m;
    cin>>N;
    int A[N];
    for(i=0;i<N;i++)
    cin>>A[i];
    c=0;
    m=0;
    for(i=0;i<N;i++)
    {
        if(A[i]==1)
        c++;
        else
        c=0;
        m=max(m, c);
    }
    cout<<m<<endl;
    return 0;
}