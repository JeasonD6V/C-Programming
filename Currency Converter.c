#include <stdio.h> // KÜTÜPHANE
#include <unistd.h> // KÜTÜPHANE
#include <locale.h> // KÜTÜPHANE

///	 GLOBAL SCOPE ///
int secim;
int sayi1;
float dolar = 26.98;
float euro = 30.02;
float sterlin = 34.68;
float bitcoin = 808.38230;
float toplam;
///	 GLOBAL SCOPE ///

int main() {
    // main
    setlocale(LC_ALL, "Turkish"); // türkçe yapma

    printf("---------Para Birimleri---------\n");
    printf("1 = Amerikan Dolarý (USD)\n");
    printf("2 = Euro (EUR)\n");
    printf("3 = Ýngiliz Sterlini (GBP)\n");
    printf("4 = Bitcoin (BTC)\n");
    printf("5 = Çýkýþ\n");
    printf("---------Para Birimleri---------\n");

    sleep(1);
    printf("Seçiminizi yapýn \n --> ");
    scanf("%d", &secim); // KULLANICIDAN VERÝ AL

    switch (secim) {
        ///////////////////////////////////////////////////////////////////////////////////
        case 1: // komut1
            printf("Kaç dolarýnýz var: ");
            scanf("%d", &sayi1);
            toplam = sayi1 * dolar; // topla
            printf("%d dolar, %.2f Türk Lirasýna eþittir.\n", sayi1, toplam);
            break;
        ///////////////////////////////////////////////////////////////////////////////////

        case 2: // komut2
            printf("Kaç euronuz var: ");
            scanf("%d", &sayi1); // kullanýcýdan veri al
            toplam = sayi1 * euro; // topla
            printf("%d euro, %.2f Türk Lirasýna eþittir.\n", sayi1, toplam);
            break;
        ///////////////////////////////////////////////////////////////////////////////////

        case 3: // komut3
            printf("Kaç sterlininiz var: ");
            scanf("%d", &sayi1);
            toplam = sayi1 * sterlin; // topla
            printf("%d sterlin, %.2f Türk Lirasýna eþittir.\n", sayi1, toplam);
            break;
        ///////////////////////////////////////////////////////////////////////////////////

        case 4: // komut4
            printf("Kaç bitcoininiz var: ");
            scanf("%d", &sayi1);
            toplam = sayi1 * bitcoin; // topla
            printf("%d bitcoin, %.2f Türk Lirasýna eþittir.\n", sayi1, toplam);
            break;
        ///////////////////////////////////////////////////////////////////////////////////

        case 5: // komut5
            printf("Çýkýþ yapýlýyor...\n");
            sleep(1); // 1 saniye bekle
            printf("Hayýrlý günler dileriz.\n");
            break;
        ///////////////////////////////////////////////////////////////////////////////////
    }

    return 0;
}
// alcidi
