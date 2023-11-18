//PassingStructure
#include<stdio.h>
struct book
{
    char name [10];
    float price;
    int pages;
};
void cbse(char *na, float pr, int pa);
void cbv(struct book b);
void cba(struct book *pb);
int main()
{
    struct book b1={"Let Us C", 330.00, 470};
    cbse(b1.name, b1.price, b1.pages);
    cbv(b1);
    cba(&b1);
    return 0;
}
void cbse(char *na, float pr, int pa)
{
    printf("%s %f %d\n", na, pr, pa);
}
void cbv(struct book b)
{
    printf("%s %f %d\n", b.name, b.price, b.pages);
}
void cba(struct book *pb)
{
    printf("%s %f %d\n", pb->name, pb->price, pb->pages);
}
