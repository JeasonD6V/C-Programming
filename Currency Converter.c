#include <stdio.h> // K�T�PHANE
#include <unistd.h> // K�T�PHANE
#include <locale.h> // K�T�PHANE

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
    setlocale(LC_ALL, "Turkish"); // t�rk�e yapma

    printf("---------Para Birimleri---------\n");
    printf("1 = Amerikan Dolar� (USD)\n");
    printf("2 = Euro (EUR)\n");
    printf("3 = �ngiliz Sterlini (GBP)\n");
    printf("4 = Bitcoin (BTC)\n");
    printf("5 = ��k��\n");
    printf("---------Para Birimleri---------\n");

    sleep(1);
    printf("Se�iminizi yap�n \n --> ");
    scanf("%d", &secim); // KULLANICIDAN VER� AL

    switch (secim) {
        ///////////////////////////////////////////////////////////////////////////////////
        case 1: // komut1
            printf("Ka� dolar�n�z var: ");
            scanf("%d", &sayi1);
            toplam = sayi1 * dolar; // topla
            printf("%d dolar, %.2f T�rk Liras�na e�ittir.\n", sayi1, toplam);
            break;
        ///////////////////////////////////////////////////////////////////////////////////

        case 2: // komut2
            printf("Ka� euronuz var: ");
            scanf("%d", &sayi1); // kullan�c�dan veri al
            toplam = sayi1 * euro; // topla
            printf("%d euro, %.2f T�rk Liras�na e�ittir.\n", sayi1, toplam);
            break;
        ///////////////////////////////////////////////////////////////////////////////////

        case 3: // komut3
            printf("Ka� sterlininiz var: ");
            scanf("%d", &sayi1);
            toplam = sayi1 * sterlin; // topla
            printf("%d sterlin, %.2f T�rk Liras�na e�ittir.\n", sayi1, toplam);
            break;
        ///////////////////////////////////////////////////////////////////////////////////

        case 4: // komut4
            printf("Ka� bitcoininiz var: ");
            scanf("%d", &sayi1);
            toplam = sayi1 * bitcoin; // topla
            printf("%d bitcoin, %.2f T�rk Liras�na e�ittir.\n", sayi1, toplam);
            break;
        ///////////////////////////////////////////////////////////////////////////////////

        case 5: // komut5
            printf("��k�� yap�l�yor...\n");
            sleep(1); // 1 saniye bekle
            printf("Hay�rl� g�nler dileriz.\n");
            break;
        ///////////////////////////////////////////////////////////////////////////////////
    }

    return 0;
}
// alcidi
