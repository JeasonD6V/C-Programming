 #include <stdio.h>

 int exam1, exam2, exam3, project;

 int main() {
    
	    printf("Enter your 1st exam grade\n--> ");
	    scanf("%d", &exam1);
	    printf("Enter your 2nd exam grade\n--> ");
	    scanf("%d", &exam2);
	    printf("Enter your 3rd exam grade\n--> ");
	    scanf("%d", &exam3);
	    printf("Enter your project grade\n--> ");
	    scanf("%d", &project);

    average = (exam1 + exam2 + project + exam3) / 4.000;
    printf("Average %.2f", average);

		    if (average < 50) {
		        printf("\nResult: Weak");
		    }
		    if (average >= 50 && average <= 60) {
		        printf("\nResult: Fair");
		    }
		    if (average >= 60 && average <= 70) {
		        printf("\nResult: Above Average");
		    }
		    if (average >= 70 && average <= 85) {
		        printf("\nResult: Good");
		    }
		    if (average >= 85 && average <= 100) {
		        printf("\nResult: Very Good");
		    }
		    else {
		        printf("\nResult: Invalid Average");
		    }

    return 0;
 }

