
#include <stdio.h>
#include <string.h>

struct menu { 

    char name[50];
    float price;
};

void take_order() {
    struct menu food_menu[9]; 
    
    strcpy(food_menu[0].name, "T-Bone Steak");
    food_menu[0].price = 30.00;

    strcpy(food_menu[1].name, "Hamburgers");
    food_menu[1].price = 5.00;

    strcpy(food_menu[2].name, "Taco");
    food_menu[2].price = 3.00;

    strcpy(food_menu[3].name, "Sushi Rolls");
    food_menu[3].price = 15.00;

    strcpy(food_menu[4].name, "Cheesecake");
    food_menu[4].price = 6.00;

    strcpy(food_menu[5].name, "Coca-Cola");
    food_menu[5].price = 1.50;

    strcpy(food_menu[6].name, "Clam Chowder");
    food_menu[6].price = 8.00;

    strcpy(food_menu[7].name, "Buffalo Wings");
    food_menu[7].price = 10.00;

    strcpy(food_menu[8].name, "Apple Pie");
    food_menu[8].price = 7.00;

    int order_number;
    printf("Hello there! How are you? What would you like to order?\n ");
    
    printf("============================================\n");
    printf("T-Bone Steak (0) - Price: $%.2f \n", food_menu[0].price);
    printf("Hamburgers (1) - Price: $%.2f \n", food_menu[1].price);
    printf("Taco (2) - Price: $%.2f \n", food_menu[2].price);
    printf("Sushi Rolls (3) - Price: $%.2f \n", food_menu[3].price);
    printf("Cheesecake (4) - Price: $%.2f \n", food_menu[4].price);
    printf("Coca-Cola (5) - Price: $%.2f \n", food_menu[5].price);
    printf("Clam Chowder (6) - Price: $%.2f \n", food_menu[6].price);
    printf("Buffalo Wings (7) - Price: $%.2f \n", food_menu[7].price);
    printf("Apple Pie (8) - Price: $%.2f \n", food_menu[8].price);
    printf("\n");
    printf("Exit (9) - Exit from the Restaurant \n");
    printf("============================================\n-->");
    
    scanf("%d", &order_number);

    if (order_number >= 0 && order_number <= 8) { 
        if (order_number == 9) {
            printf("Exiting from the restaurant...\n");
            return; 
        } else {
            char response;
            printf("You have chosen %s. Would you like to order %s for $%.2f? (Y/N)\n--> ",
                   food_menu[order_number].name, food_menu[order_number].name, food_menu[order_number].price);
            
            scanf(" %c", &response );
            if (response == 'Y' || response == 'y') {
                printf("Purchase accepted. Enjoy your meal!\n");
            	return;
            	
            	
            } else if (response == 'N' || response == 'n') {
                printf("Purchase declined.\n");
                return;
            } else {
                printf("Invalid response!\n");
            }
        }
        
        
    } else { 
        printf("Invalid order number!\n");
    }
    
    take_order();
}

