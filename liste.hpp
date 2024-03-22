#ifndef liste_hpp
#define liste_hpp

struct Liste{

    Market_dugum* bas;
    int dugumSayisi;
    void olustur();
    void kapat();
    void listeYaz();
    void listeBosalt();
    void ekle(Market_dugum*);
    void sil(int siraNo);

    int ara(char*);
    void guncelle(int kayitNo, Market_dugum*);


};

#endif