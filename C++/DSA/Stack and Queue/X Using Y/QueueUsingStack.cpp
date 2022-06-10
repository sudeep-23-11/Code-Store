//QueueUsingStack
#include<iostream>
#include<stack>
using namespace std;
int main()
{
    int ch, data;
    cout<<"0 for display"<<endl;
    cout<<"1 for insert"<<endl;
    cout<<"2 for delete"<<endl;
    stack<int>st, st2, t;
    while(1)
    {
        cout<<"Choice"<<endl;
        cin>>ch;
        if(ch==0)
        {
            t=st;
            while(t.empty()==0)
            {
                cout<<t.top()<<" ";
                t.pop();
            }
            cout<<endl;
        }
        else if(ch==1)
        {
            cin>>data;
            while(st.empty()==0)
            {
                st2.push(st.top());
                st.pop();
            }
            st2.push(data);
            while(st2.empty()==0)
            {
                st.push(st2.top());
                st2.pop();
            }
        }
        else if(ch==2)
        st.pop();
        else
        break;
    }
    return 0;
}