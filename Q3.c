#include <stdlib.h>
#include <stdio.h>
#include <pthread.h>
#define MAX_LEN 256
#define NUM_STUDENTS 5

void *curve(void *arg);

typedef struct
{
char name[MAX_LEN];
int student_id;
double grade;
}students;

int main(){
students list[NUM_STUDENTS] = {};
for (int i = 0; i < NUM_STUDENTS ; i++)
{
    printf("Please Enter the student %d's name, id, grades: ", i+1 );
    scanf("%s %d %lf", list[i].name, &list[i].student_id, &list[i].grade);
}
pthread_t students[NUM_STUDENTS];
for (int i = 0 ; i < NUM_STUDENTS ; i++)
{
    pthread_create(&students[i], 0, curve, &list[i]);
    pthread_join(students[i], 0);}
return 0;
}
void *curve(void *arg)
{
    students *student = (student* args);
    student->grade = grade * 1.50;
    printf("%s %d %lf\n", student->name, student->student_id, student->grade);
return NULL;
}