
	#include <stdio.h>
int score;
int main() {
	


    printf("Enter your course score\n-->  ");
    scanf("%d", &score);

    if (score < 50) {
        printf("Unfortunately, you have failed.\n");
        
    } else if (score >= 50) {
    	
        printf("Congratulations, you have passed.\n");
    }

    return 0;
    
}


