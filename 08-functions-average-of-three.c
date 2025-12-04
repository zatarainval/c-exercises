#include <stdio.h>

// Practice exercise: functions with multiple parameters.
// Goal: write a function that computes the average of three integers and
// returns a double value.
// TODOs for you:
// 1) Complete average_of_three so it adds the numbers and divides by 3.0
//    (use 3.0 to avoid losing the decimal part).
// 2) In main, read three integers from the user, call average_of_three,
//    and print the result.
// Example outputs students should see:
// - Inputs: 3 6 9      -> "Average: 6.0"
// - Inputs: 5 5 6      -> "Average: 5.3" (rounded to one decimal)
// - Inputs: -2 4 10    -> "Average: 4.0"
// Hint: return type is double, so divide by 3.0 instead of 3.
double average_of_three(int a, int b, int c) {
    double average;
    return average = (a + b + c) / 3; // TODO: replace this with the correct average calculation. 
}

int main(void) {
    int first = 0;
    int second = 0;
    int third = 0;

    printf("Enter three integers separated by spaces: ");
    scanf("%d %d %d", &first, &second, &third);

    double average = average_of_three(first, second, third); // TODO: call average_of_three and print the result.

    printf("Inputs: %d, %d, %d\n", first, second, third);
    printf("Average: %f.\n", average);

    return 0;
}