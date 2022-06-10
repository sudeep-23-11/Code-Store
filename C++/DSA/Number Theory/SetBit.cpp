//SetBit
#include<iostream>
using namespace std;
void binary(int n);
int main()
{
    int n, m, i;
    cin>>n;
    binary(n);
    cout<<"Bit you want to check"<<endl;
    cin>>i;
    if((n&(1<<i))!=0)
    cout<<"Set bit"<<endl;
    else
    cout<<"Not Set bit"<<endl;
    cout<<"Bit you want to make set"<<endl;
    cin>>i;
    m=n|(1<<i);
    binary(m);
    cout<<"Bit you want to make unset"<<endl;
    cin>>i;
    m=n&(~(1<<i));
    binary(m);
    cout<<"Bit you want to toggle"<<endl;
    cin>>i;
    m=n^(1<<i);
    binary(m);
    return 0;
}
void binary(int n)
{
    int i;
    for(i=10;i>=0;i--)
    cout<<((n>>i)&1);
    cout<<endl;
}