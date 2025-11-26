/******************************************************************************

Welcome to GDB Online.
  GDB online is an online compiler and debugger tool for C, C++, Python, PHP, Ruby, 
  C#, OCaml, VB, Perl, Swift, Prolog, Javascript, Pascal, COBOL, HTML, CSS, JS
  Code, Compile, Run and Debug online from anywhere in world.

*******************************************************************************/
#include <stdio.h>

int main()
{
    int age;
    float height;
    char name[20];
    
    printf("Enter your name");
    scanf("%s", name); // string (word) input
    
    printf("Enter your age: ");
    scanf("%d" , &age); // integer input
    
    printf("Enter your height(in meters): ");
    scanf("%f" , &height); // float input
    
    printf("\n---Your Information---\n");
    printf("Name: %s\n" , name);
    printf("Age: %d\n" , age);
    printf("Height: %2.f m\n" , height);
    
    return 0;
    
}