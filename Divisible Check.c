#include <stdio.h>

int divisor = 5;
int number = 5; 

int main() {
	
    printf("Enter the number to be divided\n-->");
    scanf("%d", &divisor);
	
    if (divisor % 5 == 0) {
        printf("Number %d is divisible by %d", divisor, number);
    } else {
        printf("Number %d is not divisible by %d", divisor, number);
    }
    
    return 0;
}

