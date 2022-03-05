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
        printf("uid = %d\n", getuid());
        printf("pid = %d\n", getpid());
        printf("ppid = %d\n\n", getppid());
    }
    else
    {
        printf("Inside the Parent process\n");
        printf("fork function value = %d\n", f);
        printf("uid = %d\n", getuid());
        printf("pid = %d\n", getpid());
        printf("ppid = %d\n\n", getppid());
    }
    return 0;
}