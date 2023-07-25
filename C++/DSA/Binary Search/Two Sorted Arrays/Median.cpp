//Median
#include<iostream>
#include<vector>
#include<climits>
using namespace std;
int main()
{
    int i, N, M, lo, hi, x, y, l1, l2, r1, r2;
    double m;
    cin>>N>>M;
    vector<int>A(N), B(M);
    for(i=0;i<N;i++)
    cin>>A[i];
    for(i=0;i<M;i++)
    cin>>B[i];
    if(N>M)
    swap(A, B);
    lo=0;
    hi=A.size();
    while(lo<=hi)
    {
        x=(lo+hi)/2;
        y=(A.size()+B.size())/2-x;
        l1=x==0 ? INT_MIN : A[x-1];
        l2=y==0 ? INT_MIN : B[y-1];
        r1=x==A.size() ? INT_MAX : A[x];
        r2=y==B.size() ? INT_MAX : B[y];
        if(l1<=r2 && l2<=r1)
        {
            if(!((A.size()+B.size())%2))
            m=(max(l1, l2)+min(r1, r2))/2.0;
            else
            m=min(r1, r2);
            break;
        }
        else if(l1>r2)
        hi=x-1;
        else
        lo=x+1;
    }
    cout<<m<<endl;
    return 0;
}