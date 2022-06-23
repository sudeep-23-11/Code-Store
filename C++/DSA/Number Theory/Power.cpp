//Power
#include<iostream>
using namespace std;
int main()
{
    bool c;
    int x, n;
    double p;
    cin>>x>>n;
    c=false;
    if(n<0)
    {
        n*=-1;
        c=true;
    }
    p=1.0;
    while(n>0)
    {
        if(n%2==0)
        {
            x=x*x;
            n/=2;
        }
        else
        {
            p*=x;
            n--;
        }
    }
    if(c==true)
    p=1/p;
    cout<<p<<endl;
    return 0;
}