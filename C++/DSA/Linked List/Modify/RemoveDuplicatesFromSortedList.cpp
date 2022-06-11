//RemoveDuplicatesFromSortedList
#include"../LL.h"
int main()
{
    struct node *head, *t1;
    int A[]={10, 10, 20, 30, 30};
    head=convert(A, 5);
    temp=head;
    while(temp!=NULL)
    {
        t1=temp->next;
        while((t1!=NULL)&&(t1->data==temp->data))
        t1=t1->next;
        temp->next=t1;
        temp=t1;
    }
    display(head);
    return 0;
}