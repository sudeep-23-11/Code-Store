//BinarySearch
#include<iostream>
using namespace std;
int main()
{
    bool flag;
    int i, N, l, u, m, ele;
    cin>>N;
    int A[N];
    for(i=0;i<N;i++)
    cin>>A[i];
    flag=false;
    l=0;
    u=N-1;
    cin>>ele;
    while(l<=u)
    {
        m=(l+u)/2;
        if(ele==A[m])
        {
            flag=true;
            break;
        }
        else if(ele<A[m])
        u=m-1;
        else
        l=m+1;
    }
    if(flag==true)
    cout<<"Index of "<<ele<<" is "<<m<<endl;
    else
    cout<<"Not present"<<endl;
    return 0;
}