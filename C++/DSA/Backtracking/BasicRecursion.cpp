//BasicRecursion
#include<iostream>
using namespace std;
int factorial(int N);
int fibonacci(int N);
int main()
{
    int N;
    cin>>N;
    cout<<factorial(N)<<endl;
    cout<<fibonacci(N)<<endl;
    return 0;
}
int factorial(int N)
{
    if(N==0)
    return 1;
    return N*factorial(N-1);
}
int fibonacci(int N)
{
    if(N<=1)
    return N;
    return fibonacci(N-1)+fibonacci(N-2);
}