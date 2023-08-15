#include <stdio.h>

int main() {
    char* dizi[] = {"H", "E", "L", "L", "O"," " ,"W", "O","R","L","D"};
    int i, j;

    for (i = 0; i < 11; i++) {
        for (j = 0; j <= i; j++) {
            printf("%s", dizi[j]);
        }
        printf("\n");
    }

    for (i = 10; i >= 0; i--) {
        for (j = 0; j <= i; j++) {
            printf("%s", dizi[j]);
        }
        printf("\n");
    }

    return 0;
}
/*
H
HE
HEL
HELL
HELLO
HELLO W
HELLO WO
HELLO WOR
HELLO WORL
HELLO WORLD
HELLO WORL
HELLO WOR
HELLO WO
HELLO W
HELLO
HELL
HEL
HE
H 
 
