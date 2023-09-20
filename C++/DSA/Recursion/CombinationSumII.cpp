//CombinationSumII
#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;
void func(int n, int s, vector<int>&A, vector<int>&v);
int main()
{
    int i, N, s;
    cin>>N;
    vector<int>A(N), v;
    for(i=0;i<N;i++)
    cin>>A[i];
    cin>>s;
    sort(A.begin(), A.end());
    func(N-1, s, A, v);
    return 0;
}
void func(int n, int s, vector<int>&A, vector<int>&v)
{
    if(!s)
    {
        for(auto i:v)
        cout<<i<<" ";
        cout<<endl;
        return;
    }
    if(n<0 || s<0)
    return;
    v.push_back(A[n]);
    func(n-1, s-A[n], A, v);
    v.pop_back();
    while(n>0 && A[n]==A[n-1])
    n--;
    func(n-1, s, A, v);
}