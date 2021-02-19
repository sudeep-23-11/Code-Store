//BinarySearch
#include<iostream>
using namespace std;
int main()
{
    int i, N, l, u, m, ele, flag=0;
    cin>>N;
    int arr[N];
    for(i=0;i<N;i++)
    cin>>arr[i];
    l=0;
    u=N-1;
    cin>>ele;
    while(l<=u)
    {
        m=(l+u)/2;
        if(ele==arr[m])
        {
            flag=1;
            break;
        }
        else if(ele>arr[m])
        l=m+1;
        else if(ele<arr[m])
        u=m-1;
    }
    if(flag==1)
    cout<<"The element "<<ele<<" is present at "<<(m+1)<<" position"<<endl;
    else
    cout<<"The element "<<ele<<" is not present in the array"<<endl;
    return 0;
}