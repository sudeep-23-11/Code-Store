//CombinationI
#include<iostream>
#include<vector>
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
    subsequence(A, N, 0, s);
    return 0;
}
void subsequence(int A[], int N, int i, int s)
{
    int j;
    if(i==N)
    {
        if(s==0)
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
        subsequence(A, N, i, (s-A[i]));
        v.pop_back();
    }
    subsequence(A, N, i+1, s);
}