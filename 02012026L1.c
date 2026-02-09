#include <stdio.h>
#include <stdlib.h> //mallac, realloc ve free komutları 
#include <string.h> // metin (string) işlemleri için 


// --Yapı Struct Tanımı--

typedef struct { // farklı türdeki verileri birbirine eşler, paketler
                // name+ phone paketi yaptı 
                //Contact artık bi tanımlama aracı; int gibi, char gibi
  
    char Name[50]; // char sadece tek rakam ya da harf alır ama array 
    char Phone[15]; // olarak tanımlamak yan yana bu terimleri getirir
// telefon no 055.. diye olabilir ama sıfırla başlayan sayı yok int değil char array

}  Contact; //typedef sytax kuralı ad veriyosun mesela contact

// --Fonksiyonun ön tanımları--

// kullanıcı işlemleri bitirmek isteyene kadar dönmeli = loop + break

void DisplayContacts(Contact* List, int Size) {

printf("\n Contact List:\n");

if (Size==0) {
    printf("No contacts available.");
    return; // return0 main fonk dön , return; void de kullanılır 
}
  for (int i=0; i<Size; i++) {
    printf("%d. %s- %s\n", i+1, List[i].Name, List[i].Phone);
  }
}
//DisplayContacts rehberi göster isimli bir komut yaptırma fonk 
//Contact* List - Rehber defterinin adresini gösteriyor 
//int Size - bu defterde kaç kişi kayıtlı 
//Size ≠ sizeof operatörü , Size ı biz atadık 
// * (pointer) değişkenin adresini gösterir derleyici direkt onu okur yorulmaz
// RAM in şişmesi engellenir
/* Contact* Adres kimliği, operatör değil o yüzden void() içine ayrıca
typedef in sonuna ne atadıysan o ismi yaz ki o adreste paketleme yapsın */
// fonksiyonun içine değil tanım kısmına tıpkı int , char gibi
//ayrıca * çarpma ile karışmamalı
//List paketleme yaptığımız değişkenlerin adı biz atadık
//%s string , struct yapısını çağırmak için
// Bir pointer (*) yanına [i] koyarsan, o işaretçi kendini dizi zanneder

/* List tanımlarken Contact dedik ama malloc ile ona yer açınca
o artık dizi gibi davranabilir bu yüzden List[i]*/

/* printf("%d. %s - %s\n", i + 1, List[i].Name, List[i].Phone);
%d yerine i+1 ( sıra numarası )
%s yerine Listede i numaralı kutuya git, isim etiketini oku(.Name) ve yapıştır
%s yerine yine aynı kutuya git ve telefon etkietini oku (.Phone) ve yapıştır 
Name ve Phone u biz atadık başına nokta ile okuma yaptı
sadece array okutmak istersen örneğin printf("%s", List[i]); 
Struct yapısı için (paketleme okutma) .Name .Phone
*/
//%s string yani array okutma yapısı tabi struct ile beraber olmalı örn .Name 
//%c char kullansaydım tek bir eleman çıktısı verirdi 

/* printf("%d. %s - %s\n", i + 1, List[i].Name, List[i].Phone);
("%d, %s, %s"): Ekranda şöyle görünür: 1, Eda, 0555...
("%d - %s - %s"): Ekranda şöyle görünür: 1 - Eda - 0555...
("Sira: %d | Isim: %s -> Tel: %s"): Ekranda şöyle görünür: Sira: 1 | Isim: Eda -> Tel: 0555...
aradaki işaretler senin keyfine kalmış
*/

//--Liste Oluşturma--

Contact* CreateContactList(int Size) {
    //hafızadan yer kirala (malloc- Memory Allocation) Hafıza Tahsili
    //sizeof(Contact) bir kişinin kaydının alanı 
    //Size : kaç kişi (int)
    //ikisini çarpıp bellekte o kadar alan açıyoruz
    Contact* List = malloc(Size* sizeof(Contact)); //kişisayı X büyüklük

    // Yer var mı? hafıza dolduysa malloc bize yer açamaz ve NULL döner
    if (List == NULL){
        printf("Memory allocation failed!  (Bellekte yer yok]\n");
        exit(1); //! Programı anında bitir yer yok başa dönme bitirmelisin

    }

    return List; // Kiraladığımız arsanın adresini geri gönder 
    // return 0 olsa kiralanan adres boş kalırdı
    
}

/*malloc ile yer açmamızın sebebi başka bir programın doldurduğu alana bilgisayarın 
rastgele yer ataması yapmaması. Malloc boş yeri sana kiralar*/
//DislayContacts=garson (kim ne istiyor onu anlar)
//CreateContactList=emlakçı (boş araziyi sana kiralar)

/* Fonkisyondan eğer 
eylem istiyorsan (sonuç yok sadece ne yapılacak) -> void
sayı istiyorsan (toplama yap) -> int
adres/konum istiyorsan -> ....* 
*/

//NULL= hükümsüzdür, yok
/* 
CreateContactList asistan 
asistan gitti yeri ayırttı (malloc)
resepsiyon asistana anahtar verdi (List)

break: Sadece döngüyü kırar. (Burada döngü yok, kullanamazsın).
return: Fonksiyondan çıkar. (Burada işe yaramaz çünkü hafıza yoksa devam etmenin anlamı yok).
exit(1): Programı patlatır. (Hafıza dolduğunda yapmamız gereken tek güvenli şey budur).
*/

// -- KİŞİ EKLEME--
Contact* AddContact(Contact* List, int* Size) {
    Contact NewContact;

    // Kullanıcıdan bilgileri al
    printf("Enter name: ");
    scanf(" %[^\n]", NewContact.Name); // Boşluklu isim al

    printf("Enter phone: ");
    scanf(" %[^\n]", NewContact.Phone);

    // Listeyi 1 kişi artacak şekilde genişlet (realloc)
    // (*Size) şu anki sayı, buna +1 ekleyip yer açıyoruz.
    Contact* Temp = realloc(List, (*Size + 1) * sizeof(Contact));

    if (Temp == NULL) {
        printf("Memory reallocation failed!\n");
        return List; // Hata varsa eski listeyi koru
    }

    List = Temp; // Yeni genişleyen listeyi kabul et

    // Yeni kişiyi en sona ekle (Diziler 0'dan başlar, o yüzden son indeks *Size'dır)
    List[*Size] = NewContact;

    // Kişi sayısını artır (Ana kasadaki sayıyı değiştiriyoruz)
    (*Size)++; 

    printf("Kisi eklendi!\n");
    return List;
}

//--Kişi Silme--

//Liste boş mu?
 
Contact* DeleteContact(Contact* List, int* Size){

    if (*Size==0) {
        printf("Rehber bos , silinecek dosya yok!\n");
        return List;
    }

    char NameToDelete[50];
    printf("Silinecek ismi girin: ");
    scanf(" %[^\n]", NameToDelete);
    //%[^\n] [] kutunun içindeki kurala uy, %s yapsak sadece tek isim alır 
    // ^:hariç \n:boşluk Enter tuşuna (\n) kadar her şeyi oku

    //Kişiyi Arama 

    int FoundIndex = -1; //-1 henüs bulamadın demek
    //Bulunan Index, sıra numarası

    for(int i =0; i<*Size; i++){
        //eğer iki isim aynıysa sonuç 0 
        //strcmp: String Compare (Metin karşılaştırma)
        if(strcmp(List[i].Name, NameToDelete)==0){
            FoundIndex=i; //adresi buldum, i numaraları oda
            break; //bulduysan aramayı bırak
        }
    }

    //--Kaydırma işlemi--
    //Silinen kişi yerine arksındakileri bir adım öne çek

    for (int i = FoundIndex; i< *Size -1; i++){
        // int Foundex=-1 de olurdu , -1 e götürüyor her türlü
        List[i] =  List[i+1]; //Arkadakiler öne geçsin
    }
     
    //Listeyi Küçültme
    (*Size)--;
    //döngüden çıktıktan sonra genel büyüklüğü bir kere azaltmalı
    if (*Size>0){
        Contact* Temp = realloc(List,*Size * sizeof(Contact));
        if( Temp!= NULL) { //!= arasında boşluk olmamalı
            List = Temp; //Yeni daralmış listeyi kabul et 
        }
    }
    else{
        //eğer herkes silindiyse ve sayı 0 ise 
        free(List);// Listeyi tamamen yok et 
        List=NULL ;
        //listeyi serbest bırak RAMi boşalt

    }
    printf("Kisi basariyla silindi.\n");
    return List;

}
/* strcmp(List[i].Name, NametoDelete)
(matruşka bebek gibi düşün)
List:Tüm rehber 
[i]: O defterin i. sayfası
.: o sayfadaki bir satıra odaklan
Name:isim satırı 
"Defteri al -> i. sayfayı aç -> Oradaki İsim satırını oku."
*/

/* *Size olarak yazmak fonksiyona sayının olduğu kasanın anahtarını verir
böylece sayıyı değiştirir, Size yazarsan sadece kopyası değişir bir işe yaramaz */
// ana programdaki sayıyı kalıcı olarak değiştirmek istiyosan * koymalısın

//Realloc: Re-Allocation, yeniden tahsis
//mevcut odayı büyüt ya da küçült
//Listeyi al, yeni boyuta (*Size * sizeof...) göre ayarla

//Contact*Temp bir güvenlik önlemi işlem başarısız olursa elindeki listeyi kaybetme
//Önce Temp'e koy, sağlamsa List'e aktar;

int main() {
    // 1. Değişkenler
    Contact* MyList = NULL; /*Benim Listem" adında bir anahtar (pointer) oluştur. 
    Başlangıçta kimse olmadığı için NULL (Boş) olsun.*/
    int Size = 0; //Şu an içeride kaç kişi var? Başlangıçta 0.
    int Choice; //Kullanıcı menüden ne seçecek? (1, 2, 3...) Bunu tutacak değişken.

    // 2. Sonsuz Döngü
    while (1) {

        // Menüyü Ekrana Bas
        printf("\n--- MENU ---\n");
        printf("1. Ekle (Add)\n");
        printf("2. Sil (Delete)\n");
        printf("3. Listele (Display)\n");
        printf("4. Cikis (Exit)\n");
        printf("Seciminiz: ");
        scanf("%d", &Choice);

        // 3. Seçime Göre Fonksiyon Çağır
        switch (Choice) {
            case 1:
                // DİKKAT: &Size gönderiyoruz çünkü sayı artacak
                MyList = AddContact(MyList, &Size);
                break;

            case 2:
                // DİKKAT: &Size gönderiyoruz çünkü sayı azalacak
                MyList = DeleteContact(MyList, &Size);
                break;

            case 3:
                // Burada & YOK. Sadece okuyoruz.
                DisplayContacts(MyList, Size);
                break;

            case 4:
                printf("Cikis yapiliyor...\n");
                free(MyList); // Çıkarken temizlik yapalım
                return 0; // Programı bitir

            default:
                printf("Hatali secim! Tekrar deneyin.\n");
        }
    }
}





