//CycleDetection
#include"LL.h"
int main()
{
    struct node *f, *s;
    int A[]={10, 20, 30, 40, 50};
    head=convert(A, 5);
    head->next->next->next->next->next=head->next;
    f=head;
    s=head;
    while((f!=NULL)&&(f->next!=NULL))
    {
        s=s->next;
        f=f->next->next;
        if(f==s)
        break;
    }
    if(f==s)
    {
        f=head;
        while(f!=s)
        {
            s=s->next;
            f=f->next;
        }
        cout<<"Cycle present at "<<s->data<<endl;
    }
    else
    cout<<"Cycle not present"<<endl;
    return 0;
}