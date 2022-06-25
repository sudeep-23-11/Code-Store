//LongestSubarrayWithZeroSum
#include<iostream>
#include<unordered_map>
using namespace std;
unordered_map<int, int>m;
int main()
{
    int i, N, s, ma;
    cin>>N;
    int A[N];
    for(i=0;i<N;i++)
    cin>>A[i];
    s=0;
    ma=0;
    for(i=0;i<N;i++)
    {
        s+=A[i];
        if(s==0)
        ma=i+1;
        if(m.count(s)==0)
        m.insert(make_pair(s, i));
        else
        ma=max(ma, (i-m[s]));
    }
    cout<<ma<<endl;
    return 0;
}