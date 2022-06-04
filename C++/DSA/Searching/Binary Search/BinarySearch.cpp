//BinarySearch
#include<iostream>
using namespace std;
int main()
{
    int i, N, l, u, m, ele, flag;
    cin>>N;
    int A[N];
    for(i=0;i<N;i++)
    cin>>A[i];
    l=0;
    u=N-1;
    flag=0;
    cin>>ele;
    while(l<=u)
    {
        m=(l+u)/2;
        if(ele==A[m])
        {
            flag=1;
            break;
        }
        else if(ele<A[m])
        u=m-1;
        else
        l=m+1;
    }
    if(flag==1)
    cout<<"Index of "<<ele<<" is "<<m<<endl;
    else
    cout<<"Not present"<<endl;
    return 0;
}