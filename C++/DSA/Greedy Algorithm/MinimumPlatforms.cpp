//MinimumPlatforms
#include<iostream>
#include<algorithm>
using namespace std;
int main()
{
    int i, j, N, n, m;
    cin>>N;
    int arrival[N], departure[N];
    for(i=0;i<N;i++)
    cin>>arrival[i]>>departure[i];
    sort(arrival, arrival+N);
    sort(departure, departure+N);
    i=1;
    j=0;
    n=1;
    m=1;
    while((i<N)&&(j<N))
    {
        if(arrival[i]<=departure[j])
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