#include <stdio.h>
#include <stdlib.h>

struct bookInfo
{
    char bookTitle[100];
    char author[100];
    float price;
    float rating;
};

void printBookInfo(struct bookInfo bi) {
    printf("---------------------------------------------\n");
    printf("Book Title: %s\n", bi.bookTitle);
    printf("Author: %s\n", bi.author);
    printf("Price: $%.2f\n", bi.price);
    printf("Rating: %.1f\n", bi.rating);
    printf("---------------------------------------------\n");
}

int main() {
    struct bookInfo books[3] = {
        {"The Art and Science of C", "Eric S. Roberts", 34.99, 4.6},
        {"C Programming for Beginners", "Dan Gookin", 23.50, 6.4},
        {"C Programming Essentials", "Neil Matthew", 45.25, 10.0}
    };

    int i;
    for (i = 0; i < 3; i++) {
        printBookInfo(books[i]);
    }

    return 0;
}

