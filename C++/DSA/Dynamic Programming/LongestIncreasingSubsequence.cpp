//LongestIncreasingSubsequence
#include<iostream>
#include<cstring>
#include<vector>
#include<set>
using namespace std;
int dp[1001][1001];
int lcs(vector<int>X, vector<int>Y, int x, int y);
int main()
{
    int i, N, x;
    vector<int>a, b;
    set<int>st;
    cin>>N;
    for(i=0;i<N;i++)
    {
        cin>>x;
        a.push_back(x);
        st.insert(x);
    }
    for(auto j:st)
    b.push_back(j);
    memset(dp, -1, sizeof(dp));
    cout<<lcs(a, b, a.size(), b.size())<<endl;
    return 0;
}
int lcs(vector<int>X, vector<int>Y, int x, int y)
{
    if((x==0)||(y==0))
    return 0;
    if(dp[x-1][y-1]!=-1)
    return dp[x-1][y-1];
    if(X.at(x-1)==Y.at(y-1))
    return dp[x-1][y-1]=lcs(X, Y, x-1, y-1)+1;
    return dp[x-1][y-1]=max(lcs(X, Y, x-1, y), lcs(X, Y, x, y-1));
}