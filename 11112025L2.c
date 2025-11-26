#include <stdio.h> 

int main(){

int x=8, y=3, result;

printf("Arithmetic\n");
printf("x+y=%d\n",11);
printf("x%%y=%d\n\n",2);

printf("Relational\n");
printf("x>y=%d\n",1);// is x greater than y?
printf("x==y=%d\n",0); // is x equal to y?

int a=5 , b=0;
printf("Logical\n");
printf("(x>y)&&(a>0): %d\n", 1); //AND Operaiton
printf("(y>x||(b==0): %d \n\n", 1); //OR Operation

printf("bitwise\n");
printf("x&y=d\n",0); //bitwise and 
printf("x|y=%d\n",11); // bitwise or 
printf("x<<1=%d\n",16); //left shift(multiply by 2)
printf("x>>1=%d\n\n",4); //right shift (divide by2)


result=(x>y)? x : y ;
printf(" Conditional\n");
printf("greater nummber is %d\n", result); //displays to greater number 

//Bitwise Operators

int p=5, q=3;
printf("===Bitwise Operators===\n");
printf("p&q=%d\n", p&q); //bitwise and
printf("p|q=%d\n", p|q); //bitwise or
printf("p^q=%d\n", p^q); //bitwise xor
printf("~p=%d\n", ~p); //bitwise not(invert bits)
printf("p<<1=%d\n", p<<1); //left shift
printf("p>>1=%d\n", p>>1); //

//sizeof Operators
//-----------
printf("===sizeof Operators===\n");
printf("Size of int: %lu bytes\n", sizeof(int));
printf("Size of float: %lu bytes\n", sizeof(float));
printf("Size of double: %lu bytes\n", sizeof(double));
printf("Size of char: %lu bytes\n", sizeof(char));

//conditional(ternary) Operators

int max = (a>b) ? a:b; //if a>b assign a, otherwise, assign b
printf("===conditional(ternary) Operators===\n");
printf("Between a and b, greater is: %d\n\n", max);

return 0;

}
