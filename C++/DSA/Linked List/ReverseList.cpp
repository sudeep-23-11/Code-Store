//ReverseList
#include"LL.h"
int main()
{
    struct node *t, *t2, *t3;
    int A[]={10, 20, 30, 40, 50};
    head=convert(A, 5);
    t=head;
    t2=head->next;
    while(t3!=NULL)
    {
        t3=t2->next;
        t2->next=t;
        t=t2;
        t2=t3;
    }
    head->next=NULL;
    head=t;
    display(head);
    return 0;
}