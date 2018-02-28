#include <stdio.h>
#include <pthread.h>
#define MAX_LEN 256
#define NUM_STUDENTS 10

int grade_total = 0;
int grades_list[];
int grade;
pthread_mutex_t mutex = PTHREAD_MUTEX_INITIALIZER;

void *total(void *arg);

int main()
{
    int list[NUM_STUDENTS] = {0};
    for (int i = 0; i < NUM_STUDENTS ; i++)
    {
        printf("Enter student %d's grade: ", i+1 );
        scanf("%d", &grades_list[i]);
    }
pthread_t students[NUM_STUDENTS];
for (int i = 0 ; i <NUM_STUDENTS; i++)
    {
        pthread_create(&students[i], 0, total, &list[i]);
    }
for (int i = 0 ; i < NUM_STUDENTS ; i++)
    {
        pthread_join(students[i], 0);
    }
printf("Total: %d\n", grade);
return 0;
}

void *total(void *arg)
{
    int *grades = (int*) arg;
    pthread_mutex_lock(&mutex);
    grade = grade + *grades;
    pthread_mutex_unlock(&mutex);
    return NULL;
}