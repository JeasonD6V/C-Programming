#include <stdio.h>
#include <stdbool.h>
#include <stdlib.h>
#include <time.h>
#include <Windows.h>

void loading_bar(const char* task, int upper_limit, int delay) {
    printf("%s:\n", task);
    int i;
    for (i = 0; i <= upper_limit; i++) {
        printf("[");
        int j;
        for (j = 0; j < i; j++) {
            printf("=");
        }
        printf(">");
        for (j = i; j < upper_limit; j++) {
            printf(" ");
        }
        printf("] %d%%", (i * 100) / upper_limit);
        fflush(stdout);
        Sleep(delay);
        printf("\r");
    }
    printf("|||| DONE ||||\n");
    Beep(350, 350);
}

int main() {

    Beep(250, 10);
    printf("                        ______\n");
    printf("                    .-\"      \"-.\n");
    printf("                   /            \\\n");
    printf("       _          |              |          _\n");
    printf("      ( \\         |,  .-.  .-.  ,|         / )\n");
    printf("       > \"=._     | )(__/  \\__)( |     _.=\" <\n");
    printf("      (_/\"=._\"=._ |/     /\\     \\| _.=\"_.=\"\\_)\n");
    printf("             \"=._ (_     ^^     _)\"_.=\"\n");
    printf("                 \"=\\__|IIIIII|__/=\"\n");
    printf("                _.=\"| \\IIIIII/ |\"=._\n");
    printf("      _     _.=\"_.=\"\\          /\"=._\"=._     _\n");
    printf("     ( \\_.=\"_.=\"     `--------`     \"=._\"=._/ )\n");
    printf("      > _.=\"                            \"=._ <\n");
    printf("     (_/       	Jeason VIRUS       \\_)\n\n");
    Beep(250, 10);

    HANDLE hConsole = GetStdHandle(STD_OUTPUT_HANDLE);
    SetConsoleTextAttribute(hConsole, FOREGROUND_RED);

    Beep(3500, 2000);
    printf("\t\n !!!! WARNING: YOUR SYSTEM IS INFECTED WITH JeasonDEV VIRUS !!!! \n");
    SetConsoleTextAttribute(hConsole, FOREGROUND_RED | FOREGROUND_GREEN | FOREGROUND_BLUE);

    SetConsoleTextAttribute(hConsole, FOREGROUND_GREEN);
    SetConsoleTextAttribute(hConsole, FOREGROUND_RED | FOREGROUND_GREEN | FOREGROUND_BLUE);
    printf("    (YOUR IP ADDRESS HAS BEEN EXPOSED) \n");
    Beep(350, 1000);

    printf("    (YOUR CAMERA FOOTAGE HAS BEEN CAPTURED)\n");
    Beep(350, 1000);

    printf("    (YOUR GOOGLE HISTORY IS SPREADING) \n");
    Beep(350, 1000);

    printf("    (YOUR ADDRESS IS SPREADING)   \n");
    Beep(350, 1000);

    printf("    (ALL FILES ARE BEING ERASED!)   \n");
    Beep(350, 1000);

    SetConsoleTextAttribute(hConsole, FOREGROUND_GREEN);

    SetConsoleTextAttribute(hConsole, FOREGROUND_RED | FOREGROUND_GREEN | FOREGROUND_BLUE);
    printf("\nANTIVIRUS : Follow the steps below to stop it:\n");
    printf("\nANTIVIRUS : Your computer will keep spreading and your session will end if you don't write this code.\n");
    SetConsoleTextAttribute(hConsole, FOREGROUND_GREEN);
    printf("Your session will crash if you miss or enter the wrong code!");
    printf("\nType this code to get rid of the virus! ----> ||| 0299302568460 |||\n");
    Beep(3500, 2000);

    bool isCommandEntered = false;

    while (!isCommandEntered) {
        printf("-->");
        fflush(stdout);

        char command[50];
        fgets(command, sizeof(command), stdin);

        command[strcspn(command, "\n")] = '\0';

        if (strlen(command) > 0) {
            isCommandEntered = true;
            printf("Entered command: %s\n", command);

            if (strcmp(command, "0299302568460") == 0) {
                printf("\nCongratulations, Jeason virus is being removed\n");

                loading_bar("System is booting up", 50, 100);
                loading_bar("Security check is being performed", 50, 100);
                loading_bar("Your IP address is being protected", 50, 100);
                loading_bar("Everything is being restored to its previous state", 50, 100);
                loading_bar("Your computer is now virus-free!", 50, 100);
                printf("        _____\n");
                printf("     .-\"     \"-.\n");
                printf("    /           \\\n");
                printf("   |             |\n");
                printf("   |   o     o   |\n");
                printf("   |      ^      |\n");
                printf("   |  \\_____/  |\n");
                printf("    \\_________/\n");
                printf("       _|_|_\n");
                printf("      (_____)\n");
                
                printf("\nYOUR COMPUTER IS FREE FROM VIRUSES (:\n");
                printf("YOUR COMPUTER IS FREE FROM VIRUSES (:\n");
                printf("YOUR COMPUTER IS FREE FROM VIRUSES (:\n");
            } else {
                printf("Wrong command! Your computer is shutting down...\n");
                Beep(3500, 2000);

                int j = 0;
                while (1) {
                    printf("Closing your session...\n");
                    SetConsoleTextAttribute(hConsole, FOREGROUND_RED | FOREGROUND_GREEN | FOREGROUND_BLUE);
                    printf("Closing your session...\n");
                    SetConsoleTextAttribute(hConsole, FOREGROUND_GREEN);
                    printf("Closing your session...\n");
                    printf("Closing your session...\n");
                    SetConsoleTextAttribute(hConsole, FOREGROUND_RED | FOREGROUND_GREEN | FOREGROUND_BLUE);
                    printf("Closing your session...\n");
                    SetConsoleTextAttribute(hConsole, FOREGROUND_RED);
                    printf("Closing your session...\n");
                    printf("Closing your session...\n");
                        printf("                        ______\n");
    printf("                    .-\"      \"-.\n");
    printf("                   /            \\\n");
    printf("       _          |              |          _\n");
    printf("      ( \\         |,  .-.  .-.  ,|         / )\n");
    printf("       > \"=._     | )(__/  \\__)( |     _.=\" <\n");
    printf("      (_/\"=._\"=._ |/     /\\     \\| _.=\"_.=\"\\_)\n");
    printf("             \"=._ (_     ^^     _)\"_.=\"\n");
    printf("                 \"=\\__|IIIIII|__/=\"\n");
    printf("                _.=\"| \\IIIIII/ |\"=._\n");
    printf("      _     _.=\"_.=\"\\          /\"=._\"=._     _\n");
    printf("     ( \\_.=\"_.=\"     `--------`     \"=._\"=._/ )\n");
    printf("      > _.=\"                            \"=._ <\n");
    printf("     (_/       	Jeason VIRUS       \\_)\n\n");
                  printf("Closing your session...\n");
                    SetConsoleTextAttribute(hConsole, FOREGROUND_GREEN | FOREGROUND_RED | FOREGROUND_BLUE);
                    printf("Closing your session...\n");
                    SetConsoleTextAttribute(hConsole, FOREGROUND_GREEN);
                    printf("Closing your session...\n");
                    printf("Closing your session...\n");
                    SetConsoleTextAttribute(hConsole, FOREGROUND_RED | FOREGROUND_GREEN | FOREGROUND_BLUE);
                    printf("Closing your session...\n");
                    SetConsoleTextAttribute(hConsole, FOREGROUND_RED);
                    printf("Closing your session...\n");
                    printf("Closing your session...\n");
                    j++;
                }
            }
        }
    }

    Beep(350, 200);

    return 0;
}
