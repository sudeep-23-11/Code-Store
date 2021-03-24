//KadaneAlgorithm
#include<iostream>
using namespace std;
int main()
{
    int i, N, cursum, maxsum;
    cursum=0;
    maxsum=0;
    cin>>N;
    int arr[N];
    for(i=0;i<N;i++)
    cin>>arr[i];
    for(i=0;i<N;i++)
    {
        cursum+=arr[i];
        if(cursum<0)
        cursum=0;
        if(cursum>maxsum)
        maxsum=cursum;
    }
    cout<<maxsum<<endl;
    return 0;
}