//SingleTraversal
#include"../BT.h"
#include<vector>
#include<stack>
int main()
{
    root=construct();
    vector<node *>pre, in, post;
    stack<pair<node *, int>>st;
    st.push({root, 1});
    while(!st.empty())
    {
        auto n=st.top();
        st.pop();
        if(n.second==1)
        {
            pre.push_back(n.first);
            st.push({n.first, n.second+1});
            if(n.first->left)
            st.push({n.first->left, 1});
        }
        else if(n.second==2)
        {
            in.push_back(n.first);
            st.push({n.first, n.second+1});
            if(n.first->right)
            st.push({n.first->right, 1});
        }
        else
        post.push_back(n.first);
    }
    cout<<"Preorder traversal"<<endl;
    for(auto i:pre)
    cout<<i->data<<" ";
    cout<<endl<<"Inorder traversal"<<endl;
    for(auto i:in)
    cout<<i->data<<" ";
    cout<<endl<<"Postorder traversal"<<endl;
    for(auto i:post)
    cout<<i->data<<" ";
    cout<<endl;
    return 0;
}