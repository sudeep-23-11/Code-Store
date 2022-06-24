//FractionalKnapsack
#include<iostream>
#include<algorithm>
using namespace std;
struct Knapsack
{
    int wt;
    int val;
};
bool cmp(struct Knapsack a, struct Knapsack b)
{
    return (a.val/(double)a.wt>b.val/(double)b.wt);
}
int main()
{
    int i, N, W;
    double m;
    cin>>N>>W;
    struct Knapsack A[N];
    for(i=0;i<N;i++)
    cin>>A[i].wt;
    for(i=0;i<N;i++)
    cin>>A[i].val;
    sort(A, A+N, cmp);
    m=0.0;
    for(i=0;i<N;i++)
    {
        if(W==0)
        break;
        if(A[i].wt>W)
        {
            m+=(W*A[i].val/(double)A[i].wt);
            W=0;
        }
        else
        {
            m+=A[i].val;
            W-=A[i].wt;
        }
    }
    cout<<m<<endl;
    return 0;
}