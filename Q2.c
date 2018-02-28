#include <stdlib.h>
#include <stdio.h>
#include <pthread.h>
#include <math.h>

void *curve(void *arg);

int main()
{
double grades[5] = {0};
for (int i = 0; i < 5 ; i++)
{
int l = i + 1;
printf("Please enter the student %d's grade: ", l);
scanf("%lf", &grades[i]);
}
pthread_t s1;
pthread_t s2;
pthread_t s3;pthread_t s4;
pthread_t s5;
pthread_create(&s1, 0, curve, &grades[0]);
pthread_create(&s2, 0, curve, &grades[1]);
pthread_create(&s3, 0, curve, &grades[2]);
pthread_create(&s4, 0, curve, &grades[3]);
pthread_create(&s5, 0, curve, &grades[4]);
pthread_join(s1, 0);
pthread_join(s2, 0);
pthread_join(s3, 0);
pthread_join(s4, 0);
pthread_join(s5, 0);return 0;
}
void *curve(void *arg)
{
double *origianl_grade = (double*) arg;
double curve = *origianl_grade * 1.50;
printf("%lf\n", curve);
return NULL;
}