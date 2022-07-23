//IntersectionCheck
#include"../LL.h"
int main()
{
    struct node *h1, *h2, *t1, *t2;
    int A[]={10, 20, 30, 40, 50};
    h1=convert(A, 5);
    h2=new node;
    _new=new node;
    h2->data=60;
    _new->data=70;
    h2->next=_new;
    _new->next=h1->next->next;
    t1=h1;
    t2=h2;
    while(t1!=t2)
    {
        t1=t1->next;
        t2=t2->next;
        if((t1==NULL)&&(t2==NULL))
        break;
        if(t1==NULL)
        t1=h2;
        if(t2==NULL)
        t2=h1;
    }
    if(t1!=NULL)
    cout<<"Intersection present at "<<t1->data<<endl;
    else
    cout<<"Intersection not present"<<endl;
    return 0;
}