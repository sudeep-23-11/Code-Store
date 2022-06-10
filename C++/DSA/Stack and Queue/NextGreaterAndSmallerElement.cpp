//NextGreaterAndSmallerElement
#include<iostream>
#include<stack>
using namespace std;
stack<int>g, s;
int main()
{
    int i, N;
    cin>>N;
    int A[N], nge[N], nse[N];
    for(i=0;i<N;i++)
    cin>>A[i];
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
    cout<<"Next Greater"<<endl;
    for(i=0;i<N;i++)
    cout<<nge[i]<<" ";
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
    cout<<endl<<"Next Smaller"<<endl;
    for(i=0;i<N;i++)
    cout<<nse[i]<<" ";
    return 0;
}