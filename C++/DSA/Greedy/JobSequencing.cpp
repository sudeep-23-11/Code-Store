//JobSequencing
#include<iostream>
#include<algorithm>
#include<cstring>
using namespace std;
struct job
{
    int id, dl, p;
};
bool cmp(job x, job y)
{
    return x.p>y.p;
}
int main()
{
    int i, j, N;
    cin>>N;
    job A[N];
    for(i=0;i<N;i++)
    cin>>A[i].id>>A[i].dl>>A[i].p;
    sort(A, A+N, cmp);
    int slot[N];
    memset(slot, -1, sizeof(slot));
    for(i=0;i<N;i++)
    {
        for(j=min(N, A[i].dl);j>=0;j--)
        {
            if(slot[j]==-1)
            {
                slot[j]=i;
                break;
            }
        }
    }
    for(i=0;i<N;i++)
    {
        if(slot[i]!=-1)
        cout<<A[slot[i]].id<<" "<<A[slot[i]].dl<<" "<<A[slot[i]].p<<endl;
    }
    return 0;
}