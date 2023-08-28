#include <stdio.h>

int number;

int main() {
    
    printf("Enter a number:\n--> ");
    scanf("%d", &number);
    
    if (number%5==0      ||      number%3==0) {
    	
        printf("The number you entered, %d, is divisible by 3 or 5.", number);
    } else {
        printf("The number you entered, %d, is not divisible by 3 or 5.", number);
    }
    
    return 0;
    
}

