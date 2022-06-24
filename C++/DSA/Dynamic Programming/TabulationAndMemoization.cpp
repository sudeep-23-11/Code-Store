//TabulationAndMemoization
#include<iostream>
#include<cstring>
using namespace std;
int tabu[100001];
int memo[100001];
int fibo(int i);
int main()
{
    int i, N;
    cin>>N;
    memset(tabu, -1, sizeof(tabu));
    memset(memo, -1, sizeof(memo));
    tabu[0]=0;
    tabu[1]=1;
    for(i=2;i<100001;i++)
    tabu[i]=tabu[i-1]+tabu[i-2];
    cout<<tabu[N-1]<<" "<<fibo(N-1)<<endl;
    return 0;
}
int fibo(int i)
{
    if((i==0)||(i==1))
    return i;
    if(memo[i]!=-1)
    return memo[i];
    return memo[i]=fibo(i-1)+fibo(i-2);
}