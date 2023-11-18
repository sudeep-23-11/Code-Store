//RotateArrayByKPlaces
#include<iostream>
#include<algorithm>
using namespace std;
int main()
{
    int i, N, K;
    cin>>N;
    int A[N];
    for(i=0;i<N;i++)
    cin>>A[i];
    cin>>K;
    K%=N;
    reverse(A, A+K);
    reverse(A+K, A+N);
    reverse(A, A+N);
    for(i=0;i<N;i++)
    cout<<A[i]<<" ";
    cout<<endl;
    return 0;
}