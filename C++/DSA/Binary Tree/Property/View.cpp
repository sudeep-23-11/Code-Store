//View
#include"../BT.h"
#include<queue>
#include<map>
#include<vector>
int main()
{
    int l, v;
    queue<pair<node *, int>>q;
    map<int, node *>top, bottom;
    vector<node *>_v, _left, _right;
    node *n;
    root=construct();
    q.push({root, 0});
    while(!q.empty())
    {
        l=q.size();
        while(l--)
        {
            n=q.front().first;
            v=q.front().second;
            _v.push_back(n);
            if(!top.count(v))
            top.insert({v, n});
            bottom[v]=n;
            q.pop();
            if(n->left)
            q.push({n->left, v-1});
            if(n->right)
            q.push({n->right, v+1});
        }
        _left.push_back(_v[0]);
        _right.push_back(_v[_v.size()-1]);
        _v.clear();
    }
    cout<<"Top View"<<endl;
    for(auto i:top)
    cout<<i.second->data<<" ";
    cout<<endl<<"Bottom View"<<endl;
    for(auto i:bottom)
    cout<<i.second->data<<" ";
    cout<<endl<<"Left View"<<endl;
    for(auto i:_left)
    cout<<i->data<<" ";
    cout<<endl<<"Right View"<<endl;
    for(auto i:_right)
    cout<<i->data<<" ";
    return 0;
}