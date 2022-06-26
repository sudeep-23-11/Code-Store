//KthNodeFromLast
#include"LL.h"
int main()
{
    int K, c;
    struct node *f, *s;
    int A[]={10, 20, 30, 40, 50};
    head=convert(A, 5);
    cin>>K;
    c=1;
    f=head;
    s=head;
    while(c!=K)
    {
        f=f->next;
        c++;
    }
    while(f->next!=NULL)
    {
        s=s->next;
        f=f->next;
    }
    cout<<s->data<<endl;
    return 0;
}