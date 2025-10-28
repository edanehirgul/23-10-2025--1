#include <stdio.h> 

//  Function defiinition for f begins here

float f (float x) {
    
    
return(x*x*x-2*x)/5; // result is calculated and returned in the same row 

// Another way to do the same way

/*

 Float result;
 result= (x*x*x-2*x)/5.0;
 return result;
 
 */
 
}
// function definition for f ends here 

int main () {
    
    float x=3.0;
    
    printf("f(%f)=%f",x,f(3.0));
    
    return 0;
}