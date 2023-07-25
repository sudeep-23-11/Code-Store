//ActivitySelection
#include<iostream>
#include<algorithm>
using namespace std;
struct act
{
    int id, st, ft;
};
bool cmp(act x, act y)
{
    return x.ft<y.ft;
}
int main()
{
    int i, j, N;
    cin>>N;
    act A[N];
    for(i=0;i<N;i++)
    cin>>A[i].id>>A[i].st>>A[i].ft;
    sort(A, A+N, cmp);
    j=0;
    cout<<A[j].id<<" "<<A[j].st<<" "<<A[j].ft<<endl;
    for(i=1;i<N;i++)
    {
        if(A[i].st>=A[j].ft)
        {
            j=i;
            cout<<A[j].id<<" "<<A[j].st<<" "<<A[j].ft<<endl;
        }
    }
    return 0;
}