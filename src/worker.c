#include <stdio.h>
#include <string.h>
#include "worker.h"

void input_workers(Worker* arr, int n) {
    for(int i = 0; i < n; i++) {
        printf("Worker %d (Surname Name Patronymic Pos Gender[M/F] BDay BMon BYear): ", i+1);
        scanf("%s %s %s %s %c %d %d %d", 
            arr[i].surname, arr[i].name, arr[i].patronymic, 
            arr[i].position, &arr[i].gender,
            &arr[i].birth_date.day, &arr[i].birth_date.month, &arr[i].birth_date.year);
    }
}

int count_retired(Worker* arr, int n) {
    int count = 0;
    int cur_year = 2026;
    for(int i = 0; i < n; i++) {
        int age = cur_year - arr[i].birth_date.year;
        if ((arr[i].gender == 'M' && age > 65) || (arr[i].gender == 'F' && age > 60)) count++;
    }
    return count;
}

void sort_and_print(Worker* arr, int n) {
    for(int i = 0; i < n-1; i++) {
        for(int j = 0; j < n-i-1; j++) {
            if (arr[j].gender > arr[j+1].gender || 
               (arr[j].gender == arr[j+1].gender && strcmp(arr[j].surname, arr[j+1].surname) > 0)) {
                Worker tmp = arr[j]; arr[j] = arr[j+1]; arr[j+1] = tmp;
            }
        }
    }
    printf("\nSorted list:\n");
    for(int i = 0; i < n; i++) printf("%s %s - %c\n", arr[i].surname, arr[i].name, arr[i].gender);
}

void print_youngest(Worker* arr, int n) {
    int idx = 0;
    for(int i = 1; i < n; i++) {
        if (arr[i].birth_date.year > arr[idx].birth_date.year) idx = i;
    }
    printf("Youngest: %s %s (%d)\n", arr[idx].surname, arr[idx].name, arr[idx].birth_date.year);
}

void print_gender_stats(Worker* arr, int n) {
    int m = 0, f = 0;
    for(int i = 0; i < n; i++) {
        if (arr[i].gender == 'M') m++; else f++;
    }
    printf("Stats: Men: %d, Women: %d\n", m, f);
}
