//InsertionSort
#include<iostream>
using namespace std;
int main()
{
    int i, N, t, pos;
    cin>>N;
    int A[N];
    for(i=0;i<N;i++)
    cin>>A[i];
    for(i=0;i<N;i++)
    {
        t=A[i+1];
        pos=i;
        while((t<A[pos])&&(pos>=0))
        {
            A[pos+1]=A[pos];
            pos--;
        }
        A[pos+1]=t;
    }
    for(i=0;i<N;i++)
    cout<<A[i]<<" ";
    return 0;
}