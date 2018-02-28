#include <stdlib.h>
#include <stdio.h>
#include <pthread.h>

void *hello_world();
void *goodbye();

int main()
{
pthread_t p1;
pthread_t p2;
pthread_create(&p1, 0, hello, NULL);
pthread_create(&p2, 0, bye, NULL);
pthread_join(p1, 0);
pthread_join(p2, 0);
return 0;
}

void *hello()
{
printf("Hello World\n");
return NULL;
}

void *bye()
{
printf("Goodbye\n");
return NULL;
}