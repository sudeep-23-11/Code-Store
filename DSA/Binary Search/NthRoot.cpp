//NthRoot
#include<iostream>
using namespace std;
int func(int m, int n, int N);
int main()
{
    int N, n, lo, hi, m, p;
    cin>>N>>n;
    lo=1;
    hi=N;
    while(lo<=hi)
    {
        m=(lo+hi)/2;
        p=func(m, n, N);
        if(!p)
        {
            cout<<m<<endl;
            exit(0);
        }
        else if(p==1)
        hi=m-1;
        else
        lo=m+1;
    }
    cout<<hi<<endl;
    return 0;
}
int func(int m, int n, int N)
{
    int i, p;
    p=1;
    for(i=1;i<=n;i++)
    {
        p*=m;
        if(p>N)
        return 1;
    }
    if(p==N)
    return 0;
    return 2;
}