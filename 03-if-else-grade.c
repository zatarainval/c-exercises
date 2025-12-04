#include <stdio.h>

// Practice exercise: longer if/else chains.
// Goal: read a test score (0-100) and print a letter grade message.
// TODOs for you:
// 1) After reading score, add an if/else-if/else chain that prints
//    messages for A (90-100), B (80-89), C (70-79), D (60-69),
//    and F (below 60).
// 2) Include the score in the output so students see what was graded.
// Example outputs to mirror:
// - Input: 95 -> "Score 95: A - Excellent!"
// - Input: 73 -> "Score 73: C - Keep practicing."
// - Input: 42 -> "Score 42: F - Needs more study."
// Hint: check the highest scores first so lower ranges do not run too early.
int main(void) {
    int score = 0;

    printf("Enter a score between 0 and 100: ");
    scanf("%d", &score);

    if(score >= 90 && score <= 100 ) {
        printf("Excellent! You have an A.\n");
    }
    else 
        if(score >= 80  && score <= 89){
            printf("Nice, you have a B!\n");
        }
    
    else 
        if(score >= 70 && score <= 79) {
            printf("Keep practicing, you have a C.\n");
        }
    else
        if(score >= 60 && score <= 69){
            printf("Could use work, you have a D.\n");
        }
    else {
        if(score <= 59){
            printf("Needs more studying, you have an F.\n");
        }
    }

    

    return 0;
}

