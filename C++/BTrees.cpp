//BTrees
#include<iostream>
using namespace std;
class btreeNode
{
    private:
		int t, n;
        int *keys;
        bool leaf;
        btreeNode **C;

    public:
        btreeNode(int _t, bool _leaf);
        int findKey(int key);
        void splitChild(int key, btreeNode *temp1);
        void insertNonFull(int key);
        int getPred(int index);
        int getSucc(int index);
        void merge(int index);
		void removeFromLeaf(int index);
        void removeFromNonLeaf(int index);
        void borrowFromPrev(int index);
        void borrowFromNext(int index);
        void fill(int index);
        void remove(int key);
        void traverse();

	friend class btree;
};
class btree
{
	private:
		int t;
		btreeNode *root;

	public:
		btree(int _t);
		void insert(int key);
		void remove(int key);
		void traverse();
};
btreeNode::btreeNode(int _t, bool _leaf)
{
	t=_t;
	leaf=_leaf;
	keys=new int[2*t-1];
	C=new btreeNode *[2*t];
	n=0;
}
int btreeNode::findKey(int key)
{
	int index;
	index=0;
	while((index<n)&&(keys[index]<key))
	index++;
	return index;
}
void btreeNode::splitChild(int key, btreeNode *temp1)
{
	int i;
	btreeNode *temp2=new btreeNode(temp1->t, temp1->leaf);
	temp2->n=t-1;
	for(i=0;i<t-1;i++)
	temp2->keys[i]=temp1->keys[i+t];
	if(temp1->leaf==false)
	{
		for(i=0;i<t;i++)
		temp2->C[i]=temp1->C[i+t];
	}
	temp1->n=t-1;
	for(i=n;i>=key+1;i--)
	C[i+1]=C[i];
	C[key+1]=temp2;
	for(i=n-1;i>=key;i--)
	keys[i+1]=keys[i];
	keys[key]=temp1->keys[t-1];
	n=n+1;
}
void btreeNode::insertNonFull(int key)
{
	int i;
	i=n-1;
	if(leaf==true)
	{
		while((i>=0)&&(keys[i]>key))
		{
			keys[i+1]=keys[i];
			i--;
		}
		keys[i+1]=key;
		n=n+1;
	}
	else
	{
		while((i>=0)&&(keys[i]>key))
		i--;
		if(C[i+1]->n==2*t-1)
		{
			splitChild(i+1, C[i+1]);
			if(keys[i+1]<key)
			i++;
		}
		C[i+1]->insertNonFull(key);
	}
}
int btreeNode::getPred(int index)
{
	btreeNode *temp=C[index];
	while(!temp->leaf)
	temp=temp->C[temp->n];
	return temp->keys[temp->n-1];
}
int btreeNode::getSucc(int index)
{
	btreeNode *temp=C[index+1];
	while(!temp->leaf)
	temp=temp->C[0];
	return temp->keys[0];
}
void btreeNode::merge(int index)
{
	int i;
	btreeNode *child=C[index];
	btreeNode *sibling=C[index+1];
	child->keys[t-1]=keys[index];
	for(i=0;i<sibling->n;i++)
	child->keys[i+t]=sibling->keys[i];
	if(!child->leaf)
	{
		for(i=0;i<=sibling->n;i++)
		child->C[i+t]=sibling->C[i];
	}
	for(i=index+1;i<n;i++)
	keys[i-1]=keys[i];
	for(i=index+2;i<=n;i++)
	C[i-1]=C[i];
	child->n+=sibling->n+1;
	n--;
	delete(sibling);
	return;
}
void btreeNode::removeFromLeaf(int index)
{
	int i;
	for(i=index+1;i<n;i++)
	keys[i-1]=keys[i];
	n--;
	return;
}
void btreeNode::removeFromNonLeaf(int index)
{
	int key=keys[index];
	if(C[index]->n>=t)
	{
		int pred=getPred(index);
		keys[index]=pred;
		C[index]->remove(pred);
	}
	else if(C[index+1]->n>=t)
	{
		int succ=getSucc(index);
		keys[index]=succ;
		C[index+1]->remove(succ);
	}
	else
	{
		merge(index);
		C[index]->remove(key);
	}
	return;
}
void btreeNode::borrowFromPrev(int index)
{
	int i;
	btreeNode *child=C[index];
	btreeNode *sibling=C[index-1];
	for(i=child->n-1;i>=0;i--)
	child->keys[i+1]=child->keys[i];
	if(!child->leaf)
	{
		for(i=child->n;i>=0;i--)
		child->C[i+1]=child->C[i];
	}
	child->keys[0]=keys[index-1];
	if(!child->leaf)
	child->C[0]=sibling->C[sibling->n];
	keys[index-1]=sibling->keys[sibling->n-1];
	child->n+=1;
	sibling->n-=1;
	return;
}
void btreeNode::borrowFromNext(int index)
{
	int i;
	btreeNode *child=C[index];
	btreeNode *sibling=C[index+1];
	child->keys[(child->n)]=keys[index];
	if(!(child->leaf))
	child->C[(child->n)+1]=sibling->C[0];
	keys[index]=sibling->keys[0];
	for(i=1;i<sibling->n;i++)
	sibling->keys[i-1]=sibling->keys[i];
	if(!sibling->leaf)
	{
		for(i=1;i<=sibling->n;i++)
		sibling->C[i-1]=sibling->C[i];
	}
	child->n+=1;
	sibling->n-=1;
	return;
}
void btreeNode::fill(int index)
{
	if((index!=0)&&(C[index-1]->n>=t))
	borrowFromPrev(index);
	else if((index!=n)&&(C[index+1]->n>=t))
	borrowFromNext(index);
	else
	{
		if(index!=n)
		merge(index);
		else
		merge(index-1);
	}
	return;
}
void btreeNode::remove(int key)
{
	int index;
	bool flag;
	index=findKey(key);
	if((index<n)&&(keys[index]==key))
	{
		if(leaf)
		removeFromLeaf(index);
		else
		removeFromNonLeaf(index);
	}
	else
	{
		flag=((index==n)? true : false );
		if(C[index]->n<t)
		fill(index);
		if((flag)&&(index>n))
		C[index-1]->remove(key);
		else
		C[index]->remove(key);
	}
	return;
}
void btreeNode::traverse()
{
	int i;
	for(i=0;i<n;i++)
	{
		if(leaf==false)
		C[i]->traverse();
		cout<<" "<<keys[i];
	}
	if(leaf==false)
	C[i]->traverse();
}
btree::btree(int _t)
{
	root=NULL;
	t=_t;
}
void btree::insert(int key)
{
	int i;
	if(root==NULL)
	{
		root=new btreeNode(t, true);
		root->keys[0]=key;
		root->n=1;
	}
	else
	{
		if(root->n==2*t-1)
		{
			btreeNode *s=new btreeNode(t, false);
			s->C[0]=root;
			s->splitChild(0, root);
			i=0;
			if(s->keys[0]<key)
			i++;
			s->C[i]->insertNonFull(key);
			root=s;
		}
		else
		root->insertNonFull(key);
	}
}
void btree::remove(int key)
{
	root->remove(key);
	if(root->n==0)
	{
		btreeNode *temp=root;
		if(root->leaf)
		root=NULL;
		else
		root=root->C[0];
		delete temp;
	}
	return;
}
void btree::traverse()
{
	if(root!=NULL)
	root->traverse();
}
int main()
{
	int x, y;
	btree bt(3);
	printf("Press 1 to insert element to the B Tree\n");
    printf("Press 2 to delete element from the B Tree\n");
	printf("Press 0 for traversal of the B Tree\n");
	printf("Press -1 to exit\n");
	while(1)
    {   
        scanf("%d", &x);
        if(x==-1)
        break;
        switch(x)
        {
            case 1: scanf("%d", &y);
                    bt.insert(y);
                    break;
            case 2: scanf("%d", &y);
                    bt.remove(y);
                    break;
            case 0: bt.traverse();
                    printf("\n");
        }
    }
	return 0;
}