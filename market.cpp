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

void Liste::sil(int siraNo){

    //listede yer alan bir dugumu silme fonksiyonu yaziyoruz:
    Market_dugum* tara, *arka;
    int sayac=1;
    tara=bas;

    if(siraNo<=0){
       std:: cout<<"Hatali kayit sira no girildi.\n"<<std::endl;
       return;
    }

    if(siraNo==1){
        bas=bas->sonraki;
        delete tara;
        dugumSayisi--;
        return;
    }

    while((tara!=nullptr) && (sayac<siraNo)){
        arka=tara;
        tara=tara->sonraki;
        sayac++;
    }

    if(sayac<siraNo){
        //verilen siraNo cok buyuk oldugu durumda:
        std::cout<<"Silinecek kayit bulunamadi."<<std::endl;
    }

    else{
        //simdi de silinecek kayit buldugumuz durumdayiz:

        arka->sonraki=tara->sonraki;
        delete tara;
        dugumSayisi--;
    }
}

void Liste:: listeBosalt(){
    Market_dugum* p;
    while(bas){
        p=bas;
        bas=bas->sonraki;
        delete p;
    }
    dugumSayisi=0;
}




int main(){
    kasa.olustur();
}

