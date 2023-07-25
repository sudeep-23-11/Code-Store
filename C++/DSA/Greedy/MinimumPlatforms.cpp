//MinimumPlatforms
#include<iostream>
#include<algorithm>
using namespace std;
int main()
{
    int i, j, N, n, m;
    cin>>N;
    int a[N], d[N];
    for(i=0;i<N;i++)
    cin>>a[i]>>d[i];
    sort(a, a+N);
    sort(d, d+N);
    i=1;
    j=0;
    n=1;
    m=1;
    while(i<N && j<N)
    {
        if(a[i]<=d[j])
        {
            n++;
            i++;
        }
        else
        {
            n--;
            j++;
        }
        m=max(m, n);
    }
    cout<<m<<endl;
    return 0;
}