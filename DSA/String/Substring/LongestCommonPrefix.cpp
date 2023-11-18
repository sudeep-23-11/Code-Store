//LongestCommonPrefix
#include<iostream>
using namespace std;
int main()
{
    int i, N;
    string r;
    cin>>N;
    string A[N];
    for(i=0;i<N;i++)
    cin>>A[i];
    r=A[0];
    for(i=1;i<N;i++)
    {
        while(r!="" && A[i].find(r))
        r.pop_back();
    }
    cout<<r<<endl;
    return 0;
}