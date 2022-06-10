//ZigZag
#include"../T.h"
#include<queue>
#include<vector>
int main()
{
    bool flag;
    int i, l;
    struct node *root, *n;
    root=construct();
    flag=false;
    queue<struct node *>q;
    vector<struct node *>v;
    q.push(root);
    while(q.empty()==0)
    {
        l=q.size();
        for(i=0;i<l;i++)
        {
            n=q.front();
            v.push_back(n);
            q.pop();
            if(n->left!=NULL)
            q.push(n->left);
            if(n->right!=NULL)
            q.push(n->right);
        }
        if(flag==false)
        {
            for(i=0;i<v.size();i++)
            cout<<v.at(i)->data<<" ";
        }
        else
        {
            for(i=(v.size()-1);i>=0;i--)
            cout<<v.at(i)->data<<" ";
        }
        flag=!flag;
        v.clear();
    }
    return 0;
}