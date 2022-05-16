//StringAddition
#include<iostream>
using namespace std;
int main()
{
    int i, lx, ly, l, carry, sum;
    string x, y, z;
    cin>>x>>y;
    x="0"+x;
    y="0"+y;
    lx=x.size();
    ly=y.size();
    if(lx!=ly)
    {
        if(lx>ly)
        {
            for(i=1;i<=(lx-ly);i++)
            y="0"+y;
        }
        else
        {
            for(i=1;i<=(ly-lx);i++)
            x="0"+x;
        }
    }
    l=x.size();
    carry=0;
    for(i=(l-1);i>=0;i--)
    {
        sum=(int)x[i]+(int)y[i]-96+carry;
        if(sum>9)
        {
            carry=sum/10;
            sum%=10;
        }
        else
        carry=0;
        z=(char)(sum+48)+z;
    }
    if(z[0]=='0')
    z=z.substr(1, l);
    cout<<z<<endl;
    return 0;
}
