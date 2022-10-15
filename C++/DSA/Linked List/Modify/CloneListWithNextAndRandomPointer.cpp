//CloneListWithNextAndRandomPointer
#include<iostream>
using namespace std;
struct node
{
    int data;
    struct node *next;
    struct node *random;
    node(int val)
    {
        data=val;
        next=NULL;
        random=NULL;
    }
};
struct node *head, *h, *t1, *t2, *t3;
int main()
{
    head=new node(10);
    t1=new node(20);
    t2=new node(30);
    t3=new node(40);
    head->next=t1;
    t1->next=t2;
    t2->next=t3;
    head->random=t3;
    t1->random=head;
    t3->random=t1;
    t1=head;
    while(t1!=NULL)
    {
        t2=t1->next;
        t1->next=new node(t1->data);
        t1->next->next=t2;
        t1=t2;
    }
    t1=head;
    while(t1!=NULL)
    {
        if(t1->random!=NULL)
        t1->next->random=t1->random->next;
        t1=t1->next->next;
    }
    h=head->next;
    t1=head;
    while(t1!=NULL)
    {
        t2=t1->next;
        t3=t2->next;
        if(t3!=NULL)
        t2->next=t3->next;
        t1->next=t3;
        t1=t3;
    }
    t1=h;
    while(t1!=NULL)
    {
        cout<<t1->data<<" ";
        t1=t1->next;
    }
    cout<<endl;
    return 0;
}