//OnlineStockSpan
#include<iostream>
#include<stack>
using namespace std;
int main()
{
    int i, N;
    cin>>N;
    int A[N], R[N];
    stack<pair<int, int>>st;
    for(i=0;i<N;i++)
    cin>>A[i];
    for(i=0;i<N;i++)
    {
        while((st.empty()==0)&&(A[i]>=st.top().first))
        st.pop();
        if(st.empty()==1)
        R[i]=i+1;
        else
        R[i]=i-st.top().second;
        st.push(make_pair(A[i], i));
    }
    for(i=0;i<N;i++)
    cout<<R[i]<<" ";
    cout<<endl;
    return 0;
}