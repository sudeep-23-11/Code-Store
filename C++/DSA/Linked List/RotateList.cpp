//RotateList
#include"LL.h"
int main()
{
    int N, c;
    int A[]={10, 20, 30, 40, 50};
    head=convert(A, 5);
    cin>>N;
    c=1;
    temp=head;
    while(temp->next!=NULL)
    {
        temp=temp->next;
        c++;
    }
    temp->next=head;
    N%=c;
    N=c-N;
    c=1;
    temp=head;
    while(c!=N)
    {
        temp=temp->next;
        c++;
    }
    head=temp->next;
    temp->next=NULL;
    display(head);
    return 0;
}