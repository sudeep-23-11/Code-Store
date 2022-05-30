//Deques
#include<iostream>
using namespace std;
int main()
{
    int N, front, rear, i, x, y;
    cin>>N;
    int deque[N];
    front=0;
    rear=0;
    cout<<"Press 1 to insert element to rear end"<<endl;
    cout<<"Press 2 to delete element from rear end"<<endl;
    cout<<"Press 3 to insert element to front end"<<endl;
    cout<<"Press 4 to delete element from front end"<<endl;
    cout<<"Press 0 to display elements of the deque"<<endl;
    cout<<"Press -1 to exit"<<endl;
    while(1)
    {
        cin>>x;
        if(x==-1)
        break;
        switch(x)
        {
            case 1: cin>>y;
                    if(rear==N)
                    rear=0;
                    deque[rear]=y;
                    rear++;
                    break;
            case 2: rear--;
                    if(rear==-1)
                    rear=N-1;
                    break;
            case 3: cin>>y;
                    front--;
                    if(front==-1)
                    front=N-1;
                    deque[front]=y;
                    break;
            case 4: if(front==N)
                    front=0;
                    front++;
                    break;
            case 0: if(front>rear)
                    {
                        for(i=front;i<N;i++)
                        cout<<deque[i]<<" ";
                        for(i=0;i<rear;i++)
                        cout<<deque[i]<<" ";
                        cout<<endl;
                    }
                    else
                    {
                        for(i=front;i<rear;i++)
                        {
                            if(i==N)
                            i==0;
                            cout<<deque[i]<<" ";
                        }
                        cout<<endl;
                    }
        }
    } 
    return 0;
}