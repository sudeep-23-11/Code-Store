//AddTwoStrings
#include<iostream>
using namespace std;
int main()
{
    int i, j, s, c;
    string x, y, z;
    cin>>x>>y;
    z="";
    i=x.size()-1;
    j=y.size()-1;
    c=0;
    while((i>=0)||(j>=0)||(c>0))
    {
        s=c;
        if(i>=0)
        {
            s+=(x.at(i)-'0');
            i--;
        }
        if(j>=0)
        {
            s+=(y.at(j)-'0');
            j--;
        }
        z=to_string(s%10)+z;
        c=s/10;
    }
    cout<<z<<endl;
    return 0;
}