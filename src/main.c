#include <stdio.h>
#include "worker.h"

int main() {
    Worker staff[10];
    input_workers(staff, 10);
    printf("\nRetired count: %d\n", count_retired(staff, 10));
    sort_and_print(staff, 10);
    print_youngest(staff, 10);
    print_gender_stats(staff, 10);
    return 0;
}
