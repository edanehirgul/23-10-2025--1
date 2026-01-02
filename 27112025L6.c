
#include <stdio.h>

int main()
{
    int n=5;
    int fact=1;
    
    for(int i=1; i<=n; i++){
        
        fact*= i;// fact=fact* i
        
    }
    
    printf("Factorial= %d\n", fact);

    return 0;
}
