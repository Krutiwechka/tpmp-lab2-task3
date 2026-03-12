#ifndef WORKER_H
#define WORKER_H

typedef struct {
    int day, month, year;
} Date;

typedef struct {
    char surname[50], name[50], patronymic[50];
    char position[50];
    Date birth_date;
    char gender; // 'M' or 'F'
    Date hire_date;
} Worker;

void input_workers(Worker* arr, int n);
int count_retired(Worker* arr, int n);
void sort_and_print(Worker* arr, int n);
void print_youngest(Worker* arr, int n);
void print_gender_stats(Worker* arr, int n);

#endif
