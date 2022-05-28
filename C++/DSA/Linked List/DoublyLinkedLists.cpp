//DoublyLinkedLists
#include<iostream>
#include<cstdlib>
using namespace std;
struct Node
{
    int key;
    struct Node *next;
    struct Node *prev;
};
void insertNodeBegin(struct Node **start, int key)
{
    struct Node *lastNode=(*start)->prev;
    struct Node *tempNode=(struct Node *)malloc(sizeof(struct Node));
    tempNode->key=key;
    tempNode->next=*start;
    tempNode->prev=lastNode;
    lastNode->next=tempNode;
    (*start)->prev=tempNode;
    *start=tempNode;
}
void insertNodeAfter(struct Node **start, int key1, int key2)
{
    struct Node *tempNode1=(struct Node *)malloc(sizeof(struct Node));
    tempNode1->key=key1;
    struct Node *tempNode2=*start;
    while(tempNode2->key!=key2)
    tempNode2=tempNode2->next;
    struct Node *next=tempNode2->next;
    tempNode2->next=tempNode1;
    tempNode1->prev=tempNode2;
    tempNode1->next=next;
    next->prev=tempNode1;
}
void insertNodeEnd(struct Node **start, int key)
{
    if(*start==NULL)
    {
        struct Node* tempNode=(struct Node *)malloc(sizeof(struct Node));
        tempNode->key=key;
        tempNode->next=tempNode->prev=tempNode;
        *start=tempNode;
        return;
    }
    struct Node *lastNode=(*start)->prev;
    struct Node *tempNode=(struct Node *)malloc(sizeof(struct Node));
    tempNode->key=key;
    tempNode->next=*start;
    (*start)->prev=tempNode;
    tempNode->prev=lastNode;
    lastNode->next=tempNode;
}
void deleteNode(struct Node **start, int key)
{
    if(*start==NULL)
    return;
    struct Node *currNode=*start;
    struct Node *prevNode=NULL;
    while(currNode->key!=key)
    {
        prevNode=currNode;
        currNode=currNode->next;
    }
    if((currNode->next==*start)&&(prevNode==NULL))
    {
        (*start)=NULL;
        free(currNode);
        return;
    }
    if(currNode==*start)
    {
        prevNode=(*start)->prev;
        *start=(*start)->next;
        prevNode->next=*start;
        (*start)->prev=prevNode;
        free(currNode);
    }
    else if(currNode->next==*start)
    {
        prevNode->next=*start;
        (*start)->prev=prevNode;
        free(currNode);
    }
    else
    {
        struct Node *tempNode=currNode->next;
        prevNode->next=tempNode;
        tempNode->prev=prevNode;
        free(currNode);
    }
}
void displayListForward(struct Node *node)
{
    struct Node *tempNode=node;
    while(tempNode->next!=node)
    {
        cout<<(tempNode->key)<<" ";
        tempNode=tempNode->next;
    }
    cout<<(tempNode->key)<<" ";
}
void displayListReverse(struct Node *node)
{
    struct Node *lastNode=node->prev;
    struct Node *tempNode=lastNode;
    while(tempNode->prev!=lastNode)
    {
        cout<<(tempNode->key)<<" ";
        tempNode=tempNode->prev;
    }
    cout<<(tempNode->key)<<" ";
}
int main()
{
    int x, y;
	struct Node *start=NULL;
	cout<<"Press 1 to insert element at the beginning in the list"<<endl;
    cout<<"Press 2 to insert element at a position in the list"<<endl;
	cout<<"Press 3 to insert element at the end in the list"<<endl;
    cout<<"Press 4 to delete element from the list"<<endl;
    cout<<"Press 0 to display elements of the list in forward and reverse traversals"<<endl;
    cout<<"Press -1 to exit"<<endl;
    while(1)
    {
        cin>>x;
        if(x==-1)
        break;
        switch(x)
        {
            case 1: cin>>y;
					insertNodeBegin(&start, y);
                    break;
            case 2: cin>>y;
					insertNodeAfter(&start, y, 5);
                    break;
			case 3: cin>>y;
					insertNodeEnd(&start, y);
					break;
			case 4: cin>>y;
					deleteNode(&start, y);
					break;
			case 0: cout<<"Forward traversal"<<endl;
                    displayListForward(start);
                    cout<<endl;
                    cout<<"Reverse traversal"<<endl;
                    displayListReverse(start);
                    cout<<endl;
		}
	}
	return 0;
}