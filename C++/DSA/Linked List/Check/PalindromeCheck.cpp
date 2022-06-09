//PalindromeCheck
#include"../LL.h"
struct node *reverse(struct node *head);
int main()
{
    struct node *f, *s; 
    int A[]={10, 20, 30, 30, 20, 10};
    head=convert(A, 6);
    f=head;
    s=head;
    while((f->next!=NULL)&&(f->next->next!=NULL))
    {
        s=s->next;
        f=f->next->next;
    }
    s->next=reverse(s->next);
    s=s->next;
    f=head;
    while(s!=NULL)
    {
        if(s->data!=f->data)
        break;
        s=s->next;
        f=f->next;
    }
    if(s==NULL)
    cout<<"Palindrome present"<<endl;
    else
    cout<<"Palindrome not present"<<endl;
    return 0;
}
struct node *reverse(struct node *head)
{
    struct node *t1, *t2;
    temp=head;
    t1=head->next;
    while(t2!=NULL)
    {
        t2=t1->next;
        t1->next=temp;
        temp=t1;
        t1=t2;
    }
    head->next=NULL;
    head=temp;
    return head;
}