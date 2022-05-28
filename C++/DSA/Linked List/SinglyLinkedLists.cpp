//SinglyLinkedLists
#include<iostream>
#include<cstdlib>
using namespace std;
struct Node
{
	int key;
	struct Node *next;
};
void insertNodeBegin(struct Node **headRef, int key)
{
	struct Node *tempNode=(struct Node *)malloc(sizeof(struct Node));
	tempNode->key=key;
	tempNode->next=(*headRef);
	*headRef=tempNode;
}
void insertNodeAfter(struct Node *prevNode, int key)
{
    struct Node *tempNode=(struct Node *)malloc(sizeof(struct Node));
    tempNode->key=key;
    tempNode->next=prevNode->next;
    prevNode->next=tempNode;
}
void insertNodeEnd(struct Node **headRef, int key)
{
    struct Node *tempNode=(struct Node *)malloc(sizeof(struct Node));
    struct Node *lastNode=*headRef;
    tempNode->key=key;
    tempNode->next=NULL;
    if(*headRef==NULL)
    {
       *headRef=tempNode;
        return;
    }
    while(lastNode->next!=NULL)
    lastNode=lastNode->next;
    lastNode->next=tempNode;
    return;
}
void deleteNode(struct Node **headRef, int key)
{
	struct Node *tempNode=*headRef;
	struct Node *prevNode;
    if(tempNode==NULL)
    return;
	if((tempNode!=NULL)&&(tempNode->key==key))
    {
		*headRef=tempNode->next;
		free(tempNode);
		return;
	}
	while((tempNode!=NULL)&&(tempNode->key!=key))
    {
		prevNode=tempNode;
		tempNode=tempNode->next;
	}
	prevNode->next=tempNode->next;
	free(tempNode);
}
void displayList(struct Node *node)
{
	while(node!=NULL)
	{
		cout<<(node->key)<<" ";
		node=node->next;
	}
}
int main()
{
	int x, y;
	struct Node *head=NULL;
	cout<<"Press 1 to insert element at the beginning in the list"<<endl;
    cout<<"Press 2 to insert element at a position in the list"<<endl;
	cout<<"Press 3 to insert element at the end in the list"<<endl;
    cout<<"Press 4 to delete element from the list"<<endl;
    cout<<"Press 0 to display elements of the list"<<endl;
    cout<<"Press -1 to exit"<<endl;
    while(1)
    {
        cin>>x;
        if(x==-1)
        break;
        switch(x)
        {
            case 1: cin>>y;
					insertNodeBegin(&head, y);
                    break;
            case 2: cin>>y;
					insertNodeAfter(head->next, y);
                    break;
			case 3: cin>>y;
					insertNodeEnd(&head, y);
					break;
			case 4: cin>>y;
					deleteNode(&head, y);
					break;
			case 0: displayList(head);
                    cout<<endl;
		}
	}
	return 0;
}