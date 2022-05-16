//DisjointSetUnion
#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;
int point[100001];
int size[100001];
int rank_[100001];
void makeset(int i);
int find(int i);
void setunoin(int a, int b);
int main()
{
    int n, m, i, k;
    cin>>n>>m;
    for(i=1;i<=n;i++)
    makeset(i);
    while(m--)
    {
        cin>>k;
        vector<int>grp(k);
        for(i=0;i<k;i++)
        {
            cin>>grp[i];
            setunoin(grp[0], grp[i]);
        }
    }
    for(i=1;i<=n;i++)
    cout<<point[i]<<" ";
    cout<<endl;
    for(i=1;i<=n;i++)
    cout<<size[point[i]]<<" ";
    cout<<endl;
    for(i=1;i<=n;i++)
    cout<<rank_[i]<<" ";
    cout<<endl;
    return 0;
}
void makeset(int i)
{
    point[i]=i;
    size[i]=1;
    rank_[i]=0;
}
int find(int i)
{
    if(point[i]==i)
    return i;
    else
    return point[i]=find(point[i]);
}
void setunoin(int a, int b)
{
    a=find(a);
    b=find(b);
    if(a!=b)
    {
        if((size[a]<size[b])||(rank_[a]<rank_[b]))
        swap(a, b);
        else if(rank_[a]==rank_[b])
        rank_[a]++;
        size[a]+=size[b];
        point[b]=a;
    }
}