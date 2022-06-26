//SlidingWindowMaximumAndMinimum
#include<iostream>
#include<deque>
using namespace std;
deque<int>q;
void max(int A[], int K, int x);
void min(int A[], int K, int x);
int main()
{
    int i, N, K;
    cin>>N;
    int A[N];
    for(i=0;i<N;i++)
    cin>>A[i];
    cin>>K;
    cout<<"Sliding Window Maximum"<<endl;
    for(i=0;i<N;i++)
    max(A, K, i);
    q.clear();
    cout<<endl<<"Sliding Window Minimum"<<endl;
    for(i=0;i<N;i++)
    min(A, K, i);
    return 0;
}
void max(int A[], int K, int x)
{
    if((q.empty()==0)&&(q.front()==(x-K)))
    q.pop_front();
    while((q.empty()==0)&&(A[x]>A[q.back()]))
    q.pop_back();
    q.push_back(x);
    if(x>=(K-1))
    cout<<A[q.front()]<<" ";
}
void min(int A[], int K, int x)
{
    if((q.empty()==0)&&(q.front()==(x-K)))
    q.pop_front();
    while((q.empty()==0)&&(A[x]<A[q.back()]))
    q.pop_back();
    q.push_back(x);
    if(x>=(K-1))
    cout<<A[q.front()]<<" ";
}