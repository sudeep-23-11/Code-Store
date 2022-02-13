//PosixThreads2
#include<stdio.h>
#include<unistd.h>
#include<pthread.h>
pthread_t th[3];
void *thread_function(void *args);
int main()
{
    int i;
    for(i=0;i<3;i++)
    {
        pthread_create(&th[i], NULL, thread_function, NULL);
        sleep(1);
    }
    return 0;
}
void *thread_function(void *args)
{
    if(pthread_equal(pthread_self(), th[0]))
    printf("Inside the thread with id %ld\n", pthread_self());
    else if(pthread_equal(pthread_self(), th[1]))
    {
        printf("Inside the thread with id %ld\n", pthread_self());
        pthread_cancel(pthread_self());
    }
    else
    {
        printf("Inside the thread with id %ld\n", pthread_self());
        pthread_detach(pthread_self());
    }
}