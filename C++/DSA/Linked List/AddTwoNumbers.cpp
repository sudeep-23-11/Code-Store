//AddTwoNumbers
#include"LL.h"
int main()
{
    int s, c;
    struct node *h1, *h2;
    int A[]={1, 2, 3, 4};
    h1=convert(A, 4);
    int B[]={5, 6, 7, 8, 9};
    h2=convert(B, 5);
    c=0;
    temp=new node;
    head=temp;
    while((h1!=NULL)||(h2!=NULL)||(c!=0))
    {
        s=c;
        if(h1!=NULL)
        {
            s+=h1->data;
            h1=h1->next;
        }
        if(h2!=NULL)
        {
            s+=h2->data;
            h2=h2->next;
        }
        _new=new node;
        _new->data=s%10;
        c=s/10;
        temp->next=_new;
        temp=_new;
    }
    temp->next=NULL;
    display(head->next);
    return 0;
}