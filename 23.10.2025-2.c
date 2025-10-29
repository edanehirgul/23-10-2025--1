/******************************************************************************

Welcome to GDB Online.
  GDB online is an online compiler and debugger tool for C, C++, Python, PHP, Ruby, 
  C#, OCaml, VB, Perl, Swift, Prolog, Javascript, Pascal, COBOL, HTML, CSS, JS
  Code, Compile, Run and Debug online from anywhere in world.

*******************************************************************************/
#include <stdio.h>

int main()
{
  //variables of different types 
    char ch='Z';
    int i=12345;
    unsigned int ui=12345U;
    short s=-32000;
    unsigned short us=11223;
    long l=1234567890L;
    unsigned long ul=123456789UL;
    long long ll=123456789012345LL;
    unsigned long long ull=123456789012345ULL;
    float f=3.1415f;
    double d=2.718281826;
    long double ld=1.6180339887L;
    
    
    // Print all 
    
    printf("character :%%c->%c\n",ch);
    printf("signed integer:%%d or %%i -> %i\n\n", i , i);
    printf("unsigned integer: %%u -> %u \n", ui);
    printf("short signed integer: %%hd -> %hd \n", s);
    printf("short unsigned integer: %%hu -> %hd\n", us);
    printf("long signed integer:%%ld -> %> %ld\n", l);
    printf("long unsigned integer:%%lu -> %> %lu\n", ul);
    printf("long long signed integer:%%lld -> %> %lld\n", ll);
    printf("long unsigned integer:%%lu -> %> %lu\n", ul);
    printf("long long unsigned integer:%%lld -> %> %lld \n", ll);
    printf("float: %%f -> %lf\n", f);
    printf("float with 2 decimals: %%.2f -> %.2f\n" ,f ,f);
    printf("double: %%Lf ->\n", ld);
    printf("Print a literal percent sign:%%%% -> %%\n");
  
    return 0;
}