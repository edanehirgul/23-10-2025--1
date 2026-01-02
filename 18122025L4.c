
#include <stdio.h>



void swap (int *a, int *b) {
    
    int t = *a; // Assign the value pointed by 'a' to the temporary variable (x)
    *a= *b; // Assign the value of b to location indicated by a (x=y)
    *b= t; // Assign the old value of a to the location indicated by b (y=x)
    
}

int main()
{
  int x=5, y=10;
  swap(&x, &y);
  
  printf("x=%d y=%d\n", x, y);
  
  
  
    return 0;
}
