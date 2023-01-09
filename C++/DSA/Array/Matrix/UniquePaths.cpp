//UniquePaths
#include<iostream>
using namespace std;
int main()
{
    int i, N, M, c;
    cin>>N>>M;
    c=1;
    for(i=1;i<=min(N-1, M-1);i++)
    {
        c*=(N+M-1-i);
        c/=i;
    }
    cout<<c<<endl;
    return 0;
}