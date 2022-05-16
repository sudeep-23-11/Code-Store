//PosixThreads1
#include<stdio.h>
#include<unistd.h>
#include<pthread.h>
int s;
void *thread_function(void *args);
int main()
{
    int i, x;
    scanf("%d", &x);
    pthread_t th;
    int *px=&x;
    pthread_create(&th, NULL, thread_function, (void *)px);
    void *ps;
    pthread_join(th, &ps);
    s=*((int *)ps);
    printf("Inside the Main thread with id %ld\n", pthread_self());
    for(i=6;i<=10;i++)
    {
        printf("%d\n", (x*i));
        s+=(x*i);
        sleep(1);
    }
    printf("%d\n", s);
    return 0;
}
void *thread_function(void *args)
{
    int i, x;
    x=*((int *)args);
    s=0;
    printf("Inside the thread with id %ld\n", pthread_self());
    for(i=1;i<=5;i++)
    {
        printf("%d\n", (x*i));
        s+=(x*i);
        sleep(1);
    }
    int *ps=&s;
    pthread_exit((void *)ps);
}