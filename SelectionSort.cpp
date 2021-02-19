//SelectionSort
#include<iostream>
using namespace std;
int main()
{
    int i, j, N, t, ele, pos;
    cin>>N;
    int arr[N];
    for(i=0;i<N;i++)
    cin>>arr[i];
    for(i=0;i<(N-1);i++)
    {
        ele=arr[i];
        pos=i;
        for(j=(i+1);j<N;j++)
        {
            if(ele>arr[j])
            {
                ele=arr[j];
                pos=j;
            }
        }
        t=arr[i];
        arr[i]=arr[pos];
        arr[pos]=t;
    }
    for(i=0;i<N;i++)
    cout<<arr[i]<<" ";
    cout<<endl;
    return 0;
}