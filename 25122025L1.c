#include <stdio.h>
#include <stdlib.h> // for functions like rand, srand(srand om)
#include <time.h> // for the time (NULL) function


//A structure representing a bank account
struct Account {
	int accountNumber;
	float balance;

};

//Function prototypes
void deposit(struct Account *acc); //Deposit money into the Account
void withdraw(struct Account *acc);//Withdraw money from the account
void printAccount(const struct Account *acc); //Printing account information

int main() {

	srand(time(NULL)); // It allows it to generate a different number each time it runs


	struct Account myAccount; //Creating a variable of type Account
	myAccount.accountNumber=rand() % 9000 + 1000;

	myAccount.balance =1000.0f;

	struct Account *accPtr= &myAccount;//accPtr holds the memory address of the myAccount variable

	deposit(accPtr);//deposit   random money into the account
    withdraw(accPtr);//Withdraw money randomly from the account
	deposit(accPtr);//deposit money again

	printAccount(accPtr);//Print the current account status to the screen

	return 0;
}

void deposit(struct Account *acc) {

	float amount = (rand() % 500) + 1;

	acc ->balance += amount;// The operator is used to acces an element within a struct via a pointer

	printf("Deposited: $%.2f\n", amount);


}

void withdraw(struct Account *acc) {

	float amount = (rand() % 300) + 1;

	if(acc-> balance >= amount) {
		acc->balance -= amount;
		printf("Withdrew: $%.2f\n", amount);

	}
	else {
		printf("Withdrawal of $%.2f failed (insufficient funds)\n", amount);
	}
}

void printAccount(const struct Account *acc) {
	printf("\nAccount Summarry\n");
	printf("Account Number: %d\n", acc->accountNumber);
	printf("Final Balance: $%.2f\n",acc->balance);
}



