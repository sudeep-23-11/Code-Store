//PrefixString
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
            index=S[i]-'a'+1;
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
            index=S[i]-'a'+1;
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
        index=S[key]-'a'+1;
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
    int N, ch;
    string S;
    cin>>N;
    while(N--)
    {
        cin>>S;
        t.insert(S);
    }
    cout<<"0 for number of strings which have the given string as their prefix"<<endl;
    cout<<"1 for insert"<<endl;
    cout<<"2 for remove"<<endl;
    while(1)
    {
        cout<<"Choice"<<endl;
        cin>>ch>>S;
        if(ch==0)
        cout<<t.prefix(S)<<endl;
        else if(ch==1)
        t.insert(S);
        else if(ch==2)
        t.remove(S);
        else
        break;
    }
    return 0;
}