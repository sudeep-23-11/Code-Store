//FlattenList
#include<iostream>
using namespace std;
struct node
{
    int data;
    struct node *next;
    struct node *bottom;
    node(int val)
    {
        data=val;
        next=NULL;
        bottom=NULL;
    }
};
struct node *head, *temp;
struct node *flatten(struct node *n);
struct node *merge(struct node *h1, struct node *h2);
int main()
{
    head=new node(10);
    head->bottom=new node(40);
    head->bottom->bottom=new node(70);
    head->next=new node(20);
    head->next->bottom=new node(50);
    head->next->bottom->bottom=new node(80);
    head->next->next=new node(30);
    head->next->next->bottom=new node(60);
    head->next->next->bottom->bottom=new node(90);
    head=flatten(head);
    temp=head;
    while(temp!=NULL)
    {
        cout<<temp->data<<" ";
        temp=temp->bottom;
    }
    cout<<endl;
    return 0;
}
struct node *flatten(struct node *n)
{
    if(n->next==NULL)
    return n;
    return merge(n, flatten(n->next));
}
struct node *merge(struct node *h1, struct node *h2)
{
    head=h1;
    h1->next=NULL;
    while(h1!=NULL)
    {
        if(h1->data<=h2->data)
        {
            temp=h1;
            h1=h1->bottom;
        }
        else
        {
            temp->bottom=h2;
            swap(h1, h2);
        }
    }
    temp->bottom=h2;
    return head;
}