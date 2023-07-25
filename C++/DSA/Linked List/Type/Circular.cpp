//Circular
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
node *head, *_new, *temp, *temp2;
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
    _new=new node(data);
    if(!head)
    head=_new;
    else
    {
        temp=head;
        while(temp->next!=head)
        temp=temp->next;
        temp->next=_new;
    }
    _new->next=head;
}
void insertat(int pos, int data)
{
    int c;
    _new=new node(data);
    if(pos==1)
    {
        temp2=head;
        while(temp2->next!=head)
        temp2=temp2->next;
        _new->next=head;
        head=_new;
        temp2->next=head;
    }
    else
    {
        c=0;
        temp=head;
        while(temp->next!=head)
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
        temp2=head;
        while(temp2->next!=head)
        temp2=temp2->next;
        temp=head->next;
        delete(head);
        head=temp;
        temp2->next=head;
    }
    else
    {
        temp=head;
        while(temp->next!=head)
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