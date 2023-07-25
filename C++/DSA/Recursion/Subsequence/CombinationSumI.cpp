//CombinationSumI
#include<iostream>
#include<vector>
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
    subsequence(A, N, 0, s, v);
    return 0;
}
void subsequence(int A[], int N, int i, int s, vector<int>&v)
{
    int j;
    if(i==N)
    {
        if(!s)
        {
            for(j=0;j<v.size();j++)
            cout<<v[j]<<" ";
            cout<<endl;
        }
        return;
    }
    if(A[i]<=s)
    {
        v.push_back(A[i]);
        subsequence(A, N, i, s-A[i], v);
        v.pop_back();
    }
    subsequence(A, N, i+1, s, v);
}