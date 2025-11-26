
#include <stdio.h>

    void FindEvenOrOdd (int num) {
    
    if(num %2 == 0){
        
        printf("the number is even.\n");
        
    }
    
    else{ 
    printf("the number is odd.\n");
    }
    
    
    }
    
    int main(){
        
        int num;
        printf("Enter a number: ");
        scanf("%d", &num);
        FindEvenOrOdd (num);
        return 0;
    }
    
  

