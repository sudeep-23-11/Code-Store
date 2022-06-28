//ZAlgorithm
#include<iostream>
using namespace std;
int main()
{
    int i, l, r;
    string s, p, rs;
    cin>>s>>p;
    rs=p+"$"+s;
    int Z[rs.size()];
    l=0;
    r=0;
    Z[0]=0;
    for(i=1;i<rs.size();i++)
    {
        if(i>r)
        {
            r=i;
            x:l=i;
            while((r<rs.size())&&(rs[r]==rs[r-l]))
            r++;
            Z[i]=r-l;
            r--;
        }
        else if((Z[i-l]+i)<=r)
        Z[i]=Z[i-l];
        else
        goto x;
    }
    for(i=0;i<rs.size();i++)
    {
        if(Z[i]==p.size())
        cout<<"Pattern present at "<<(i-p.size()-1)<<endl;
    }
    return 0;
}