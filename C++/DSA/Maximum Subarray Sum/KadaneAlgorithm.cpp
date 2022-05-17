//KadaneAlgorithm
#include<iostream>
using namespace std;
int main()
{
    int i, N, cursum, maxsum;
    cin>>N;
    cursum=0;
    maxsum=0;
    int A[N];
    for(i=0;i<N;i++)
    cin>>A[i];
    for(i=0;i<N;i++)
    {
        cursum+=A[i];
        if(cursum<0)
        cursum=0;
        if(cursum>maxsum)
        maxsum=cursum;
    }
    cout<<maxsum<<endl;
    return 0;
}