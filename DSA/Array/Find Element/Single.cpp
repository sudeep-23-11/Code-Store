#include<iostream>
using namespace std;
void f1r2(int A[], int N);
void f1r3(int A[], int N);
void f2r2(int A[], int N);
int main()
{
    int i, N;
    cin>>N;
    int A[N];
    for(i=0;i<N;i++)
    cin>>A[i];
    cout<<"1 element once, rest twice"<<endl;
    f1r2(A, N);
    // cout<<"1 element once, rest thrice"<<endl;
    // f1r3(A, N);
    // cout<<"2 elements once, rest twice"<<endl;
    // f2r2(A, N);
    return 0;
}
void f1r2(int A[], int N)
{
    int i, x;
    x=0;
    for(i=0;i<N;i++)
    x^=A[i];
    cout<<x<<endl;
}
void f1r3(int A[], int N)
{
    int i, x, y;
    x=y=0;
    for(i=0;i<N;i++)
    {
        x=(x^A[i])&(~y);
        y=(y^A[i])&(~x);
    }
    cout<<x<<endl;
}
void f2r2(int A[], int N)
{
    int i, x, y, z;
    x=y=z=0;
    for(i=0;i<N;i++)
    z^=A[i];
    z=z&(-z);
    for(i=0;i<N;i++)
    {
        if(!(A[i]&z))
        x^=A[i];
        else
        y^=A[i];
    }
    cout<<x<<" "<<y<<endl;
}