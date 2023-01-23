//SpaceOptimizedTabulation
#include<iostream>
using namespace std;
int main()
{
    int i, N, cr, p1, p2;
    cin>>N;
    if(N<2)
    cout<<N<<endl;
    else
    {
        p2=0;
        p1=1;
        for(i=2;i<=N;i++)
        {
            cr=p1+p2;
            p2=p1;
            p1=cr;
        }
        cout<<cr<<endl;
    }
    return 0;
}