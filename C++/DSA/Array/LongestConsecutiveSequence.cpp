//LongestConsecutiveSequence
#include<iostream>
#include<unordered_set>
using namespace std;
int main()
{
    int i, N, c, m;
    unordered_set<int>st;
    cin>>N;
    int A[N];
    for(i=0;i<N;i++)
    cin>>A[i];
    for(i=0;i<N;i++)
    st.insert(A[i]);
    m=0;
    for(i=0;i<N;i++)
    {
        if(!st.count(A[i]-1))
        {
            c=0;
            while(st.count(A[i]+c))
            c++;
            m=max(m, c);
        }
    }
    cout<<m<<endl;
    return 0;
}