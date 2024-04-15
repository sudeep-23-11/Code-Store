//Pointer
#include<stdio.h>
void cbv(int x, int y);
void cba(int *p, int *q);
int main()
{
    int a, b;
    a=10;
    b=20;
    cbv(a, b);
    printf("%d %d\n", a, b);
    cba(&a, &b);
    printf("%d %d\n", a, b);
    return 0;
}
void cbv(int x, int y)
{
    int t;
    t=x;
    x=y;
    y=t;
}
void cba(int *p, int *q)
{
    int t;
    t=*p;
    *p=*q;
    *q=t;
}