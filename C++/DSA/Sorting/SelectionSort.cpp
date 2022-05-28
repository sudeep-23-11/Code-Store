//SelectionSort
#include<iostream>
using namespace std;
int main()
{
    int i, j, N, ele, pos;
    cin>>N;
    int A[N];
    for(i=0;i<N;i++)
    cin>>A[i];
    for(i=0;i<(N-1);i++)
    {
        ele=A[i];
        pos=i;
        for(j=(i+1);j<N;j++)
        {
            if(ele>A[j])
            {
                ele=A[j];
                pos=j;
            }
        }
        swap(A[i], A[pos]);
    }
    for(i=0;i<N;i++)
    cout<<A[i]<<" ";
    return 0;
}