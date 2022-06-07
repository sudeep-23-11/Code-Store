//NumericAddition
#include<iostream>
using namespace std;
int main()
{
    int i, s, c;
    string x, y, z;
    cin>>x>>y;
    while(x.size()!=y.size())
    {
        if(x.size()>y.size())
        y='0'+y;
        else
        x='0'+x;
    }
    x='0'+x;
    y='0'+y;
    z="";
    c=0;
    for(i=(x.size()-1);i>=0;i--)
    {
        s=(int)x.at(i)+(int)y.at(i)-96+c;
        z=(char)((s%10)+48)+z;
        c=s/10;
    }
    if(z.at(0)=='0')
    z=z.substr(1, (z.size()-1));
    cout<<z<<endl;
    return 0;
}
