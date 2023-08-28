#include <stdio.h>

int age;

int main(){
	
	printf("Enter your age\n--> ");
	scanf("%d",&age);
	
	if(age >= 18){
		printf("Your age is %d, greater than 18",age);
		
	}else

	printf("Your age is %d, less than 18",age);
	
}
