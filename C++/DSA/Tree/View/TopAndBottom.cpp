//TopAndBottom
#include"../T.h"
#include<queue>
#include<map>
queue<pair<struct node *, int>>q;
map<int, struct node *>top, bottom;
int main()
{
    int v;
    struct node *root, *n;
    root=construct();
    q.push(make_pair(root, 0));
    while(q.empty()==0)
    {
        n=q.front().first;
        v=q.front().second;
        if(top.count(v)==0)
        top.insert(make_pair(v, n));
        bottom[v]=n;
        q.pop();
        if(n->left!=NULL)
        q.push(make_pair(n->left, v-1));
        if(n->right!=NULL)
        q.push(make_pair(n->right, v+1));
    }
    cout<<"Top View"<<endl;
    for(auto i:top)
    cout<<i.second->data<<" ";
    cout<<endl<<"Bottom View"<<endl;
    for(auto i:bottom)
    cout<<i.second->data<<" ";
    return 0;
}