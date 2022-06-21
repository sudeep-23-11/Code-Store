//PascalTriangle
#include<iostream>
using namespace std;
int main()
{
    int i, j, N, c;
    cin>>N;
    for(i=1;i<=N;i++)
    {
        c=1;
        for(j=1;j<=i;j++)
        {
            cout<<c<<" ";
            c*=(i-j);
            c/=j;
        }
        cout<<endl;
    }
    return 0;
}