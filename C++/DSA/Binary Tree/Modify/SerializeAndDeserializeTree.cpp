//SerializeAndDeserializeTree
#include"../BT.h"
string serialize(node *n);
node *deserialize(string &s, int &i);
int main()
{
    int i;
    string s;
    root=construct();
    s=serialize(root);
    cout<<s<<endl;
    i=0;
    display(deserialize(s, i));
    return 0;
}
string serialize(node *n)
{
    if(!n)
    return "$,";
    return to_string(n->data)+','+serialize(n->left)+serialize(n->right);
}
node *deserialize(string &s, int &i)
{
    int j;
    node *root;
    if(s[i]=='$')
    {
        i+=2;
        return NULL;
    }
    j=i;
    while(s[j]!=',')
    j++;
    root=new node(stoi(s.substr(i, j-i)));
    i=j+1;
    root->left=deserialize(s, i);
    root->right=deserialize(s, i);
    return root;
}