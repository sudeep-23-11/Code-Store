//KthPermutation
#include<iostream>
#include<vector>
using namespace std;
int main()
{
    int i, N, K, tp, gp;
    cin>>N>>K;
    vector<char>v;
    tp=1;
    for(i=1;i<=N;i++)
    {
        tp*=i;
        v.push_back('0'+i);
    }
    K--;
    while(N)
    {
        gp=tp/N;
        cout<<v[K/gp]<<" ";
        v.erase(v.begin()+K/gp);
        tp/=N;
        N--;
        K%=gp;
    }
    cout<<endl;
    return 0;
}