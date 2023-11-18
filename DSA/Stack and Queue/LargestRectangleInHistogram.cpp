//LargestRectangleInHistogram
#include<iostream>
#include<stack>
using namespace std;
int main()
{
    int i, N, m, h, w;
    cin>>N;
    int A[N];
    stack<int>st;
    for(i=0;i<N;i++)
    cin>>A[i];
    m=0;
    for(i=0;i<=N;i++)
    {
        while(!st.empty() && (i==N || A[st.top()]>=A[i]))
        {
            h=A[st.top()];
            st.pop();
            if(!st.empty())
            w=i-st.top()-1;
            else
            w=i;
            m=max(m, w*h);
        }
        st.push(i);
    }
    cout<<m<<endl;
    return 0;
}