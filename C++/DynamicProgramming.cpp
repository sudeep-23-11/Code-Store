//DynamicProgramming
#include<iostream>
#include<cstring>
#include<algorithm>
using namespace std;
int fibo[100001];
int kpsk[1001][1001];
int fibon(int n);
int knapsack(int wt[], int val[], int i, int w, int n);
int main()
{
    int x, fb;                      
    cin>>x;
    memset(fibo, -1, sizeof(fibo));                 
    fb=fibon(x);
    cout<<fb<<endl;
    int i, w, n, ans;
    cin>>w>>n;
    int wt[n], val[n];
    for(i=0;i<n;i++)
    cin>>wt[i];
    for(i=0;i<n;i++)
    cin>>val[i];
    memset(kpsk, -1, sizeof(kpsk));
    ans=knapsack(wt, val, 0, w, n);
    cout<<ans<<endl;
    return 0;
}
int fibon(int n)
{
    if(fibo[n]!=-1)
    return fibo[n];
    else if(n==1||n==2)
    return fibo[n]=(n-1);
    else
    return fibo[n]=(fibon(n-1)+fibon(n-2));
}
int knapsack(int wt[], int val[], int i, int w, int n)
{
    if(i==n||w<=0)
    return 0;
    else if(kpsk[i][w]!=-1)
    return kpsk[i][w];
    else
    {
        int ans1=val[i]+knapsack(wt, val, i+1, w-wt[i], n);
        int ans2=knapsack(wt, val, i+1, w, n);
        if(w>=wt[i])
        return kpsk[i][w]=max(ans1, ans2);
        else
        return kpsk[i][w]=ans2;
    }
}
