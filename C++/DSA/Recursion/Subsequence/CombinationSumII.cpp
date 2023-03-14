//CombinationSumII
#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;
vector<int>v;
void subsequence(int A[], int N, int i, int s);
int main()
{
    int i, N, s;
    cin>>N;
    int A[N];
    for(i=0;i<N;i++)
    cin>>A[i];
    cin>>s;
    sort(A, A+N);
    subsequence(A, N, 0, s);
    return 0;
}
void subsequence(int A[], int N, int i, int s)
{
    int j;
    if(s==0)
    {
        for(j=0;j<v.size();j++)
        cout<<v[j]<<" ";
        cout<<endl;
        return;
    }
    for(j=i;j<N;j++)
    {
        if((j!=i)&&(A[j]==A[j-1]))
        continue;
        if(A[j]>s)
        break;
        v.push_back(A[j]);
        subsequence(A, N, j+1, (s-A[j]));
        v.pop_back();
    }
}