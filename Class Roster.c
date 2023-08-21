
#include <stdio.h>

struct student {
    char* first_name;
    char* last_name;
    char* grade;
    char* section;
    int student_id;	
};
int i ;
int main() {
    struct student students[9];
    
	    students[0].first_name = "John";      students[1].first_name = "Emma";      students[2].first_name = "Michael";
	    students[0].last_name = "Doe";        students[1].last_name = "Johnson";    students[2].last_name = "Williams";
	    students[0].grade = "9th";            students[1].grade = "10th";           students[2].grade = "11th";
	    students[0].section = "A";            students[1].section = "B";            students[2].section = "C";
	    students[0].student_id = 401;         students[1].student_id = 361;         students[2].student_id = 481;
	
	
	    students[3].first_name = "Olivia";    students[4].first_name = "James";     students[5].first_name = "Sophia";
	    students[3].last_name = "Smith";	  students[4].last_name = "Brown";      students[5].last_name = "Miller";
	    students[3].grade = "9th";		  students[4].grade = "10th";           students[5].grade = "11th";
	    students[3].section = "D";		  students[4].section = "E";	        students[5].section = "F";
	    students[3].student_id = 110; 	  students[4].student_id = 214;         students[5].student_id = 66;
	
		
	    students[6].first_name = "Liam";	  students[7].first_name = "Ava";	 students[8].first_name = "Noah";
	    students[6].last_name = "Davis";      students[7].last_name = "Wilson";      students[8].last_name = "Jones";
	    students[6].grade = "9th";		  students[7].grade = "10th";		 students[8].grade = "11th";
	    students[6].section = "G";            students[7].section = "H";		 students[8].section = "I";
	    students[6].student_id = 512;         students[7].student_id = 193;          students[8].student_id = 447;



    
    for (i = 0; i < 9; i++) {
    				
        printf("------------------Student %d Information:-----------------------\n", i+1);
        printf("First Name   : %s\n", students[i].first_name);
        printf("Last Name    : %s\n", students[i].last_name);
        printf("Grade        : %s\n", students[i].grade);
        printf("Section      : %s\n", students[i].section);
        printf("Student ID   : %d\n", students[i].student_id);
    }
    printf("---------------------------------------------------------------\nthe student census is over");
    
    return 0;
}

