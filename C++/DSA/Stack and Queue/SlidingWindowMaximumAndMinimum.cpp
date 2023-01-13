//SlidingWindowMaximumAndMinimum
#include<iostream>
#include<deque>
using namespace std;
void _max(int A[], int K, int x, deque<int>q);
void _min(int A[], int K, int x, deque<int>q);
int main()
{
    int i, N, K;
    cin>>N;
    int A[N];
    deque<int>q;
    for(i=0;i<N;i++)
    cin>>A[i];
    cin>>K;
    cout<<"Sliding Window Maximum"<<endl;
    for(i=0;i<N;i++)
    _max(A, K, i, q);
    q.clear();
    cout<<endl<<"Sliding Window Minimum"<<endl;
    for(i=0;i<N;i++)
    _min(A, K, i, q);
    return 0;
}
void _max(int A[], int K, int x, deque<int>q)
{
    if((q.empty()==0)&&(q.front()==(x-K)))
    q.pop_front();
    while((q.empty()==0)&&(A[x]>A[q.back()]))
    q.pop_back();
    q.push_back(x);
    if(x>=(K-1))
    cout<<A[q.front()]<<" ";
}
void _min(int A[], int K, int x, deque<int>q)
{
    if((q.empty()==0)&&(q.front()==(x-K)))
    q.pop_front();
    while((q.empty()==0)&&(A[x]<A[q.back()]))
    q.pop_back();
    q.push_back(x);
    if(x>=(K-1))
    cout<<A[q.front()]<<" ";
}