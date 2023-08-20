#include <stdio.h>

struct car {
    char *brand;
    char *model;
    int production_year;
    int engine_capacity_cc;
    char *color;
    double price;
};
int i;

int main() {
    struct car cars[9] = {
        {"Tesla", "Model 3", 2021, 0, "Black", 79990.00},
        {"Ford", "Focus", 2021, 1500, "Blue", 28000.00},
        {"Chevrolet", "Camaro", 2021, 6200, "Red", 59990.00},
        {"Toyota", "Corolla", 2021, 1800, "White", 25000.00},
        {"BMW", "X5", 2021, 3000, "Black", 75000.00},
        {"Honda", "Civic", 2021, 1800, "Gray", 22000.00},
        {"Mercedes-Benz", "C-Class", 2021, 2000, "White", 45000.00},
        {"Nissan", "Altima", 2021, 2500, "Brown", 30000.00},
        {"Kia", "Sportage", 2021, 2000, "Orange", 27000.00}
    };

    for (i = 0; i < 9; i++) {
        printf("Car %d\n", i + 1);
        printf("Brand: %s\n", cars[i].brand);
        printf("Model: %s\n", cars[i].model);
        printf("Production Year: %d\n", cars[i].production_year);
        printf("Engine Capacity: %d cc\n", cars[i].engine_capacity_cc);
        printf("Color: %s\n", cars[i].color);
        printf("Price: $%.2f\n", cars[i].price);
        printf("\n");
    }

    return 0;
}

