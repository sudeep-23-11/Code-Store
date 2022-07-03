//SubsequencesWithKSum
#include<iostream>
#include<vector>
using namespace std;
vector<int>v;
void subsequence(int A[], int N, int i, int s, int K);
int main()
{
    int i, N, K;
    cin>>N;
    int A[N];
    for(i=0;i<N;i++)
    cin>>A[i];
    cin>>K;
    subsequence(A, N, 0, 0, K);
    return 0;
}
void subsequence(int A[], int N, int i, int s, int K)
{
    if(i==N)
    {
        if(s==K)
        {
            for(auto j:v)
            cout<<j<<" ";
            cout<<endl;
        }
        return;
    }
    v.push_back(A[i]);
    s+=A[i];
    subsequence(A, N, i+1, s, K);
    v.pop_back();
    s-=A[i];
    subsequence(A, N, i+1, s, K);
}