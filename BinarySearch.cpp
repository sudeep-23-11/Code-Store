//BinarySearch
#include<iostream>
using namespace std;
int main()
{
    int i, N1, N2, l, u, m, ele1, ele2, flag, index;
    cin>>N1;
    int arr[N1];
    for(i=0;i<N1;i++)
    cin>>arr[i];
    l=0;
    u=N1-1;
    flag=0;
    cin>>ele1;
    while(l<=u)
    {
        m=(l+u)/2;
        if(ele1==arr[m])
        {
            flag=1;
            break;
        }
        else if(ele1<arr[m])
        u=m-1;
        else
        l=m+1;
    }
    if(flag==1)
    cout<<"The element "<<ele1<<" is present at "<<(m+1)<<" position"<<endl;
    else
    cout<<"The element "<<ele1<<" is not present in the array"<<endl;
    cin>>N2;
    int brr[N2];
    for(i=0;i<N2;i++)
    cin>>brr[i];
    l=0;
    u=N2-1;
    index=-1;
    cin>>ele2;
    while(l<=u)
    {
        m=(l+u)/2;
        if(ele2==brr[m])
        index=m;
        if(ele2<=brr[m])
        u=m-1;
        else
        l=m+1;
    }
    if(index!=-1)
    cout<<"The element "<<ele2<<" is firstly appeared at "<<index<<" index"<<endl;
    else
    cout<<"The element "<<ele2<<" is not present in the array"<<endl;
    return 0;
}