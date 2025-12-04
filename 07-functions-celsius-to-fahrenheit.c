#include <stdio.h>

// Practice exercise: function with a return value.
// Goal: implement celsius_to_fahrenheit so it converts Celsius to Fahrenheit
// using the formula F = C * 1.8 + 32.
// TODOs for you:
// 1) Complete celsius_to_fahrenheit to return the converted value.
// 2) In main, ask the user for a temperature in Celsius, call the function,
//    and print the Fahrenheit result with one or two decimals.
// Example outputs to aim for:
// - Input: 0   -> "0.0 C is 32.0 F"
// - Input: 37  -> "37.0 C is 98.6 F"
// - Input: -10 -> "-10.0 C is 14.0 F"
// Hint: use %f in printf for double values. You can format with one decimal
// place using %.1f if you like.
double celsius_to_fahrenheit(double celsius) {
    // TODO: return the converted temperature instead of 0.0
    double fahrenheit = celsius * 1.8 + 32;

    return fahrenheit;
}

int main(void) {
    double celsius = 0.0;
    

    printf("Enter temperature in Celsius: ");
    scanf("%lf", &celsius);

    double fahrenheit = celsius_to_fahrenheit (celsius); // TODO: call celsius_to_fahrenheit and print the converted value.

    printf("%lf C is %lf F.\n", celsius, fahrenheit);

    return 0;
}
