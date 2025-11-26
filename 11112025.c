#include <stdio.h>

int main (){

//Assigment Operators

int c=10;

printf("Assignment Operators");

c*=2; //c=c*2 multiply and assign 
printf("After c*=2, c=%d\n", c);
c/=4; //c=/4 divided and assign
printf("After c/=4, c=%d\n", c);
c%=3; // c=% moduls and assign
printf("After c%%3, c=%d\n", c);


int num=5;
printf("Increament and Decrement\n");
printf("num=%d\n",num);
printf("num++%d\n, num++"); //post-increment(use first then add1)
printf("After num++ num=%d\n", num);
printf("++num=%d\n",++num); //pre-increment(add 1 first)
printf("num,,=%d\n", num--);
printf("After num --, num=%d\n", num);
printf("--num=%d?n", num);

return 0;
}