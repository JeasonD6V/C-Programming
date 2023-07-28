#include <stdio.h> // Library
#include <unistd.h> // Library
#include <locale.h> // Library

///	 GLOBAL SCOPE ///
int choice;
int number1;
float dollar = 26.98;
float euro = 30.02;
float pound = 34.68;
float bitcoin = 808.38230;
float total;
///	 GLOBAL SCOPE ///

int main() {
    // main
    setlocale(LC_ALL, "C"); // Setting locale to C (default)

    printf("---------Currency Converter---------\n");
    printf("1 = US Dollar (USD)\n");
    printf("2 = Euro (EUR)\n");
    printf("3 = British Pound (GBP)\n");
    printf("4 = Bitcoin (BTC)\n");
    printf("5 = Exit\n");
    printf("---------Currency Converter---------\n");

    sleep(1);
    printf("Please make your choice \n --> ");
    scanf("%d", &choice); // Read user input

    switch (choice) {
        ///////////////////////////////////////////////////////////////////////////////////
        case 1: // command1
            printf("How many dollars do you have: ");
            scanf("%d", &number1);
            total = number1 * dollar; // calculate
            printf("%d dollars is equal to %.2f Turkish Liras.\n", number1, total);
            break;
        ///////////////////////////////////////////////////////////////////////////////////

        case 2: // command2
            printf("How many euros do you have: ");
            scanf("%d", &number1);
            total = number1 * euro; // calculate
            printf("%d euros is equal to %.2f Turkish Liras.\n", number1, total);
            break;
        ///////////////////////////////////////////////////////////////////////////////////

        case 3: // command3
            printf("How many pounds do you have: ");
            scanf("%d", &number1);
            total = number1 * pound; // calculate
            printf("%d pounds is equal to %.2f Turkish Liras.\n", number1, total);
            break;
        ///////////////////////////////////////////////////////////////////////////////////

        case 4: // command4
            printf("How many bitcoins do you have: ");
            scanf("%d", &number1);
            total = number1 * bitcoin; // calculate
            printf("%d bitcoins is equal to %.2f Turkish Liras.\n", number1, total);
            break;
        ///////////////////////////////////////////////////////////////////////////////////

        case 5: // command5
            printf("Exiting...\n");
            sleep(1); // Wait for 1 second
            printf("Have a nice day!\n");
            break;
        ///////////////////////////////////////////////////////////////////////////////////
    }

    return 0;
}
