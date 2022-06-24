//RemoveDuplicatesFromSortedArray
#include<iostream>
using namespace std;
int main()
{
    int i, j, N;
    cin>>N;
    int A[N];
    for(i=0;i<N;i++)
    cin>>A[i];
    i=0;
    for(j=1;j<N;j++)
    {
        if(A[i]!=A[j])
        {
            i++;
            A[i]=A[j];
        }
    }
    for(j=0;j<=i;j++)
    cout<<A[j]<<" ";
    cout<<endl;
    return 0;
}