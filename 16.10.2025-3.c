#include <stdio.h>
#include <math.h>
#define _USE_MATH_DEFINES
//  Function defiinition for f begins here

double g(double x, double y){
    double rad135=135.0*M_PI/180.0;
    double result;
    result = (exp(x)-exp(y))/(cos(rad135)+pow(y, x));
    return result;
}

    
// function definition for f ends here 

int main(){
    
    double x=(5.3), y=(0.5);
    printf("g(%lf,%lf)=%lf\n",x , y, g(x,y));
    return 0;
}
    