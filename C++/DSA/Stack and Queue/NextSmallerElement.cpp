//NextSmallerElement
#include<iostream>
#include<stack>
using namespace std;
stack<int>st;
int main()
{
    int i, N;
    cin>>N;
    int A[N], nse[N];
    for(i=0;i<N;i++)
    cin>>A[i];
    for(i=(N*2-1);i>=0;i--)
    {
        while((st.empty()==0)&&(st.top()>=A[i%N]))
        st.pop();
        if(st.empty()==0)
        nse[i%N]=st.top();
        else
        nse[i%N]=-1;
        st.push(A[i%N]);
    }
    for(i=0;i<N;i++)
    cout<<nse[i]<<" ";
    return 0;
}