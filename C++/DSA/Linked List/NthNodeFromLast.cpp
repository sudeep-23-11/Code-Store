//NthNodeFromLast
#include"LL.h"
int main()
{
    int N, c;
    struct node *f, *s;
    int A[]={10, 20, 30, 40, 50};
    head=convert(A, 5);
    cin>>N;
    c=1;
    f=head;
    s=head;
    while(c!=N)
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