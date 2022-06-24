//FindRepeatingAndMissing
#include<iostream>
#include<vector>
using namespace std;
vector<int>sb, usb;
int main()
{
    int i, N, x, s;
    cin>>N;
    int A[N];
    for(i=0;i<N;i++)
    cin>>A[i];
    x=0;
    for(i=0;i<N;i++)
    {
        x^=A[i];
        x^=(i+1);
    }
    s=0;
    while((x&(1<<s))==0)
    s++;
    for(i=0;i<N;i++)
    {
        if((A[i]&(1<<s))!=0)
        sb.push_back(A[i]);
        else
        usb.push_back(A[i]);
        if(((i+1)&(1<<s))!=0)
        sb.push_back(i+1);
        else
        usb.push_back(i+1);
    }
    x=0;
    for(auto j:sb)
    x^=j;
    s=0;
    for(auto j:usb)
    s^=j;
    for(i=0;i<N;i++)
    {
        if(x==A[i])
        {
            cout<<"Repeating "<<x<<endl<<"Missing "<<s<<endl;
            break;
        }
        else if(s==A[i])
        {
            cout<<"Repeating "<<s<<endl<<"Missing "<<x<<endl;
            break;
        }
    }
    return 0;
}