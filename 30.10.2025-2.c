/******************************************************************************

Welcome to GDB Online.
GDB online is an online compiler and debugger tool for C, C++, Python, Java, PHP, Ruby, Perl,
C#, OCaml, VB, Swift, Pascal, Fortran, Haskell, Objective-C, Assembly, HTML, CSS, JS, SQLite, Prolog.
Code, Compile, Run and Debug online from anywhere in world.

*******************************************************************************/
#include <stdio.h>

int main()
{
   //Arithmetic Operators 
    int a=10 , b=3;
   printf("===Arithmetic Operators 000\n");
   printf("a+b=%d\n" , a+b);
   printf("a-b=%d\n" , a-b);
   printf("a*b=%d\n" , a*b);
   printf("a/b=%d\n" , a/b);
   printf("a%%b=%d\n\n" , a%b);



// Relational Operators

printf("=== Relational Operators===\n");

printf("a==b: %d\n" , a==b);
printf("a!=b: %d\n" , a!=b);
printf("a>b: %d\n" , a>b);
printf("a<b: %d\n" , a<b);
printf("a>=b: %d\n" , a>=b);
printf("a<=b: %d\n" , a<=b);
  
// Logical Operators

int x=5, y=0;

printf("===Logical Operators===\n");

printf("(a>b) && (x>0): %d\n", (a>b) && (x>0));
printf("(a<b) || (y>0): %d\n", (a<b) && (y>0));
printf("!(x>0): %d\n\n",!(x>0));


//Assignment Operators

int c=10; // initalize C
printf("===Assignment Operators===\n");
printf("initalize c= %d\n",c);
c +=5; //c=c+5 Add and Assignment
printf("Ater c+=5, c= %d\n", c);
c -=3; //c=c-3 Substract and Assignment
printf("Ater c-=3, c= %d\n", c);

return 0;
}

   