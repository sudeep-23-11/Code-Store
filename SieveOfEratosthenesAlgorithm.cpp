//SieveOfEratosthenesAlgorithm
#include<iostream>
using namespace std;
int main()
{
    int i, j, c=0, n;
    long long sum;
    int prime[100001];
    int sumoffactors[100001];
    prime[0]=prime[1]=0;
    for(i=2;i<100001;i++)
    prime[i]=1;
    for(i=2;i<100001;i++)
    {
        if(prime[i]==1)
        {
            for(j=2*i;j<100001;j+=i)
            prime[j]=0;
        }
    }
    for(i=0;i<100001;i++)
    {
        if(prime[i]==1)
        {   
            cout<<i<<" ";
            c++;
        }
    }
    cout<<endl<<c<<endl;
    cin>>n;
    for(i=0;i<100001;i++)
    sumoffactors[i]=i;
    for(i=1;i<100001;i++)
    {
        for(j=2*i;j<100001;j+=i)
        sumoffactors[j]+=i;
    }
    sum=sumoffactors[n];
    cout<<sum<<endl;
    return 0;
}