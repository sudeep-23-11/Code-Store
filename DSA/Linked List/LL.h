#include<iostream>
using namespace std;
struct node
{
    int data;
    node *next;
    node(int val)
    {
        data=val;
        next=NULL;
    }
};
node *head, *_new, *temp;
node *convert(int A[], int N)
{
    int i;
    head=new node(A[0]);
    temp=head;
    for(i=1;i<N;i++)
    {
        _new=new node(A[i]);
        temp->next=_new;
        temp=_new;
    }
    temp->next=NULL; 
    return head;
}
void display(node *head)
{
    temp=head;
    while(temp)
    {
        cout<<temp->data<<" ";
        temp=temp->next;
    }
    cout<<endl;
}