
#include <stdio.h>


void CheckGrade(int marks) {

	if (marks>= 90) {
		printf("Grade:AA\n");
	}

	else if (marks>= 85) {
		printf("Grade:BA\n");
	}

	else if (marks>= 80) {
		printf("Grade:BB\n");
	}

	else if (marks>= 75){
		printf("Grade:BC\n");
	}
	else if (marks>= 70) {
		printf("Grade:cc\n");
	}

	else {
		printf("Grade:FF");
	}
}

int main (){
    int marks;
    printf("Enter marks: ");
    scanf("%d", &marks);
    CheckGrade(marks);
    


return 0;
}
