//CircularDoublyLinkedLists
#include<iostream>
using namespace std;
struct node
{
    int data;
    struct node *next;
    struct node *prev;
};
struct node *head, *_new, *temp, *temp2;
void display();
void insert(int data);
void insertat(int pos, int data);
void _delete(int data);
int main()
{
    int ch, pos, data;
    cout<<"0 for display"<<endl;
    cout<<"1 for insert"<<endl;
    cout<<"2 for insert at"<<endl;
    cout<<"3 for delete"<<endl;
    head=NULL;
    while(1)
    {
        cout<<"Choice"<<endl;
        cin>>ch;
        if(ch==0)
        display();
        else if(ch==1)
        {
            cin>>data;
            insert(data);
        }
        else if(ch==2)
        {
            cin>>pos>>data;
            insertat(pos, data);
        }
        else if(ch==3)
        {
            cin>>data;
            _delete(data);
        }
        else
        break;
    }
    return 0;
}
void display()
{
    temp=head;
    while(temp->next!=head)
    {
        cout<<temp->data<<" ";
        temp=temp->next;
    }
    cout<<temp->data<<" ";
    cout<<endl;
}
void insert(int data)
{
    _new=new node;
    _new->data=data;
    if(head==NULL)
    head=_new;
    else
    {
        temp=head;
        while(temp->next!=head)
        temp=temp->next;
        temp->next=_new;
        _new->prev=temp;
    }
    _new->next=head;
    head->prev=_new;
}
void insertat(int pos, int data)
{
    _new=new node;
    _new->data=data;
    if(pos==1)
    {
        temp2=head->prev;
        _new->next=head;
        head->prev=_new;
        head=_new;
        temp2->next=head;
        head->prev=temp2;
    }
    else
    {
        int c=0;
        temp=head;
        while(temp->next!=head)
        {
            c++;
            if(c==pos)
            {
                temp->prev->next=_new;
                _new->prev=temp->prev;
                _new->next=temp;
                temp->prev=_new;
                break;
            }
            temp=temp->next;
        }
        c++;
        if((temp->next==head)&&(c==pos))
        {
            temp->prev->next=_new;
            _new->prev=temp->prev;
            _new->next=temp;
            temp->prev=_new;
        }
    }
}
void _delete(int data)
{
    if(head->data==data)
    {
        temp2=head->prev;
        temp=head->next;
        delete(head);
        head=temp;
        temp2->next=head;
        head->prev=temp2;
    }
    else
    {
        temp=head;
        while(temp->next!=head)
        {
            if(temp->data==data)
            {
                temp->prev->next=temp->next;
                temp->next->prev=temp->prev;
                delete(temp);
                break;
            }
            temp=temp->next;
        }
        if((temp->next==head)&&(temp->data==data))
        {
            temp->prev->next=temp->next;
            temp->next->prev=temp->prev;
            delete(temp);
        }
    }
}