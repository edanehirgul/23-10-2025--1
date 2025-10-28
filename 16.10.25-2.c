#include <stdio.h>
#include <math.h>

//Function definition for f begins here
float func(float x, float y) {
    
     float rad122=122.0*M_PI/180.0;
     
     float result;
     result=(2*pow(x,y)-7*y)/sin(rad122);
     return result;
}

//Function definition for f ends here 


int main (){
    
    float x=3.2, y=1.7;
    float result=func(x,y);
    printf("func(%f,%f)=%f",x , y, result);
    return 0;
}
// tekrar yap olmadiii
