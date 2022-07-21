//RemoveDuplicatesFromSortedList
#include"../LL.h"
int main()
{
    struct node *t1, *t2;
    int A[]={10, 10, 20, 30, 30};
    head=convert(A, 5);
    t1=head;
    t2=head->next;
    while(t2!=NULL)
    {
        if(t1->data!=t2->data)
        {
            t1->next=t2;
            t1=t2;
        }
        t2=t2->next;
    }
    t1->next=t2;
    display(head);
    return 0;
}