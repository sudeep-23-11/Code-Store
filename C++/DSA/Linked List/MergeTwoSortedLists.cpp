//MergeTwoSortedLists
#include"LL.h"
int main()
{
    struct node *h1, *h2;
    int A[]={10, 30, 50, 70, 90};
    h1=convert(A, 5);
    int B[]={20, 40, 60, 80, 100};
    h2=convert(B, 5);
    if(h1->data>h2->data)
    swap(h1, h2);
    head=h1;
    while(h1!=NULL)
    {
        if(h1->data<=h2->data)
        {
            temp=h1;
            h1=h1->next;
        }
        else
        {
            temp->next=h2;
            swap(h1, h2);
        }
    }
    temp->next=h2;
    display(head);
    return 0;
}