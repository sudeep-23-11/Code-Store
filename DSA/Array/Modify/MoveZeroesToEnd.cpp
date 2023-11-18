//MoveZeroesToEnd
#include<iostream>
using namespace std;
int main()
{
    int i, j, k, N;
    cin>>N;
    int A[N];
    for(i=0;i<N;i++)
    cin>>A[i];
    for(i=0;i<N;i++)
    {
        if(!A[i])
        break;
    }
    for(j=i+1;j<N;j++)
    {
        if(A[j])
        {
            swap(A[i], A[j]);
            i++;
        }
    }
    for(i=0;i<N;i++)
    cout<<A[i]<<" ";
    cout<<endl;
    return 0;
}