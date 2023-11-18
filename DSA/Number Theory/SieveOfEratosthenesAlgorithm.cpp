//SieveOfEratosthenesAlgorithm
#include<iostream>
using namespace std;
int main()
{
    int i, j, N, n;
    N=100001;
    bool p[N];
    int fs[N];
    for(i=0;i<N;i++)
    {
        if(i<2)
        p[i]=false;
        else
        p[i]=true;
        fs[i]=i;
    }
    for(i=0;i<N;i++)
    {
        if(p[i])
        {
            for(j=i*2;j<N;j+=i)
            p[j]=false;
        }
        if(i)
        {
            for(j=i*2;j<N;j+=i)
            fs[j]+=i;
        }
    }
    for(i=0;i<N;i++)
    {
        if(p[i])
        cout<<i<<" ";
    }
    cin>>n;
    cout<<endl<<fs[n]<<endl;
    return 0;
}