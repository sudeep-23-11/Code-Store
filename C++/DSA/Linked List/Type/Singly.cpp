//Singly
#include<iostream>
using namespace std;
struct node
{
    int data;
    struct node *next;
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
    while(temp!=NULL)
    {
        cout<<temp->data<<" ";
        temp=temp->next;
    }
    cout<<endl;
}
void insert(int data)
{
    _new=new node;
    _new->data=data;
    _new->next=NULL;
    if(head==NULL)
    head=_new;
    else
    {
        temp=head;
        while(temp->next!=NULL)
        temp=temp->next;
        temp->next=_new;
    }
}
void insertat(int pos, int data)
{
    _new=new node;
    _new->data=data;
    if(pos==1)
    {
        _new->next=head;
        head=_new;
    }
    else
    {
        int c=0;
        temp=head;
        while(temp!=NULL)
        {
            c++;
            if((c+1)==pos)
            {
                temp2=temp->next;
                temp->next=_new;
                _new->next=temp2;
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
    }
    else
    {
        temp=head;
        while(temp!=NULL)
        {
            if(temp->next->data==data)
            {
                temp2=temp->next;
                temp->next=temp->next->next;
                delete(temp2);
                break;
            }
            temp=temp->next;
        }
    }
}