#include <stdio.h>

 int hours;

 int main() {
    printf("How many hours did you stay in the parking\n--> ");
    scanf("%d", &hours);

  

	    if (hours > 0 && hours <= 1) {
	        printf("There is no fee.\n");
	    }
	
	    if (hours > 1 && hours <= 3) {
	        printf("Fee = $30.\n");
	    }
	
	    if (hours > 3 && hours <= 5) {
	        printf("Fee = $60.\n");
	    }
	
	    if (hours > 5) {
	        printf("Fee = $90.\n");
	    }
		else 
	        printf("Please enter a positive number (-) not available.\n");
	    return 0;
}

