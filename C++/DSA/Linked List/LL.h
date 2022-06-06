#include<iostream>
using namespace std;
struct node
{
    int data;
    struct node *next;
};
struct node *head, *_new, *temp;
struct node *convert(int A[], int N)
{
    int i;
    temp=new node;
    head=temp;
    for(i=0;i<N;i++)
    {
        _new=new node;
        _new->data=A[i];
        temp->next=_new;
        temp=_new;
    }
    temp->next=NULL; 
    return head->next;
}
void display(struct node *head)
{
    temp=head;
    while(temp!=NULL)
    {
        cout<<temp->data<<" ";
        temp=temp->next;
    }
    cout<<endl;
}