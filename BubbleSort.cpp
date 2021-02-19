//BubbleSort
#include<iostream>
using namespace std;
int main()
{
    int i, j, N, t;
    cin>>N;
    int arr[N];
    for(i=0;i<N;i++)
    cin>>arr[i];
    for(i=0;i<N;i++)
    {
        for(j=0;j<(N-1);j++)
        {
            if(arr[j]>arr[j+1])
            {
                t=arr[j];
                arr[j]=arr[j+1];
                arr[j+1]=t;
            }
        }
    }
    for(i=0;i<N;i++)
    cout<<arr[i]<<" ";
    cout<<endl;
    return 0;
}