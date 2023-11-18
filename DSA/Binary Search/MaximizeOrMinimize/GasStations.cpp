//GasStations
#include<iostream>
#include<cmath>
using namespace std;
bool func(int A[], int N, double m, int K);
int main()
{
    int i, N, K;
    double dp, lo, hi, m;
    cin>>N>>K;
    int A[N];
    hi=0.0;
    for(i=0;i<N;i++)
    {
        cin>>A[i];
        if(i)
        hi=max(hi, (double)(A[i]-A[i-1]));
    }
    dp=pow(10, -6);
    lo=0.0;
    while(hi-lo > dp)
    {
        m=(lo+hi)/2;
        if(func(A, N, m, K))
        hi=m;
        else
        lo=m;
    }
    cout<<hi<<endl;
    return 0;
}
bool func(int A[], int N, double m, int K)
{
    int i, c;
    c=0;
    for(i=1;i<N;i++)
    {
        c+=(ceil((A[i]-A[i-1])/m)-1);
        if(c>K)
        return 0;
    }
    return 1;
}