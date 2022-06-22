//BuyAndSellStock
#include<iostream>
using namespace std;
int main()
{
    int i, N, mi, ma;
    cin>>N;
    int A[N];
    for(i=0;i<N;i++)
    cin>>A[i];
    mi=A[0];
    ma=0;
    for(i=0;i<N;i++)
    {
        mi=min(mi, A[i]);
        ma=max(ma, (A[i]-mi));
    }
    cout<<ma<<endl;
    return 0;
}