#include <stdio.h>

// Practice exercise: iterating over arrays forward and backward.
// Goal: read up to 8 integers into an array, then print them in reverse order.
// TODOs for you:
// 1) Ask the user how many numbers to enter (1-8) and store it in length.
// 2) Use a loop to read that many integers into data[].
// 3) Print the numbers in the original order, then print them again in
//    reverse order by looping from the end toward the start.
// Example output to match:
//    How many numbers (1-8)? 5
//    Value 1: 10
//    Value 2: 20
//    Value 3: 30
//    Value 4: 40
//    Value 5: 50
//    You entered: 10 20 30 40 50
//    Reversed: 50 40 30 20 10
// Hint: the last index you should print is length - 1, not 8 - 1, so you
// only reverse the part of the array that was filled.
#define MAX_LENGTH 8

int main(void) {
    int data[MAX_LENGTH];
    int length = 0;

    printf("How many numbers (1-%d)? ", MAX_LENGTH);
    scanf("%d", &length);

    if (length < 1 || length > MAX_LENGTH) {
        printf("Invalid input.\n");
    }
    
    for (int i = 0; i < length; i++) {
        printf("Value %d: ", i + 1);
        scanf("%d", &data[i]);
    }

    printf("You entered: ");
    for (int i = 0; i < length; i++) {
        printf("%d ", data[i]);
    }
    printf("\n");

    printf("Reversed: ");
    for (int i = length - 1; i >= 0; i--) {
        printf("%d ", data[i]);
    }
    printf("\n");
    

    return 0;
}
