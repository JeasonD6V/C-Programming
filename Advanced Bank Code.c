#include <stdio.h>

float balance = 6500;

void performWithdrawal(float amount) {
    int bills_100 = amount / 100;
    amount = (int)amount % 100;
    int bills_50 = amount / 50;
    amount = (int)amount % 50;
    int bills_20 = amount / 20;
    amount = (int)amount % 20;
    int bills_10 = amount / 10;
    amount = (int)amount % 10;
    int bills_5 = amount / 5;
    amount = (int)amount % 5;

    if (amount != 0) {
        printf("\n=======================================\n");
        printf("Unfortunately, unable to dispense $%.2f.\n", amount);
        printf("=======================================\n");
        return;
    }

    printf("\n=======================================\n");
    printf("Withdrawal Details:\n");
    printf("$100 bills: %d\n", bills_100);
    printf("$50 bills: %d\n", bills_50);
    printf("$20 bills: %d\n", bills_20);
    printf("$10 bills: %d\n", bills_10);
    printf("$5 bills: %d\n", bills_5);
    printf("=======================================\n");

    balance -= (bills_100 * 100 + bills_50 * 50 + bills_20 * 20 +
                bills_10 * 10 + bills_5 * 5);
    printf("Your updated balance: $%.2f\n", balance);
}

void performDeposit(float amount) {
    balance += amount;
    printf("\n=======================================\n");
    printf("Deposit Details:\n");
    printf("Deposited: $%.2f\n", amount);
    printf("Current balance: $%.2f\n", balance);
    printf("=======================================\n");
}

int main() {
    float input_amount;
    int choice;

    printf("========== WELCOME TO THE BANK ==========\n");
    while (1) {
        printf("\nYour balance: $%.2f\n\n", balance);
        printf("1. Withdraw Money\n");
        printf("2. Deposit Money\n");
        printf("3. Check Balance\n");
        printf("4. Call Customer Service\n");
        printf("5. Exit\n");
        printf("\nMake your choice: ");
        scanf("%d", &choice);
        printf("\n=======================================\n");

        switch (choice) {
            case 1:
                printf("Enter the amount you want to withdraw: $");
                scanf("%f", &input_amount);
                performWithdrawal(input_amount);
                break;
            case 2:
                printf("Enter the amount you want to deposit: $");
                scanf("%f", &input_amount);
                performDeposit(input_amount);
                break;
            case 3:
                printf("Your balance: $%.2f\n", balance);
                break;
            case 4:
                printf("Calling customer service...\n");
                return 0;
            case 5:
                printf("Exiting the bank...\n");
                return 0;
            default:
                printf("Invalid choice. Please try again.\n");
        }
    }

    return 0;
}

