#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <pthread.h>

int *total_grade;
int *read_grades();
int save_bellcurve(grade);
void wait();
int pthread_grades(pthread_t tid1, pthread_t tid2, pthread_t tid3,
                        pthread_t tid4, pthread_t tid5, pthread_t tid6,
                        pthread_t tid7, pthread_t tid8, pthread_t tid9,
                        pthread_t tid10);

int main()
{
    save_bellcurve(grade);
    printf("Bellcurved grade: ", bellcurved_grade);
 }

int *read_grades() {
    int *grades;
    int x;
    int grades_array[10];
    int i;
    int count = 10;

    FILE *student_grades;
    student_grades = fopen("grades.txt", "r");
    scanf("%d", &x);
    student_grades = malloc(x *sizeof(int));
    for (i = 0; i < 10; i++) {
        fscanf(student_grades, "%1d", &numberArray[i]);
        pthread_create_wait(&bar);
    }
    int pthread_grades(pthread_t tid1, pthread_t tid2, pthread_t tid3, pthread_t tid4, pthread_t tid5, pthread_t tid6,pthread_t tid7, pthread_t tid8, pthread_t tid9,pthread_t tid10)
    {
        mutex = Semaphore(1);
        barrier = Semaphore(0);
        mutex.wait();
        mutex.signal();
        if i <= 10: barrier.signal() {
        barrier.wait();
        barrier.signal();
        }
        free student_grades;
        pthread_barrier_init(&bar, NULL, n);
    }

void wait() 
{
    fclose("grades.txt");
}
int save_bellcurve(grade) 
{
    grade = grade + total_grade;
    int bellcurved_grade = (grade*1.50);
    return bellcurved_grade;
}