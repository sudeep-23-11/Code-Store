//BasicAlgosInSingleTraversal
#include"../T.h"
#include<vector>
#include<stack>
vector<struct node *>pre, in, post;
stack<pair<struct node *, int>>st;
int main()
{
    root=construct();
    st.push(make_pair(root, 1));
    while(st.empty()==0)
    {
        auto n=st.top();
        st.pop();
        if(n.second==1)
        {
            pre.push_back(n.first);
            st.push(make_pair(n.first, n.second+1));
            if(n.first->left!=NULL)
            st.push(make_pair(n.first->left, 1));
        }
        else if(n.second==2)
        {
            in.push_back(n.first);
            st.push(make_pair(n.first, n.second+1));
            if(n.first->right!=NULL)
            st.push(make_pair(n.first->right, 1));
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
    return 0;
}