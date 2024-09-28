#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>
void delay(unsigned int microseconds) {
    usleep(microseconds);
}
void clearScreen() {
    printf("\033[H\033[J");
}
void mainMenu() {
    clearScreen();
    int choice;
    char c_message[] = {"\n\n\t\t\t\t\t\t\tEnter Your Choice : "};
    char *menuText = "\n\n\t\tMenu List... Select one of them..";



    // Print the menu text

    for (int i = 0; menuText[i] != '\0'; i++) {
        putchar(menuText[i]);

        fflush(stdout);

        usleep(100000);
    }
    for (int i = 0; i < 10; i++) {
        printf(".");
        fflush(stdout);
        delay(100000);
    }

    for(int i=0; i<4; i++)
    {
        if(i==0)
        {
            printf("\n\n\t\t1. Test Speed\n\n");
        }
        else if(i==1)
        {
            printf("\t\t2. User Record\n\n");
        }
        else if(i==2)
        {
            printf("\t\t3. Help\n\n");
        }
        else
        {
            printf("\t\t4. Exit\n\n");
        }

        delay(1000000);
    }
    fflush(stdin);
    printf("\t\t\t\t\tPlease select an option: ");
    scanf("%d", &choice);
    delay(1000000);

    if (choice == 1) {
    } else if (choice == 2) {
        clearScreen();
        char uname[50];
        int c_choice;
        char footer[] = {"\nPress 0 For Go To Main Menu: "};
        printf("\n\n\t");
        for (int i = 0; i < 30; i++) {
            printf("%c", footer[i]);
            delay(100000);
        }
        scanf("%d", &c_choice);

        if (c_choice == 0) {
            mainMenu();
        }
    } else if (choice == 3) {
        int c_choice;
        char footer[] = {"Press 0 For Go To Main Menu : "};
        printf("\n\n\t");
        for (int i = 0; i < 30; i++) {
            printf("%c", footer[i]);
            delay(100000);
        }
        scanf("%d", &c_choice);

        if (c_choice == 0) {
            mainMenu();
        }
    } else if (choice == 4) {
        clearScreen();
        char lastm[] = {"Thanks for visiting Typing Speed Tester"};
        printf("\n\n\n\n\n\n\t\t\t");
        for (int i = 0; i < 39; i++) {
            printf("%c", lastm[i]);
            delay(50000);
        }
        printf("\n");

        char lastn[9] = {"Wait..........."};
        printf("\n\n\t\t\t\t\t");
        for (int i = 0; i < 28; i++) {
            printf("%c", lastn[i]);
            delay(500000);
        }
        printf("\n\n\n\n\n\n\n");
        for (int i = 1; i < 1e9; i++) {
        }
        exit(0);
    }
}

int main() {
    mainMenu();
    return 0;
}
