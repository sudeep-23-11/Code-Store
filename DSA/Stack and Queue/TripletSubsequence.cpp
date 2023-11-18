//TripletSubsequence
#include<iostream>
#include<stack>
using namespace std;
bool t123(int A[], int N);
bool t132(int A[], int N);
int main()
{
    int i, N;
    cin>>N;
    int A[N];
    for(i=0;i<N;i++)
    cin>>A[i];
    if(t123(A, N))
    cout<<"Triplet 123 present"<<endl;
    else
    cout<<"Triplet 123 not present"<<endl;
    // if(t132(A, N))
    // cout<<"Triplet 132 present"<<endl;
    // else
    // cout<<"Triplet 132 not present"<<endl;
    return 0;
}
bool t123(int A[], int N)
{
    int i;
    int p[N], s[N];
    p[0]=A[0];
    s[N-1]=A[N-1];
    for(i=1;i<N;i++)
    {
        p[i]=min(p[i-1], A[i]);
        s[N-1-i]=max(s[N-i], A[N-1-i]);
    }
    for(i=0;i<N;i++)
    {
        if(p[i]<A[i] && A[i]<s[i])
        return true;
    }
    return false;
}
bool t132(int A[], int N)
{
    int i;
    int p[N];
    stack<int>st;
    p[0]=A[0];
    for(i=1;i<N;i++)
    p[i]=min(p[i-1], A[i]);
    for(i=N-1;i>=0;i--)
    {
        while(!st.empty() && st.top()<=p[i])
        st.pop();
        if(!st.empty() && st.top()<A[i])
        return true;
        else
        st.push(A[i]);
    }
    return false;
}