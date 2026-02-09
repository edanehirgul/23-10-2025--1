#include <math.h>
#include <stdio.h>

float UcgenAlan(float x, float y) {
float result =( x*y/2);
return result; // fonksiyonlarda result tanımladıktan sonra return result
}

int main()
{ 
    float x , y ;
    printf("Ucgenin yüksekliği: \n");
    scanf("%f", &x);

    printf("Ucgenin tabanı: \n");
    scanf("%f", &y);


    printf("Üçgenin Alanı: %f\n" ,UcgenAlan(x,y));
    return 0;

} 

