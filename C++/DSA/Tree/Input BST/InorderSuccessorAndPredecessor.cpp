//InorderSuccessorAndPredecessor
#include"../T.h"
int succ(struct node *root, int data);
int pred(struct node *root, int data);
int main()
{
    int data;
    root=construct();
    cin>>data;
    cout<<"Successor of "<<data<<" is "<<succ(root, data)<<endl;
    cout<<"Predecessor of "<<data<<" is "<<pred(root, data)<<endl;
    return 0;
}
int succ(struct node *root, int data)
{
    int s;
    s=-1;
    struct node *n;
    n=root;
    while(n!=NULL)
    {
        if(n->data>data)
        {
            s=n->data;
            n=n->left;
        }
        else
        n=n->right;
    }
    return s;
}
int pred(struct node *root, int data)
{
    int p;
    p=-1;
    struct node *n;
    n=root;
    while(n!=NULL)
    {
        if(n->data>=data)
        n=n->left;
        else
        {
            p=n->data;
            n=n->right;
        }
    }
    return p;
}