//MaximumStack
#include<iostream>
#include<stack>
using namespace std;
int main()
{
    int ch, data, m;
    cout<<"0 for top"<<endl;
    cout<<"1 for push"<<endl;
    cout<<"2 for pop"<<endl;
    cout<<"3 for max"<<endl;
    stack<int>st;
    while(1)
    {
        cout<<"Choice"<<endl;
        cin>>ch;
        if(ch==0)
        {
            if(st.top()>m)
            cout<<m<<endl;
            else
            cout<<st.top()<<endl;
        }
        else if(ch==1)
        {
            cin>>data;
            if(st.empty()==1)
            {
                st.push(data);
                m=data;
            }
            else if(data>m)
            {
                st.push(data*2-m);
                m=data;
            }
            else
            st.push(data);
        }
        else if(ch==2)
        {
            if(st.top()>m)
            m=m*2-st.top();
            st.pop();
        }
        else if(ch==3)
        cout<<m<<endl;
        else
        break;
    }
    return 0;
}