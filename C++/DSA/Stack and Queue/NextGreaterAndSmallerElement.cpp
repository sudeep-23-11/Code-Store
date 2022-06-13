//NextGreaterAndSmallerElement
#include<iostream>
#include<stack>
using namespace std;
stack<int>g, s;
void _greater(int A[], int N);
void smaller(int A[], int N);
int main()
{
    int i, N;
    cin>>N;
    int A[N];
    for(i=0;i<N;i++)
    cin>>A[i];
    cout<<"Next Greater Array"<<endl;
    _greater(A, N);
    cout<<"Next Smaller Array"<<endl;
    smaller(A, N);
    return 0;
}
void _greater(int A[], int N)
{
    int i;
    int nge[N];
    for(i=(N*2-1);i>=0;i--)
    {
        while((g.empty()==0)&&(g.top()<=A[i%N]))
        g.pop();
        if(g.empty()==0)
        nge[i%N]=g.top();
        else
        nge[i%N]=-1;
        g.push(A[i%N]);
    }
    for(i=0;i<N;i++)
    cout<<nge[i]<<" ";
    cout<<endl;
}
void smaller(int A[], int N)
{
    int i;
    int nse[N];
    for(i=(N*2-1);i>=0;i--)
    {
        while((s.empty()==0)&&(s.top()>=A[i%N]))
        s.pop();
        if(s.empty()==0)
        nse[i%N]=s.top();
        else
        nse[i%N]=-1;
        s.push(A[i%N]);
    }
    for(i=0;i<N;i++)
    cout<<nse[i]<<" ";
    cout<<endl;
}