//ActivitySelection
#include<iostream>
#include<algorithm>
using namespace std;
struct Activity
{
    int id;
    int stime;
    int ftime;
};
bool cmp(struct Activity x, struct Activity y)
{
    return x.ftime<y.ftime;
}
int main()
{
    int i, j, N;
    cin>>N;
    struct Activity A[N];
    for(i=0;i<N;i++)
    cin>>A[i].id>>A[i].stime>>A[i].ftime;
    sort(A, A+N, cmp);
    j=0;
    cout<<A[j].id<<" "<<A[j].stime<<" "<<A[j].ftime<<endl;
    for(i=1;i<N;i++)
    {
        if(A[i].stime>=A[j].ftime)
        {
            j=i;
            cout<<A[j].id<<" "<<A[j].stime<<" "<<A[j].ftime<<endl;
        }
    }
    return 0;
}