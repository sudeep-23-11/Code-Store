//LinearSearch
#include<iostream>
using namespace std;
int main()
{
    int i, N, ele, flag=0;
    cin>>N;
    int A[N];
    for(i=0;i<N;i++)
    cin>>A[i];
    cin>>ele;
    for(i=0;i<N;i++)
    {
        if(A[i]==ele)
        {
            flag=1;
            break;
        }
    }
    if(flag==1)
    cout<<"Index of "<<ele<<" is "<<i<<endl;
    else
    cout<<"Not present"<<endl;
    return 0;
}