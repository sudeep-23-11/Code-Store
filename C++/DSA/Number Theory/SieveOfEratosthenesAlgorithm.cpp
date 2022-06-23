//SieveOfEratosthenesAlgorithm
#include<iostream>
using namespace std;
bool prime[100001];
int factorsum[100001];
int main()
{
    int i, j, N;
    for(i=0;i<100001;i++)
    {
        if((i==0)||(i==1))
        prime[i]=false;
        else
        prime[i]=true;
        factorsum[i]=i;
    }
    for(i=0;i<100001;i++)
    {
        if(prime[i]==true)
        {
            for(j=(i*2);j<100001;j+=i)
            prime[j]=false;
        }
        if(i!=0)
        {
            for(j=2*i;j<100001;j+=i)
            factorsum[j]+=i;
        }
    }
    for(i=0;i<100001;i++)
    {
        if(prime[i]==true)
        cout<<i<<" ";
    }
    cout<<endl;
    cin>>N;
    cout<<factorsum[N]<<endl;
    return 0;
}