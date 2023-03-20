//AggressiveCows
#include<iostream>
#include<vector>
using namespace std;
int main()
{
    int i, N, c, lo, hi, m;
    cin>>N>>c;
    int A[N];
    for(i=0;i<N;i++)
    cin>>A[i];
    lo=A[1]-A[0];
    hi=A[N-1]-A[0];
    while(lo<=hi)
    {
        m=(lo+hi)/2;
        vector<int>v;
        v.push_back(0);
        for(i=1;i<N;i++)
        {
            if((A[i]-A[v[v.size()-1]])>=m)
            v.push_back(i);
        }
        if(v.size()<c)
        hi=m-1;
        else
        lo=m+1;
    }
    cout<<hi<<endl;
    return 0;
}