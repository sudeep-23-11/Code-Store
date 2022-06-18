//NextGreaterAndSmallerElement
#include<iostream>
#include<stack>
using namespace std;
int i;
stack<int>st;
void _greater(int A[], int N);
void smaller(int A[], int N);
int main()
{
    int N;
    cin>>N;
    int A[N];
    for(i=0;i<N;i++)
    cin>>A[i];
    cout<<"Next Greater Element"<<endl;
    _greater(A, N);
    while(st.empty()==0)
    st.pop();
    cout<<endl<<"Next Smaller Element"<<endl;
    smaller(A, N);
    return 0;
}
void _greater(int A[], int N)
{
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
void smaller(int A[], int N)
{
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