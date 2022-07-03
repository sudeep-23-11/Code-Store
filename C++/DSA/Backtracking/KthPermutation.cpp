//KthPermutation
#include<iostream>
#include<vector>
using namespace std;
vector<int>v;
int main()
{
    int i, N, K, f, j;
    cin>>N>>K;
    f=1;
    for(i=1;i<=N;i++)
    {
        v.push_back(i);
        f*=i;
    }
    K--;
    while(v.empty()==0)
    {
        j=f/v.size();
        cout<<v[K/j]<<" ";
        v.erase(v.begin()+K/j);
        f=j;
        K%=j;
    }
    cout<<endl;
    return 0;
}