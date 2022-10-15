//TrappingRainwater
#include<iostream>
using namespace std;
int main()
{
    int i, N, l, r, ml, mr, tw;
    cin>>N;
    int A[N];
    for(i=0;i<N;i++)
    cin>>A[i];
    l=0;
    r=N-1;
    ml=0;
    mr=0;
    tw=0;
    while(l<=r)
    {
        if(A[l]<=A[r])
        {
            if(A[l]>=ml)
            ml=A[l];
            else
            tw+=(ml-A[l]);
            l++;
        }
        else
        {
            if(A[r]>=mr)
            mr=A[r];
            else
            tw+=(mr-A[r]);
            r--;
        }
    }
    cout<<tw<<endl;
    return 0;
}