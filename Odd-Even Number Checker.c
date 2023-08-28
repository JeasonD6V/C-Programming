#include <stdio.h>
int number;

int main() {
	
    printf("Enter a number:\n-->");
    scanf("%d", &number);
    
    if (number % 2==0) {
        printf("The number is even.");
        
    } else {
    	
        printf("The number is odd.");
    }
    
    return 0;
    
}

