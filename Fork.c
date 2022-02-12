//Fork
#include<stdio.h>
#include<unistd.h>
int main()
{
    int f;
    f=fork();
    if(f==0)
    {
        printf("Inside the Child process\n");
        printf("fork function value = %d\n", f);
        printf("pid = %d\n\n", getpid());
    }
    else
    {
        printf("Inside the Parent process\n");
        printf("fork function value = %d\n", f);
        printf("pid = %d\n\n", getpid());
    }
    return 0;
}