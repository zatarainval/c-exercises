#include <stdio.h>

// Practice exercise: arrays, loops, and simple math.
// Goal: read a small list of integers into an array, then print the sum and
// average.
// TODOs for you:
// 1) Ask the user how many numbers they want to enter (limit between 1 and 10).
// 2) Use a loop to read that many integers into the numbers array.
// 3) Use another loop (or the same loop) to add them up and compute the
//    average. Remember to convert to double before dividing so you keep
//    the decimal part.
// Example session students can try to match:
//    How many numbers (1-10)? 4
//    Enter value 1: 5
//    Enter value 2: 7
//    Enter value 3: 2
//    Enter value 4: 6
//    Sum = 20
//    Average = 5.0
// Hint: declare sum as int and average as double. Use a constant for
// the maximum array size so it is easy to change.
#define MAX_NUMBERS 10

int main(void) {
    int numbers[MAX_NUMBERS];
    int count = 0;
    int sum = 0;
    int average = 0;

    printf("How many numbers do you want to enter? (1-%d): ", MAX_NUMBERS); // TODO: ask for count and validate it is between 1 and MAX_NUMBERS.
    scanf("%d", &count);

    if(count < 1 || count > MAX_NUMBERS) { // TODO: read values into the array using a loop.
        printf("Invalid number of entries. Please enter between 1 to %d entries.\n", MAX_NUMBERS);
    }   
    
    for (int i = 0; i < count; i++) {
        printf("Enter value %d: ", i + 1);
        scanf("%d", &numbers[i]);
        sum += numbers[i];
    }
         // TODO: compute sum and average, then print them.
    printf("Sum = %d\n", sum);
    printf("Average = %f\n", sum / (double)count);

    return 0;
}

