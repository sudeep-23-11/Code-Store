//SlidingWindowMaximum
#include<iostream>
#include<deque>
using namespace std;
int main()
{
    int i, N, K;
    cin>>N;
    int A[N];
    deque<int>q;
    for(i=0;i<N;i++)
    cin>>A[i];
    cin>>K;
    for(i=0;i<N;i++)
    {
        if(!q.empty() && q.front()==i-K)
        q.pop_front();
        while(!q.empty() && A[i]>A[q.back()])
        q.pop_back();
        q.push_back(i);
        if(i >= K-1)
        cout<<A[q.front()]<<" ";
    }
    return 0;
}