//JobSequencing
#include<iostream>
#include<algorithm>
#include<cstring>
using namespace std;
struct Job
{
    int id;
    int deadline;
    int profit;
};
bool cmp(struct Job x, struct Job y)
{
    return x.profit>y.profit;
}
int main()
{
    int i, j, N;
    cin>>N;
    struct Job A[N];
    for(i=0;i<N;i++)
    cin>>A[i].id>>A[i].deadline>>A[i].profit;
    sort(A, A+N, cmp);
    int slot[N];
    memset(slot, -1, sizeof(slot));
    for(i=0;i<N;i++)
    {
        for(j=min(N, A[i].deadline);j>=0;j--)
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
        cout<<A[slot[i]].id<<" "<<A[slot[i]].deadline<<" "<<A[slot[i]].profit<<endl;
    }
    return 0;
}