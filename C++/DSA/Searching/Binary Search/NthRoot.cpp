//NthRoot
#include<iostream>
#include<cmath>
using namespace std;
int main()
{
    float N, n, p, l, u, m;
    cin>>N>>n>>p;
    l=1;
    u=N;
    while((u-l)>=pow(10, -(p+1)))
    {
        m=(l+u)/2;
        if(N<pow(m, n))
        u=m;
        else
        l=m;
    }
    cout<<n<<"th root of "<<N<<" correct upto "<<p<<" decimal places is "<<u<<endl;
    return 0;
}