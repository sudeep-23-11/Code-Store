//Duplicate
//FloydTortoiseAndHareAlgorithm
#include<iostream>
using namespace std;
int main()
{
    int i, N, s, f;
    cin>>N;
    int A[N];
    for(i=0;i<N;i++)
    cin>>A[i];
    s=A[0];
    f=A[0];
    while(1)
    {
        s=A[s];
        f=A[A[f]];
        if(s==f)
        break;
    }
    f=A[0];
    while(s!=f)
    {
        s=A[s];
        f=A[f];
    }
    cout<<s<<endl;
    return 0;
}