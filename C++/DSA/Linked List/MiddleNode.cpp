//MiddleNode
//FloydTortoiseAndHareAlgorithm
#include"LL.h"
int main()
{
    struct node *f, *s;
    int A[]={10, 20, 30, 40, 50, 60};
    head=convert(A, 6);
    f=head;
    s=head;
    while((f!=NULL)&&(f->next!=NULL))
    {
        s=s->next;
        f=f->next->next;
    }
    cout<<s->data<<endl;
    return 0;
}