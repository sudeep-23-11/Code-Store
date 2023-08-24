//LevelOrderAndZigZag
#include"../BT.h"
#include<queue>
#include<vector>
#include<algorithm>
int main()
{
    bool flag;
    int i, l;
    node *n;
    queue<node *>q;
    vector<node *>v;
    root=construct();
    cout<<"Level Order traversal"<<endl;
    flag=false;
    q.push(root);
    while(!q.empty())
    {
        l=q.size();
        for(i=0;i<l;i++)
        {
            n=q.front();
            cout<<n->data<<" ";
            v.push_back(n);
            q.pop();
            if(n->left)
            q.push(n->left);
            if(n->right)
            q.push(n->right);
        }
        if(flag)
        reverse(v.end()-l, v.end());
        flag=!flag;
    }
    cout<<endl<<"ZigZag traversal"<<endl;
    for(i=0;i<v.size();i++)
    cout<<v[i]->data<<" ";
    cout<<endl;
    return 0;
}