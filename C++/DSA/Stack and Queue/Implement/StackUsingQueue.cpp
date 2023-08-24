//StackUsingQueue
#include<iostream>
#include<queue>
using namespace std;
int main()
{
    int ch, data;
    cout<<"0 for display"<<endl;
    cout<<"1 for push"<<endl;
    cout<<"2 for pop"<<endl;
    queue<int>q, q2, t;
    while(1)
    {
        cout<<"Choice"<<endl;
        cin>>ch;
        if(!ch)
        {
            t=q;
            while(!t.empty())
            {
                cout<<t.front()<<" ";
                t.pop();
            }
            cout<<endl;
        }
        else if(ch==1)
        {
            cin>>data;
            q2.push(data);
            while(!q.empty())
            {
                q2.push(q.front());
                q.pop();
            }
            q.swap(q2);
        }
        else if(ch==2)
        q.pop();
        else
        break;
    }
    return 0;
}