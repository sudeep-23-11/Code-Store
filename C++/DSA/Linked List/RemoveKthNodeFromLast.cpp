//RemoveKthNodeFromLast
#include"LL.h"
int main()
{
    int K, c;
    struct node *f, *s;
    int A[]={10, 20, 30, 40, 50};
    head=convert(A, 5);
    cin>>K;
    c=0;
    f=head;
    while(c!=K)
    {
        f=f->next;
        c++;
    }
    if(f==NULL)
    head=head->next;
    else
    {
        s=head;
        while(f->next!=NULL)
        {
            s=s->next;
            f=f->next;
        }
        s->next=s->next->next;
    }
    display(head);
    return 0;
}