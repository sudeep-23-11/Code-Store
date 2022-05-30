//Queues
#include<iostream>
using namespace std;
int main()
{
    int N, front, rear, i, x, y;
    cin>>N;
    int queue[N];
    front=0;
    rear=0;
    cout<<"Press 1 to insert element to queue"<<endl;
    cout<<"Press 2 to delete element from queue"<<endl;
    cout<<"Press 0 to display elements of the queue"<<endl;
    cout<<"Press -1 to exit"<<endl;
    while(1)
    {   
        cin>>x;
        if(x==-1)
        break;
        switch(x)
        {
            case 1: cin>>y;
                    queue[rear]=y;
                    rear++;
                    break;
            case 2: front++;
                    break;
            case 0: for(i=front;i<rear;i++)
                    cout<<queue[i]<<" ";
                    cout<<endl;
        }
    }
    return 0;
}
