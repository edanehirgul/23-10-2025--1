
#include <stdio.h>

int main()
{
    int x=5;
    int *p=&x; //p is a pointer
               //&x -> returns the memory address of the variable x 
               //p holds the address of x 
               
     printf("Adress: %p\nValue: %d\n", p, *p); //p x'in adresini yazdırıyor
     
    
  

    return 0;
}