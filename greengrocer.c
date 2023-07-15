#include <stdio.h>
#include <locale.h>

float apple_price = 30.00;
float orange_price = 40.00;
float cherry_price = 50.00;
float banana_price = 35.00;
float peach_price = 45.00;

int apple_stock = 5;
int orange_stock = 5;
int cherry_stock = 5;
int banana_stock = 5;
int peach_stock = 5;

float money = 671.00;
float remaining_money;

char order_code;

void thin_line() {
    printf("\n__________________\n");
}

void thick_line() {
    printf("\n============================================\n");
}

void calculate(float order_amount, char order_name[]) {
    if (remaining_money >= order_amount) {
        remaining_money -= order_amount;
        printf("Successfully purchased %s. \nRemaining money: %0.2f$\n", order_name, remaining_money);
    } else {
        printf("Insufficient balance! Order couldn't be placed.\n");
        thin_line();
    }
}

void invalid_product(char input_char) {
    thin_line();
    printf("%c => Invalid product! Please enter a valid product code.\n", input_char);
    thin_line();
}

int main() {
    setlocale(LC_ALL, "English");

    remaining_money = money;

    while (remaining_money > 0) {
        thick_line();
        printf("\n");
        printf("Balance: %0.2f$\n", remaining_money);
        printf("\n");
        printf("Enter the order code:\n");
        printf("\n");
        printf("Apple (A) - Price: %0.2f$ - Stock: %d units\nOrange (O) - Price: %0.2f$ - Stock: %d units\nCherry (C) - Price: %0.2f$ - Stock: %d units\nBanana (B) - Price: %0.2f$ - Stock: %d units\nPeach (P) - Price: %0.2f$ - Stock: %d units\n",
               apple_price, apple_stock, orange_price, orange_stock, cherry_price, cherry_stock, banana_price, banana_stock, peach_price, peach_stock);
        printf("============================================\n--->");
        scanf(" %c", &order_code);

        switch (order_code) {
            case 'A':
            case 'a':
                if (apple_stock > 0) {
                    calculate(apple_price, "Apple");
                    apple_stock--;
                } else {
                    printf("Apple out of stock!\n");
                }
                break;
            case 'O':
            case 'o':
                if (orange_stock > 0) {
                    calculate(orange_price, "Orange");
                    orange_stock--;
                } else {
                    printf("Orange out of stock!\n");
                }
                break;
            case 'C':
            case 'c':
                if (cherry_stock > 0) {
                    calculate(cherry_price, "Cherry");
                    cherry_stock--;
                } else {
                    printf("Cherry out of stock!\n");
                }
                break;
            case 'B':
            case 'b':
                if (banana_stock > 0) {
                    calculate(banana_price, "Banana");
                    banana_stock--;
                } else {
                    printf("Banana out of stock!\n");
                }
                break;
            case 'P':
            case 'p':
                if (peach_stock > 0) {
                    calculate(peach_price, "Peach");
                    peach_stock--;
                } else {
                    printf("Peach out of stock!\n");
                }
                break;
            default:
                invalid_product(order_code);
                break;
        }
    }

    printf("Out of money! Your order placements have ended.\n");

    return 0;
}
