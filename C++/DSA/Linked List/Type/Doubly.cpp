//Doubly
#include<iostream>
using namespace std;
struct node
{
    int data;
    node *next, *prev;
    node(int val)
    {
        data=val;
        next=NULL;
        prev=NULL;
    }
};
node *head, *_new, *temp;
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
        if(!ch)
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
    while(temp)
    {
        cout<<temp->data<<" ";
        temp=temp->next;
    }
    cout<<endl;
}
void insert(int data)
{
    _new=new node(data);
    if(!head)
    {
        head=_new;
        _new->prev=NULL;
    }
    else
    {
        temp=head;
        while(temp->next)
        temp=temp->next;
        temp->next=_new;
        _new->prev=temp;
    }
}
void insertat(int pos, int data)
{
    int c;
    _new=new node(data);
    if(pos==1)
    {
        _new->next=head;
        head->prev=_new;
        head=_new;
        head->prev=NULL;
    }
    else
    {
        c=0;
        temp=head;
        while(temp)
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
    }
}
void _delete(int data)
{
    if(head->data==data)
    {
        temp=head->next;
        delete(head);
        head=temp;
        head->prev=NULL;
    }
    else
    {
        temp=head;
        while(temp)
        {
            if(temp->data==data)
            {
                temp->prev->next=temp->next;
                if(temp->next)
                temp->next->prev=temp->prev;
                delete(temp);
                break;
            }
            temp=temp->next;
        }
    }
}