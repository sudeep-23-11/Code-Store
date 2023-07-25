//SubsetsII
#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;
void subsequence(int A[], int N, int i, vector<int>&v);
int main()
{
    int i, N;
    cin>>N;
    int A[N];
    vector<int>v;
    for(i=0;i<N;i++)
    cin>>A[i];
    sort(A, A+N);
    subsequence(A, N, 0, v);
    return 0;
}
void subsequence(int A[], int N, int i, vector<int>&v)
{
    int j;
    for(j=0;j<v.size();j++)
    cout<<v[j]<<" ";
    cout<<endl;
    for(j=i;j<N;j++)
    {
        if(j!=i && A[j]==A[j-1])
        continue;
        v.push_back(A[j]);
        subsequence(A, N, j+1, v);
        v.pop_back();
    }
}