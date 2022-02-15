//LongestIncreasingSubsequences
#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;
vector<int>lis1;
vector<int>lis2;
int main()
{
    int i, j, N;
    cin>>N;
    int A[N];
    lis1.resize(100001, 1);
    lis2.resize(100001, 0);
    for(i=0;i<N;i++)
    cin>>A[i];
    for(i=0;i<N;i++)
    {
        for(j=0;j<i;j++)
        {
            if(A[j]<A[i])
            lis1[i]=max(lis1[i], (lis1[j]+1));
        }
        lis2[A[i]]=(*max_element(lis2.begin(), (lis2.begin()+A[i]))+1);
    }
    cout<<(*max_element(lis1.begin(), lis1.end()))<<endl;
    cout<<(*max_element(lis2.begin(), lis2.end()))<<endl;
    return 0;
}