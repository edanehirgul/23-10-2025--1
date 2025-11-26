//g(y)=(∛f(x)/(tan(rad135)+y)
#define _USE_MATH_DEFINES
#include <stdio.h>
#include <math.h>

float f(float x)
{
    return(x*x*x-2*x)/5.0;
}

float g(float x, float y)
{

float rad135=135.0*M_PI/180.0;
float resultF=f(x);
float result=(pow(resultF,1.0/3.0))/(tan(rad135)+y);
return result;
}

    
int main(){
    float x=2.5, y=-2.5;
    printf("The result is %f", g(x,y));
    return 0;
}
 
 
    