#include <stdio.h>
#include <string.h>
#include <time.h>
#include <stdlib.h>
#include <unistd.h>// Include for Sleep function on Windows

// file pointer..
FILE *fp;

// ...

void mainMenu()
{
    system("cls");

    int choice;
    char c_massage[] = {"Enter Your Choice : "};

    printf("\n\n\t\tMenu List");
    printf("\n\n\t\t1. Test Speed\n");
    printf("\t\t2. User Record\n");
    printf("\t\t3. Help\n");
    printf("\t\t4. Exit\n");

    for (int i = 0; i < 20; i++)
    {
        printf("%c", c_massage[i]);
        for (int j = 0; j < 10099990; j++)
        {
            j++;
            j--;
        }
    }

    // Introduce a delay before input
    sleep(1000); // Sleep for 1 second (1000 milliseconds)

    // Input choice
    fflush(stdin);
    scanf("%d", &choice);

    // ...

    if (choice == 4)
    {
        system("cls");
        char lastm[] = {"Thanks for visiting Typing Speed Tester"};
        printf("\n\n\n\n\n\n\t\t\t");
        for (int i = 0; i < 39; i++)
        {
            printf("%c", lastm[i]);
            for (double i = 0; i < 5000000; i++)
            {
                i++;
                i--;
            }
        }
        printf("\n");

        char lastn[9] = {"Wait...."};
        printf("\n\n\t\t\t\t\t");
        for (int i = 0; i < 8; i++)
        {
            printf("%c", lastn[i]);
            for (double i = 0; i < 50000000; i++)
            {
                i++;
                i--;
            }
        }
        printf("\n\n\n\n\n\n\n");

        // Introduce a delay before exit
        sleep(2000); // Sleep for 2 seconds (2000 milliseconds)
        
        exit(0);
    }
}
