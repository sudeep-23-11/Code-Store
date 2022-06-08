//LevelOrder
#include"../T.h"
#include<queue>
int main()
{
    struct node *root, *n;
    root=construct();
    queue<struct node *>q;
    q.push(root);
    while(q.empty()==0)
    {
        n=q.front();
        cout<<n->data<<" ";
        q.pop();
        if(n->left!=NULL)
        q.push(n->left);
        if(n->right!=NULL)
        q.push(n->right);
    }
    return 0;
}