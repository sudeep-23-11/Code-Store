//InsertionSort
#include<iostream>
using namespace std;
int main()
{
    int i, N, t, pos;
    cin>>N;
    int arr[N];
    for(i=0;i<N;i++)
    cin>>arr[i];
    for(i=0;i<N;i++)
    {
        t=arr[i+1];
        pos=i;
        while(t<arr[pos]&&pos>=0)
        {
            arr[pos+1]=arr[pos];
            pos--;
        }
        arr[pos+1]=t;
    }
    for(i=0;i<N;i++)
    cout<<arr[i]<<" ";
    cout<<endl;
    return 0;
}