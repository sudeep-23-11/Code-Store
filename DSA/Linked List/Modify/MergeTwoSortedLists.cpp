//MergeTwoSortedLists
#include"../LL.h"
int main()
{
    node *t1, *t2;
    int A[]={10, 30, 50, 70, 90};
    t1=convert(A, 5);
    int B[]={20, 40, 60, 80, 100};
    t2=convert(B, 5);
    if(t1->data>t2->data)
    swap(t1, t2);
    head=t1;
    while(t1)
    {
        if(t1->data<=t2->data)
        {
            temp=t1;
            t1=t1->next;
        }
        else
        {
            temp->next=t2;
            swap(t1, t2);
        }
    }
    temp->next=t2;
    display(head);
    return 0;
}