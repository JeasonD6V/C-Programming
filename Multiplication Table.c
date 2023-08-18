#include <stdio.h>

int x, y;
int main() {
    
    for (x = 1; x <= 9; x += 3) {
        for (y = 1; y <=9 ; y++) {
            printf("%2d x %2d = %3d   ", x, y, x * y);
            printf("%2d x %2d = %3d   ", x+1, y, (x+1) * y);
            printf("%2d x %2d = %3d   \n", x+2, y, (x+2) * y);
        }
        printf("\n");
    }

    return 0;
}

