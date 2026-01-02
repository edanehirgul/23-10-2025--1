#include <stdio.h>
#include <stdlib.h> //mallac, realloc ve free komutları 
#include <string.h> // metin (string) işlemleri için 


// --Yapı Struct Tanımı--

typedef stuct { // farklı türdeki verileri birbirine eşler, paketler
                // name+ phone paketi yaptı 
  
    char Name[50]; // char sadece tek rakam ya da harf alır ama array 
    char Phone[15]; // olarak tanımlamak yan yana bu terimleri getirir
// telefon no 055.. diye olabilir ama sıfırla başlayan sayı yok int değil char array

}  Contact; //typedef sytax kuralı ad veriyosun mesela contact

// --Fonksiyonun ön tanımları--

// kullanıcı işlemleri bitirmek isteyene kadar dönmeli = loop + break

void DisplayContacts(Contacts* List, int Size);
  