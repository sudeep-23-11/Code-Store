//BitwiseManipulation
#include<iostream>
using namespace std;
void evenodd(int n);
void powerof2(int n);
int main()
{
    int n;
    cin>>n;
    evenodd(n);
    powerof2(n);
    return 0;
}
void evenodd(int n)
{
    if((n&1)==0)
    cout<<"Even"<<endl;
    else
    cout<<"Odd"<<endl;
}
void powerof2(int n)
{
    if((n&(n-1))==0)
    cout<<"Power of 2"<<endl;
    else
    cout<<"Not a Power of 2"<<endl;
}