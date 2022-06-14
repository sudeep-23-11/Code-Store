//Iterator
#include"../T.h"
#include<stack>
stack<struct node *>st;
void _push(struct node *n);
int next();
bool hasnext();
int main()
{
    root=construct();
    _push(root);
    int ch;
    cout<<"0 for next"<<endl;
    cout<<"1 for hasnext"<<endl;
    while(1)
    {
        cout<<"Choice"<<endl;
        cin>>ch;
        if(ch==0)
        cout<<next()<<endl;
        else if(ch==1)
        cout<<boolalpha<<hasnext()<<endl;
        else
        break;
    }
    return 0;
}
void _push(struct node *n)
{
    while(n!=NULL)
    {
        st.push(n);
        n=n->left;
    }
}
int next()
{
    struct node *n;
    n=st.top();
    st.pop();
    _push(n->right);
    return n->data;
}
bool hasnext()
{
    if(st.empty()==0)
    return true;
    return false;
}