//LinearSearch
#include<iostream>
using namespace std;
int main()
{
    bool flag;
    int i, N, ele;
    cin>>N;
    int A[N];
    for(i=0;i<N;i++)
    cin>>A[i];
    flag=false;
    cin>>ele;
    for(i=0;i<N;i++)
    {
        if(A[i]==ele)
        {
            flag=true;
            break;
        }
    }
    if(flag==true)
    cout<<"Index of "<<ele<<" is "<<i<<endl;
    else
    cout<<"Not present"<<endl;
    return 0;
}