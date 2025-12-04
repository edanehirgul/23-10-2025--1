#include <stdio.h>



int main(){
   
 int gizlisayı=5;
 int tahmin ;
 printf("Sayı tahmin oyununa hoşgeldin");

 
{
    while(1)
    {
        printf("Tahminin nedir? (1 ve 10 arasında olmalı): ");
        scanf("%d", &tahmin);

        if(tahmin==gizlisayı){
            printf("Tebrikler! Bildinnnn slay. \n");

        }
        else { 
            printf("Yanlış :( Tekrar dene. \n");

        }
    }


}

printf("Oyun bitti. Teşekkürler.");
return 0;

}