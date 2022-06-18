//LinearSearch
#include<iostream>
using namespace std;
int main()
{
    int i, N, e;
    cin>>N;
    int A[N];
    for(i=0;i<N;i++)
    cin>>A[i];
    cin>>e;
    for(i=0;i<N;i++)
    {
        if(e==A[i])
        break;
    }
    if(i<N)
    cout<<"Index of "<<e<<" is "<<i<<endl;
    else
    cout<<"Not present"<<endl;
    return 0;
}