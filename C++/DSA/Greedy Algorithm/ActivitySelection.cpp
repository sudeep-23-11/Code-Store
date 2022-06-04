//ActivitySelection
#include<iostream>
#include<algorithm>
using namespace std;
struct Activity
{
    int id;
    int starttime;
    int finishtime;
};
bool cmp(struct Activity x, struct Activity y)
{
    return x.finishtime<y.finishtime;
}
int main()
{
    int i, j, N;
    cin>>N;
    struct Activity A[N];
    for(i=0;i<N;i++)
    cin>>A[i].id>>A[i].starttime>>A[i].finishtime;
    sort(A, A+N, cmp);
    j=0;
    cout<<A[j].id<<" "<<A[j].starttime<<" "<<A[j].finishtime<<endl;
    for(i=1;i<N;i++)
    {
        if(A[i].starttime>=A[j].finishtime)
        {
            j=i;
            cout<<A[j].id<<" "<<A[j].starttime<<" "<<A[j].finishtime<<endl;
        }
    }
    return 0;
}