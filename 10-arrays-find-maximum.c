#include <stdio.h>

// Practice exercise: scanning arrays to find an extreme value.
// Goal: read 5 integers into an array, then find and print the largest value.
// TODOs for you:
// 1) Use a loop to fill the values array with 5 integers.
// 2) Scan through the array to find the largest number. Track both the
//    current maximum and its position (index).
// 3) Print the maximum and its position (for example, position 0 is the
//    first item).
// Example output students should see:
//    Enter number 0: 9
//    Enter number 1: 3
//    Enter number 2: 14
//    Enter number 3: 7
//    Enter number 4: 2
//    Largest value: 14 at position 2
// Hint: start max_value with the first element before looping over the rest.
#define SIZE 5

int main(void) {
    int values[SIZE];
    int max_value, max_index;


    for (int i = 0; i < SIZE; i++) {
        printf("Enter number %d: ", i);
        scanf("%d", &values[i]);
    }

    max_value = values[0];
    max_index = 0;

    for (int i = 1; i < SIZE; i++) {
        if (values[i] > max_value) {
            max_value = values[i];
            max_index = i;
        }
    }

    printf("Largest value: %d at position %d\n", max_value, max_index);

    return 0;
}

