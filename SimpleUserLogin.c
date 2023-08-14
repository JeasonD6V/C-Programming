#include <stdio.h>
#include <unistd.h>

int password;
int retry;

int main() { 
printf ("password : 123456789\n");
sleep (1);
    printf("Please enter your password! (You have 2 attempts!)\n--> ");	

    scanf("%d", &password);
    
    
    if (password == 123456789) {
        printf("Password is correct. Logging in...");

    } else {
        printf("Incorrect password! Would you like to try again?\n");
        printf("Yes (1)\n");
        printf("No (2)\n--> ");
        scanf("%d", &retry);
        
        if (retry == 1) {
            printf("Please enter your password!\n--> ");
            scanf("%d", &password);

        } else { 
            printf("Exiting.\n");
            return 0;
        }
        
        if (password == 123456789) {
            printf("Password is correct. Logging in...");

        } else {
            printf("Password is incorrect. Your attempts are exhausted.");
        }
    } 

    return 0;
}

