//ReverseList
#include"LL.h"
int main()
{
    struct node *t1, *t2;
    int A[]={10, 20, 30, 40, 50};
    head=convert(A, 5);
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
    display(head);
    return 0;
}