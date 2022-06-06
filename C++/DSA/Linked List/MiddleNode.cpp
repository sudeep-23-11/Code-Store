//MiddleNode
#include"LL.h"
void middle(struct node *head);
int main()
{
    int A[]={10, 20, 30, 40, 50};
    head=convert(A, 5);
    middle(head);
    int B[]={10, 20, 30, 40, 50, 60};
    head=convert(B, 6);
    middle(head);
    return 0;
}
void middle(struct node *head)
{
    struct node *f, *s;
    f=head;
    s=head;
    while((f!=NULL)&&(f->next!=NULL))
    {
        s=s->next;
        f=f->next->next;
    }
    cout<<s->data<<endl;
}