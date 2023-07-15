#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>

void clear_screen() {
    if (system("cls") == -1) {
        perror("Error clearing the screen");
        exit(1);
    }
}

void delay(unsigned int milliseconds) {
    usleep(milliseconds * 1000);
}

void animate_loading() {
    clear_screen();
    printf("Calculating ");
    fflush(stdout);

    int i;
    for (i = 0; i < 5; i++) {
        printf(".");
        fflush(stdout);
        delay(500);
    }

    clear_screen();
}

int main() {
    double number1, number2, result;
    char operation;

    clear_screen();
    printf("Calculator\n");
    printf("----------\n\n");

    printf("Enter the first number: ");
    scanf("%lf", &number1);

    printf("\nChoose the operation:\n");
    printf("+ : Addition\n");
    printf("- : Subtraction\n");
    printf("* : Multiplication\n");
    printf("/ : Division\n");
    printf("Your choice: ");
    scanf(" %c", &operation);

    printf("\nEnter the second number: ");
    scanf("%lf", &number2);
    animate_loading();

    switch (operation) {
        case '+':
            result = number1 + number2;
            printf("Result: %.2f\n", result);
            break;
        case '-':
            result = number1 - number2;
            printf("Result: %.2f\n", result);
            break;
        case '*':
            result = number1 * number2;
            printf("Result: %.2f\n", result);
            break;
        case '/':
            if (number2 != 0) {
                result = number1 / number2;
                printf("Result: %.2f\n", result);
            } else {
                printf("Error: Division by zero!\n");
            }
            break;
        default:
            printf("Error: Invalid operation!\n");
    }

    return 0;
}
