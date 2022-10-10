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
    cout<<lcs(a, b, a.size()-1, b.size()-1)<<endl;
    return 0;
}
int lcs(vector<int>X, vector<int>Y, int x, int y)
{
    if((x<0)||(y<0))
    return 0;
    if(dp[x][y]!=-1)
    return dp[x][y];
    if(X.at(x)==Y.at(y))
    return dp[x][y]=lcs(X, Y, x-1, y-1)+1;
    return dp[x][y]=max(lcs(X, Y, x-1, y), lcs(X, Y, x, y-1));
}