//3Sum
#include<iostream>
#include<algorithm>
using namespace std;
int main()
{
    int i, N, s, l, r;
    cin>>N;
    int A[N];
    for(i=0;i<N;i++)
    cin>>A[i];
    cin>>s;
    sort(A, A+N);
    for(i=0;i<N-2;i++)
    {
        if(i && A[i]==A[i-1])
        continue;
        l=i+1;
        r=N-1;
        while(l<r)
        {
            if(A[l]+A[r] == s-A[i])
            {
                cout<<A[i]<<" "<<A[l]<<" "<<A[r]<<endl;
                while(l<r && A[l]==A[l+1])
                l++;
                l++;
                while(l<r && A[r]==A[r-1])
                r--;
                r--;
            }
            else if(A[l]+A[r] < s-A[i])
            l++;
            else
            r--;
        }
    }
    return 0;
}