//SerializeAndDeserializeTree
#include"../T.h"
int i;
string serialize(struct node *n);
struct node *deserialize(string s);
int main()
{
    string s;
    root=construct();
    s=serialize(root);
    cout<<s<<endl;
    i=0;
    display(deserialize(s));
    return 0;
}
string serialize(struct node *n)
{
    if(n==NULL)
    return "$,";
    return to_string(n->data)+','+serialize(n->left)+serialize(n->right);
}
struct node *deserialize(string s)
{
    int j;
    if(s.at(i)=='$')
    {
        i+=2;
        return NULL;
    }
    j=i;
    while(s.at(j)!=',')
    j++;
    struct node *root;
    root=new node(stoi(s.substr(i, j-i)));
    i=j+1;
    root->left=deserialize(s);
    root->right=deserialize(s);
    return root;
}