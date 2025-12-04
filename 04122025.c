#include <stdio.h>

int main(){

    char ch ;
    
   for(;;){// başlangıç koşul amaç arttırma azaltma olmadan = sonsuz döngü
printf("Bir karakter giriniz(Cıkmak icin A veya a ).");
scanf("%c", &ch);

if (ch=='A' || ch == 'a'){
    printf("Döngü sonlandı.\n");
    break;
}

   }

   return 0;
}