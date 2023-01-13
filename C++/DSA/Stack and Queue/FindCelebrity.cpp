//FindCelebrity
#include<iostream>
#include<stack>
using namespace std;
int main()
{
    int i, j, N, x, y, c;
    cin>>N;
    int A[N][N];
    stack<int>st;
    for(i=0;i<N;i++)
    {
        for(j=0;j<N;j++)
        cin>>A[i][j];
    }
    for(i=0;i<N;i++)
    st.push(i);
    while(st.size()>1)
    {
        x=st.top();
        st.pop();
        y=st.top();
        st.pop();
        if(A[x][y]==1)
        st.push(y);
        else
        st.push(x);
    }
    c=st.top();
    for(i=0;i<N;i++)
    {
        if((i!=c)&&((A[i][c]==0)||(A[c][i]==1)))
        break;
    }
    if(i<N)
    cout<<"No Celebrity"<<endl;
    else
    cout<<c<<endl;
    return 0;
}