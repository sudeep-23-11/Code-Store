//TabulationAndMemoization
#include<iostream>
#include<cstring>
using namespace std;
int tabu[100001];
int memo[100001];
int fibo(int n);
int main()
{
    int n, i;
    cin>>n;
    memset(tabu, -1, sizeof(tabu));
    tabu[0]=0;
    tabu[1]=1;
    for(i=2;i<=100001;i++)
    tabu[i]=tabu[i-1]+tabu[i-2];
    cout<<tabu[n-1]<<endl;
    memset(memo, -1, sizeof(memo));
    cout<<fibo(n-1)<<endl;
    return 0;
}
int fibo(int n)
{
    if(memo[n]!=-1)
    return memo[n];
    else if(n==0||n==1)
    return memo[n]=n;
    else
    return memo[n]=fibo(n-1)+fibo(n-2);
}