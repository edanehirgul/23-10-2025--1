
#include <stdio.h>
int CanVote (int age, char citizen){
	if (age>= 18) {

		if(citizen=='y'||citizen =='Y') {
			return 1;
		}
	}
	else {
		return 0;
	}

}

int main() {
	int age;
	char citizen;
	printf("Enter age: \n");
	scanf("%d",&age);

	printf("Are you a citizen (y/n): \n");
	scanf(" %c", &citizen); // " %c" there should be a blank before & in this compiler 

	if(CanVote(age, citizen)) {
		printf("You are eligable to vote.\n");

	}
	else {
		if (age<18) {
			printf("You must be at least 18 years old to vote.\n");
		}
		else {
			printf("You must be a citizen to vote.\n");
		}
	}

	return 0;
}
