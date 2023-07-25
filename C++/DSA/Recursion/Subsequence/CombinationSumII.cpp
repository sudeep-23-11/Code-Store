//CombinationSumII
#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;
void subsequence(int A[], int N, int i, int s, vector<int>&v);
int main()
{
    int i, N, s;
    cin>>N;
    int A[N];
    vector<int>v;
    for(i=0;i<N;i++)
    cin>>A[i];
    cin>>s;
    sort(A, A+N);
    subsequence(A, N, 0, s, v);
    return 0;
}
void subsequence(int A[], int N, int i, int s, vector<int>&v)
{
    int j;
    if(!s)
    {
        for(j=0;j<v.size();j++)
        cout<<v[j]<<" ";
        cout<<endl;
        return;
    }
    for(j=i;j<N;j++)
    {
        if(j!=i && A[j]==A[j-1])
        continue;
        if(A[j]>s)
        break;
        v.push_back(A[j]);
        subsequence(A, N, j+1, s-A[j], v);
        v.pop_back();
    }
}