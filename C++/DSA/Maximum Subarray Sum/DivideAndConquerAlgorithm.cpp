//DivideAndConquerAlgorithm
#include<iostream>
using namespace std;
int subarray(int A[], int l, int r);
int crossing(int A[], int l, int r, int m);
int main()
{
    int i, N;
    cin>>N;
    int A[N];
    for(i=0;i<N;i++)
    cin>>A[i];
    cout<<subarray(A, 0, N-1)<<endl;
    return 0;
}
int subarray(int A[], int l, int r)
{
    int m;
    if(l==r)
    return A[l];
    m=(l+r)/2;
    return max(max(subarray(A, l, m), subarray(A, m+1, r)), crossing(A, l, r, m));
}
int crossing(int A[], int l, int r, int m)
{
    int i, sum, leftsum, rightsum;
    sum=0;
    leftsum=-(int)1e5;
    for(i=m;i>=l;i--)
    {
        sum=sum+A[i];
        if(sum>leftsum)
        leftsum=sum;
    }
    sum=0;
    rightsum=-(int)1e5;
    for(i=m+1;i<=r;i++)
    {
        sum=sum+A[i];
        if(sum>rightsum)
        rightsum=sum;
    }
    return max(max(leftsum, rightsum), leftsum+rightsum);
}