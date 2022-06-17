//StackUsingArray
#include<iostream>
using namespace std;
int main()
{
    int top, ch, data, i;
    cout<<"0 for display"<<endl;
    cout<<"1 for push"<<endl;
    cout<<"2 for pop"<<endl;
    int stack[100001];
    top=0;
    while(1)
    {
        cout<<"Choice"<<endl;
        cin>>ch;
        if(ch==0)
        {
            for(i=(top-1);i>=0;i--)
            cout<<stack[i]<<" ";
            cout<<endl;
        }
        else if(ch==1)
        {
            cin>>data;
            stack[top]=data;
            top++;
        }
        else if(ch==2)
        top--;
        else
        break;
    }
    return 0;
}