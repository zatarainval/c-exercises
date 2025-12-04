#include <stdio.h>

// Practice exercise: menu input validation.
// Goal: show a small menu and keep asking until the user picks 1, 2, or 3.
// TODOs for you:
// 1) Print a menu with three options (for example: 1) Play, 2) Settings, 3) Quit).
// 2) Use a while loop to ask for a choice until the input is 1, 2, or 3.
// 3) After a valid choice, print which option was selected.
// Example interaction to match:
//    Choose an option (1-3): 9
//    Invalid choice. Please pick 1, 2, or 3.
//    Choose an option (1-3): 2
//    You selected option 2.
// Hint: the condition inside while should be true when the choice is invalid.
int main(void) {
    int choice = 0;

    printf("1) Play  2) Settings  3) Quit\n\n");

    printf("Choose an option (1-3): ");
    scanf("%d", &choice);

    while (choice < 1 || choice > 3) {
        printf("Invalid choice. Please pick 1, 2, or 3: ");
        scanf("%d", &choice);
    }

    printf("Thank you, you entered choice %d.\n", choice);

    return 0;
}

