//Recursion
#include<iostream>
using namespace std;
int fact(int n);
int fibo(int n);
int main()
{
    int n;
    cin>>n;
    cout<<fact(n)<<endl;
    cout<<fibo(n)<<endl;
    return 0;
}
int fact(int n)
{
    if(n==0||n==1)
    return 1;
    else
    return (n*fact(n-1));
}
int fibo(int n)
{
    if(n==1||n==2)
    return (n-1);
    else
    return (fibo(n-1)+fibo(n-2));
}
