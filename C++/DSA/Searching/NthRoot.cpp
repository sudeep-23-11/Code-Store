//NthRoot
#include<iostream>
#include<cmath>
#include<iomanip>
using namespace std;
int main()
{
    int N, n, p;
    double lo, hi, m, eps;
    cin>>N>>n>>p;
    lo=1;
    hi=N;
    eps=pow(10, -(p+1));
    while((hi-lo)>eps)
    {
        m=(lo+hi)/2;
        if(N>pow(m, n))
        lo=m;
        else
        hi=m;
    }
    cout<<n<<"th root of "<<N<<" correct upto "<<p<<" decimal places is ";
    cout<<fixed<<setprecision(p)<<hi<<endl;
    return 0;
}