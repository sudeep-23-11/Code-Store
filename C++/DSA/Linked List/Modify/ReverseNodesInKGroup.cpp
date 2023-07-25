//ReverseNodesInKGroup
#include"../LL.h"
int main()
{
    int K, c, i;
    node *t1, *t2;
    int A[]={10, 20, 30, 40, 50, 60};
    head=convert(A, 6);
    cin>>K;
    c=1;
    temp=head;
    while(temp->next)
    {
        temp=temp->next;
        c++;
    }
    _new=new node(-1);
    _new->next=head;
    temp=_new;
    while(c>=K)
    {
        t1=temp->next;
        t2=t1->next;
        for(i=1;i<K;i++)
        {
            t1->next=t2->next;
            t2->next=temp->next;
            temp->next=t2;
            t2=t1->next;
        }
        temp=t1;
        c-=K;
    }
    display(_new->next);
    return 0;
}