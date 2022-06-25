//2Sum
#include<iostream>
#include<map>
using namespace std;
map<int, int>m;
int main()
{
    int i, N, s;
    cin>>N;
    int A[N];
    for(i=0;i<N;i++)
    cin>>A[i];
    cin>>s;
    for(i=0;i<N;i++)
    {
        if(m.count(s-A[i])==0)
        m.insert(make_pair(A[i], i));
        else
        {
            cout<<m[s-A[i]]<<" "<<i<<endl;
            break;
        }
    }
    return 0;
}