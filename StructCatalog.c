#include <stdio.h>

struct Book {
    int num_pages;
    int num_questions;
    char *question_type;
    char *difficulty_level;
    char *has_pictures;
    char *subject;
    double price;
};

struct Dessert {
    int num_pages;
    char *has_pictures;
    double price;
};

struct StudyTopic {
    char *subject;
    int num_pages;
    char *difficulty_level;
    double price;
};

int main() {
    struct Book test_book;
    test_book.subject = "Mathematics";
    test_book.num_pages = 460;
    test_book.num_questions = 1024;
    test_book.question_type = "test";
    test_book.difficulty_level = "%80 HARD";
    test_book.price = 290;

    struct Dessert desserts;
    desserts.num_pages = 92;
    desserts.has_pictures = "yes";
    desserts.price = 45;

    struct StudyTopic study_topic;
    study_topic.subject = "English";
    study_topic.num_pages = 145;
    study_topic.difficulty_level = "%50 MEDIUM";
    study_topic.price = 90;

    printf("TEST BOOK\n");
    printf("---------------------------------------\n");
    printf("Subject: %s\n", test_book.subject);
    printf("Price: $%.2lf\n", test_book.price);
    printf("Number of Pages: %d\n", test_book.num_pages);
    printf("Number of Questions: %d\n", test_book.num_questions);
    printf("Question Type: %s\n", test_book.question_type);
    printf("Difficulty Level: %s\n", test_book.difficulty_level);

    printf("\nDESSERTS BOOK\n");
    printf("---------------------------------------\n");
    printf("Number of Pages: %d\n", desserts.num_pages);
    printf("Has Pictures: %s\n", desserts.has_pictures);
    printf("Price: $%.2lf\n", desserts.price);

    printf("\nSTUDY TOPIC\n");
    printf("---------------------------------------\n");
    printf("Subject: %s\n", study_topic.subject);
    printf("Price: $%.2lf\n", study_topic.price);
    printf("Number of Pages: %d\n", study_topic.num_pages);
    printf("Difficulty Level: %s\n", study_topic.difficulty_level);

    return 0;
}

