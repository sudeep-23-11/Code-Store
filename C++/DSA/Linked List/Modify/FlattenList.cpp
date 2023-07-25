//FlattenList
#include<iostream>
using namespace std;
struct node
{
    int data;
    node *next, *bottom;
    node(int val)
    {
        data=val;
        next=NULL;
        bottom=NULL;
    }
};
node *head, *temp;
node *flatten(node *n);
node *merge(node *h1, node *h2);
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
    while(temp)
    {
        cout<<temp->data<<" ";
        temp=temp->bottom;
    }
    cout<<endl;
    return 0;
}
node *flatten(node *n)
{
    if(!(n->next))
    return n;
    return merge(n, flatten(n->next));
}
node *merge(node *h1, node *h2)
{
    head=h1;
    h1->next=NULL;
    while(h1)
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