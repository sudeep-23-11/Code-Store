//Tries
#include<iostream>
using namespace std;
struct trie
{
    struct trieNode
    {
        trieNode *child[27];
        int count;
        trieNode() 
        {
            int i;
            for(i=0;i<27;i++)
            child[i]=NULL;
            count=0;
        }
    };
    trieNode *rootNode=new trieNode();
    void insert(string S)
    {
        int i, index;
        trieNode *curNode=rootNode;
        for(i=0;i<S.size();i++)
        {
            index=(int)S.at(i)-96;
            if(curNode->child[index]==NULL)
            curNode->child[index]=new trieNode();
            curNode=curNode->child[index];
            curNode->count++;
        }
    }
    int prefix(string S)
    {
        int i, index;
        trieNode *curNode=rootNode;
        for(i=0;i<S.size();i++)
        {
            index=(int)S.at(i)-96;
            if(curNode->child[index]==NULL)
            return 0;
            curNode=curNode->child[index];
        }
        return (curNode->count);
    }
    void remove(string S)
    {
        removeChlid(rootNode, S, 0);
    }
    bool emptyChlid(trieNode *curNode)
    {
        int i;
        if(curNode==NULL)
        return true;
        for(i=0;i<26;i++)
        {
            if(curNode->child[i]!=NULL)
            return false;
        }
        return true;
    }
    trieNode *removeChlid(trieNode *curNode, string S, int key)
    {
        int index;
        curNode->count--;
        if(key==S.size())
        {
            if(curNode->count==0)
            {
                delete curNode;
                curNode=NULL;
            }
            return curNode;
        }
        index=(int)S.at(key)-96;
        curNode->child[index]=removeChlid(curNode->child[index], S, (key+1));
        if((emptyChlid(curNode)==1)&&(curNode->count==0))
        {
            delete curNode;
            curNode=NULL;
        }
        return curNode;
    }
};
int main()
{
    trie t;
    int N, Q, q;
    string S;
    cin>>N;
    while(N--)
    {
        cin>>S;
        t.insert(S);
    }
    cin>>Q;
    cout<<"Press 1 to insert a particular string"<<endl;
    cout<<"Press 2 to find number of strings which have the given string as their prefix"<<endl;
    cout<<"Press 3 to remove a particular string"<<endl;
    while(Q--)
    {
        cin>>q>>S;
        if(q==1)
        t.insert(S);
        else if(q==2)
        cout<<t.prefix(S)<<endl;
        else if(q==3)
        t.remove(S);
    }
    return 0;
}