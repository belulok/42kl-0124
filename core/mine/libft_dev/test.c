#include <stdio.h>

int main() {
    int daysOfWeek[] = {1, 2, 3, 4, 5, 6, 7, 10, 100}; // An array with 7 elements

    // Calculate the number of elements in the daysOfWeek array
    size_t aWeek = sizeof(daysOfWeek);
    size_t aDay = sizeof(daysOfWeek[0]);
    int numDays = sizeof(daysOfWeek) / sizeof(daysOfWeek[0]);

    printf("The size of the whole array is %zu\n", aWeek);
    
    for(int i = 0; i < numDays; i++)
    {
        printf("The size of the index %d where the value is %d is %zu\n", i, daysOfWeek[i], sizeof(daysOfWeek[i]));
    }
    printf("There are %d days in a week.\n", numDays);

    return 0;
}
