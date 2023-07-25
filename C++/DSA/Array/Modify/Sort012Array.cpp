//Sort012Array
//DutchNationalFlagAlgorithm
#include<iostream>
using namespace std;
int main()
{
    int i, N, lo, hi, m;
    cin>>N;
    int A[N];
    for(i=0;i<N;i++)
    cin>>A[i];
    lo=0;
    hi=N-1;
    m=0;
    while(m<=hi)
    {
        if(!A[m])
        {
            swap(A[m], A[lo]);
            lo++;
            m++;
        }
        else if(A[m]==2)
        {
            swap(A[m], A[hi]);
            hi--;
        }
        else
        m++;
    }
    for(i=0;i<N;i++)
    cout<<A[i]<<" ";
    cout<<endl;
    return 0;
}