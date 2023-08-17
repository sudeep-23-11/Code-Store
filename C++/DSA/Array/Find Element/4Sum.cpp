//4Sum
#include<iostream>
#include<algorithm>
using namespace std;
int main()
{
    int i, j, N, s, l, r;
    cin>>N;
    int A[N];
    for(i=0;i<N;i++)
    cin>>A[i];
    cin>>s;
    sort(A, A+N);
    for(i=0;i<N-3;i++)
    {
        if(i && A[i]==A[i-1])
        continue;
        for(j=i+1;j<N-2;j++)
        {
            if(j!=i+1 && A[j]==A[j-1])
            continue;
            l=j+1;
            r=N-1;
            while(l<r)
            {
                if(A[l]+A[r] == s-A[i]-A[j])
                {
                    cout<<A[i]<<" "<<A[j]<<" "<<A[l]<<" "<<A[r]<<endl;
                    while(l<r && A[l]==A[l+1])
                    l++;
                    l++;
                    while(l<r && A[r]==A[r-1])
                    r--;
                    r--;
                }
                else if(A[l]+A[r] < s-A[i]-A[j])
                l++;
                else
                r--;
            }
        }
    }
    return 0;
}