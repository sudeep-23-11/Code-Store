//BitManipulation
#include<iostream>
using namespace std;
string binaryequivalent(int num);
int main()
{
    int n, i, x, y;
    cin>>n;
    if((n&1)==0)
    cout<<"Even"<<endl;
    else
    cout<<"Odd"<<endl;
    if((n&(n-1))==0)
    cout<<"Power of 2"<<endl;
    else
    cout<<"Not Power of 2"<<endl;
    cin>>i;
    if((n&(1<<(i-1)))==0)
    cout<<i<<" bit of "<<binaryequivalent(n)<<" is not set"<<endl;
    else
    cout<<i<<" bit of "<<binaryequivalent(n)<<" is set"<<endl;
    x=n|(1<<(i-1));
    cout<<i<<" bit of "<<binaryequivalent(n)<<" is set to 1 as "<<binaryequivalent(x)<<endl;
    y=n&(~(1<<(i-1)));
    cout<<i<<" bit of "<<binaryequivalent(n)<<" is set to 0 as "<<binaryequivalent(y)<<endl;
    return 0;
}
string binaryequivalent(int num)
{
    string s;
    while(num>0)
    {
        if(num%2==0)
        s="0"+s;
        else
        s="1"+s;
        num/=2;
    }
    if(s.empty()==0)
    return s;
    else
    return "0";
}