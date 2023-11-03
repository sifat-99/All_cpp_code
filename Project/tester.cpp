/*
|-----------------------------------------------------------------------------------------|
| Project Name: Typing Speed Tester                                                       |
|-----------------------------------------------------------------------------------------|
| Author:                                | PROJECT SUBMISSION DATE  : 27.09.2023          |
|                                        | PROJECT ASSIGNED BY      :                     |
| Sajidul Islam Samin                    | Humayra Ahmed                                  |
| Abdur Rahman Sifat                     | Assistant Professor                            |
| Mahamudul Hasan                        | Department of Computer Science and Engineering |
| Shahriar Chowdhury                     | Bangladesh University of Business & Technology |
| Mehedi Al Mahmud                       | (BUBT)                                         |
|                                        |                                                |
|                                        |                                                |
|-----------------------------------------------------------------------------------------|
| project description: This project is a typing speed tester.                             |
| It will take a paragraph as input and then it will show the typing speed of the user.   |
| It will also show the accuracy of the user.                                             |
|-----------------------------------------------------------------------------------------|

*/

#include <bits/stdc++.h>
#include <unistd.h>
using namespace std;

string name;
void delay(unsigned int microseconds) {
    usleep(microseconds);
}
void clearScreen() {
    printf("\033[H\033[J");
}

void heading();
//void instruction();
void mainMenu();
void extras();
//void Speed_Test();
//void calculation();

int main()
{
    heading();
    mainMenu();
    extras();
    getchar();
}

void heading()
{
    int i;
    clearScreen();
    char massage[] = {"Welcome To Typing Speed Tester"};

    printf("\n\n\n\n\t\t\t\t\t\t");
    for (i = 0; i < 30; i++)
    {
        printf("%c", massage[i]);
        // for (int j = 0; j < 10099990; j++)
        // {
        //     j++;
        //     j--;
        // }
        fflush(stdout);
        usleep(100000);
    }
    cout << endl
         << endl
         << endl
         << endl;

    cout << "Enter your name to continue : ";

    cin >> name;
    cout << endl;
    cout << "Hi " << name << ","
         << " Welcome to Typing Speed Tester" << endl
         << endl;
}



void mainMenu() {
    clearScreen();
    int choice;
    char c_message[] = {"\n\n\t\t\t\t\t\t\tEnter Your Choice : "};
    char *menuText = "\n\n\t\tMenu List... Select one of them..";
    
    for (int i = 0; menuText[i] != '\0'; i++) {
        putchar(menuText[i]);
        
        fflush(stdout);
        
        usleep(50000);
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

        delay(500000);
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

        // char lastn[9] = {"Wait....."};
        // printf("\n\n\t\t\t\t\t");
        // for (int i = 0; i < 28; i++) {
        //     printf("%c", lastn[i]);
        //     delay(500000);
        // }
        // printf("\n\n\n\n\n\n\n");
        // for (int i = 1; i < 1e9; i++) {
        // }
        exit(0);
    }
}

void extras(){

    cout<<endl<<endl<<endl<<endl;
    cout<<"                                         "<<"All rights resaerved by Team 'MagPie' 2023";
    cout<<endl<<endl<<endl;
}
