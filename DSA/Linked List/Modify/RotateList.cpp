//RotateList
#include"../LL.h"
int main()
{
    int K, c;
    int A[]={10, 20, 30, 40, 50};
    head=convert(A, 5);
    cin>>K;
    c=1;
    temp=head;
    while(temp->next)
    {
        temp=temp->next;
        c++;
    }
    temp->next=head;
    K%=c;
    K=c-K;
    c=1;
    temp=head;
    while(c!=K)
    {
        temp=temp->next;
        c++;
    }
    head=temp->next;
    temp->next=NULL;
    display(head);
    return 0;
}