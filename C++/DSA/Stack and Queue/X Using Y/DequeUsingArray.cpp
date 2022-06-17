//DequeUsingArray
#include<iostream>
using namespace std;
int main()
{
    int front, rear, ch, data, i;
    cout<<"0 for display"<<endl;
    cout<<"1 for push rear"<<endl;
    cout<<"2 for push front"<<endl;
    cout<<"3 for pop rear"<<endl;
    cout<<"4 for pop front"<<endl;
    int deque[100001];
    front=50000;
    rear=50000;
    while(1)
    {
        cout<<"Choice"<<endl;
        cin>>ch;
        if(ch==0)
        {
            for(i=front;i<rear;i++)
            cout<<deque[i]<<" ";
            cout<<endl;
        }
        else if(ch==1)
        {
            cin>>data;
            deque[rear]=data;
            rear++;
        }
        else if(ch==2)
        {
            cin>>data;
            front--;
            deque[front]=data;
        }
        else if(ch==3)
        rear--;
        else if(ch==4)
        front++;
        else
        break;
    } 
    return 0;
}