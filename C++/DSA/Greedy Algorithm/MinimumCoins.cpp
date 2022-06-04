//MinimumCoins
#include<iostream>
using namespace std;
int main()
{
    int i, N, V;
    cin>>V;
    N=9;
    int coins[]={1, 2, 5, 10, 20, 50, 100, 500, 1000};
    for(i=(N-1);i>=0;i--)
    {
        while(V>=coins[i])
        {
            cout<<coins[i]<<" ";
            V-=coins[i];
        }
    }
    return 0;
}