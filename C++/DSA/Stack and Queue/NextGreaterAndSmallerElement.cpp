//NextGreaterAndSmallerElement
#include<iostream>
#include<stack>
using namespace std;
void _greater(int A[], int N, stack<int>st);
void smaller(int A[], int N, stack<int>st);
int main()
{
    int i, N;
    cin>>N;
    int A[N];
    stack<int>st1, st2;
    for(i=0;i<N;i++)
    cin>>A[i];
    cout<<"Next Greater Element"<<endl;
    _greater(A, N, st1);
    cout<<endl<<"Next Smaller Element"<<endl;
    smaller(A, N, st2);
    return 0;
}
void _greater(int A[], int N, stack<int>st)
{
    int i;
    int nge[N];
    for(i=(N*2-1);i>=0;i--)
    {
        while((st.empty()==0)&&(st.top()<=A[i%N]))
        st.pop();
        if(st.empty()==0)
        nge[i%N]=st.top();
        else
        nge[i%N]=-1;
        st.push(A[i%N]);
    }
    for(i=0;i<N;i++)
    cout<<nge[i]<<" ";
}
void smaller(int A[], int N, stack<int>st)
{
    int i;
    int nse[N];
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
}