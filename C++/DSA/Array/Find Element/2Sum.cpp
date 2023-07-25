//2Sum
#include<iostream>
#include<unordered_map>
using namespace std;
int main()
{
    int i, N, s;
    unordered_map<int, int>m;
    cin>>N;
    int A[N];
    for(i=0;i<N;i++)
    cin>>A[i];
    cin>>s;
    for(i=0;i<N;i++)
    {
        if(!m.count(s-A[i]))
        m.insert({A[i], i});
        else
        {
            cout<<m[s-A[i]]<<" "<<i<<endl;
            break;
        }
    }
    return 0;
}