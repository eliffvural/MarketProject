#include "liste.hpp"
using namespace std;

typedef Market_dugum Market_kayit;
typedef Liste Veriyapisi; //veri yapisini Liste olarak tanimliyoruz.
Veriyapisi kasa;

struct Market_dugum{
    char productName[50];
    int barcodeNumber[10];

    Market_dugum* sonraki;
};

void Liste::olustur(){

    //liste yapisini olusturmadan once baslangic durumu haline getirmeliyiz.

    bas=nullptr;
    //ilk olusturdugumuzda baslangic NULL dir.

    dugumSayisi=0; 
    //baslangicta dugum sayisi sifirdir.
}

