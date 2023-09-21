
//header file..
#include<stdio.h>
#include<string.h>
#include<time.h>
#include<conio.h>
#include<stdlib.h>

//file pointer..
FILE *fp;

//prototype of all function..
void heading();
void instruction();
void mainMenu();
void Speed_Test();
void calculation();

//globally declare
int duration, wrong=0, score;
char user_name[30];

//This is our main function...
int main()
{
    heading();
    mainMenu();

    return 0;
}

//define mainMenu function...
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

    for(int i=0; i<20; i++){
        printf("%c", c_massage[i]);
        for(int j=0; j<10099990; j++){
            j++;j--;
        }
    }
    //input choice..
    fflush(stdin);
    scanf("%d", &choice);

    if(choice ==1 ){
        Speed_Test();
    }
    else if(choice == 2){
        system("cls");
        char uname[50];
        int c_choice;
        char footer[]={"Press 0 For Go To Main Menu : "};

        fp=fopen("score.txt","r");
        printf("\n\nUser Name & Score\n\n");
        while(fgets(uname,50,fp)!= NULL){
            printf("\t%s",uname);
        }
        fclose(fp);

        printf("\n\n\t");
        for(int i=0; i<30; i++){
            printf("%c", footer[i]);
            for(int j=0; j<7099990; j++){
                j++;j--;
            }
        }
        scanf("%d", &c_choice);

        if(c_choice == 0)
            mainMenu();
    }
    else if(choice == 3){
        int c_choice;
        char footer[]={"Press 0 For Go To Main Menu : "};
        instruction();

        printf("\n\n\t");
        for(int i=0; i<30; i++){
            printf("%c", footer[i]);
            for(int j=0; j<7099990; j++){
                j++;j--;
            }
        }
        scanf("%d", &c_choice);

        if(c_choice == 0)
            mainMenu();
    }
    else if(choice == 4){
        system("cls");
        char lastm[]= {"Thanks for visit to Typing Speed Tester"};
        printf("\n\n\n\n\n\n\t\t\t");
        for(int i=0; i<39; i++){
            printf("%c", lastm[i]);
            for(double i=0; i<5000000; i++){
                i++;i--;
            }
        }
        printf("\n");

        char lastn[9]= {"Wait...."};
        printf("\n\n\t\t\t\t\t");
        for(int i=0; i<8; i++){
            printf("%c", lastn[i]);
            for(double i=0; i<50000000; i++){
                i++;i--;
            }
        }
        printf("\n\n\n\n\n\n\n");
        for(int i=1; i<1e9; i++){

        }
        exit(0);
    }

}

//Define heading function..
void heading()
{
    int i;
    char massage[] = {"Welcome To Typing Speed Tester"};

    printf("\n\n\n\n\t");
    for(i=0; i<30; i++){
        printf("%c", massage[i]);
        for(int j=0; j<10099990; j++){
            j++;j--;
        }
    }
    getch();
    instruction();
    printf("\n\nTo open Enter User Name : ");
    fflush(stdin);
    gets(user_name);
}

//Define instruction function...
void instruction()
{
    system("cls");

    printf("\t\t**SHORT INSTRUCTION**\n\n");

    printf("# This project is useful to test/measure the typing\n");
    printf("  speed of a user.\n");
    printf("# User must use a whitespace (\" \") between two letter.\n");
    printf("# User must type all letter according the Display.\n");
    printf("# It shows Percentage, Score and LPM(Letter Per Minute).\n");
}


//define sample function...
void Speed_Test()
{
    int chk[10];
    srand(time(0));
    for(int i=0; i<3; i++){
        for(int j=0; j<10099990; j++){
            j++;j--;
        }
        chk[i] = rand()%10;
    }

    system("cls");

    time_t start, end;
    start = time(NULL);

    //INITIALIZE 3 LINE TO TEST..
    char line1[] = {"A B C D E F G H I J K L M N O P"};
    char line2[] = {"A b C d E f G h I j K l M n O p"};
    char line3[] = {"a b C d e F g h I j k L m n O p"};
    char line4[] = {"a b c D E F g h i J K L m n o P"};
    char line5[] = {"P o N m L k J i H g F e D c B a"};
    char line6[] = {"P O N m L k J I H g F E D c B a"};
    char line7[] = {"a B C d e g F h I j k l m P n O"};
    char line8[] = {"h i J K L m a B C d a e D c B F"};
    char line9[] = {"g h i d e h i J K L m L m n O p"};
    char line10[] = {"m L k J i H g h I j k F g h I j"};

    //SHOW THIS WHEN USER START TEST...
    for(int i=0; i<3; i++){
        if(chk[i]==0){
            printf("\n\n");

            printf("\t\t\t");
            printf("%s", line1);
        }
        else if(chk[i]==1){
            printf("\n\n");

            printf("\t\t\t");
            printf("%s", line2);
        }
        else if(chk[i]==2){
            printf("\n\n");

            printf("\t\t\t");
            printf("%s", line3);
        }
        else if(chk[i]==3){
            printf("\n\n");

            printf("\t\t\t");
            printf("%s", line4);
        }
        else if(chk[i]==4){
            printf("\n\n");

            printf("\t\t\t");
            printf("%s", line5);
        }
        else if(chk[i]==5){
            printf("\n\n");

            printf("\t\t\t");
            printf("%s", line6);
        }
        else if(chk[i]==6){
            printf("\n\n");

            printf("\t\t\t");
            printf("%s", line7);
        }
        else if(chk[i]==7){
            printf("\n\n");

            printf("\t\t\t");
            printf("%s", line8);
        }
        else if(chk[i]==8){
            printf("\n\n");

            printf("\t\t\t");
            printf("%s", line9);
        }
        else if(chk[i]==9){
            printf("\n\n");

            printf("\t\t\t");
            printf("%s", line10);
        }
    }

    printf("\nType Here..\n\n");

    //INPUT FROM USER...
    char testL1[32];
    char testL2[32];
    char testL3[32];

    //1st line input from user...
    if(chk[0]==0){
        fflush(stdin);
        for(int i=0; i<sizeof(line1)-1; i++){
            scanf("%c", &testL1[i]);
            if(testL1[i]!=line1[i])
                wrong++;
        }
    }
    else if(chk[0]==1){
        fflush(stdin);
        for(int i=0; i<sizeof(line1)-1; i++){
            scanf("%c", &testL1[i]);
            if(testL1[i]!=line2[i])
                wrong++;
        }
    }
    else if(chk[0]==2){
        fflush(stdin);
        for(int i=0; i<sizeof(line1)-1; i++){
            scanf("%c", &testL1[i]);
            if(testL1[i]!=line3[i])
                wrong++;
        }
    }
    else if(chk[0]==3){
        fflush(stdin);
        for(int i=0; i<sizeof(line1)-1; i++){
            scanf("%c", &testL1[i]);
            if(testL1[i]!=line4[i])
                wrong++;
        }
    }
    else if(chk[0]==4){
        fflush(stdin);
        for(int i=0; i<sizeof(line1)-1; i++){
            scanf("%c", &testL1[i]);
            if(testL1[i]!=line5[i])
                wrong++;
        }
    }
    else if(chk[0]==5){
        fflush(stdin);
        for(int i=0; i<sizeof(line1)-1; i++){
            scanf("%c", &testL1[i]);
            if(testL1[i]!=line6[i])
                wrong++;
        }
    }
    else if(chk[0]==6){
        fflush(stdin);
        for(int i=0; i<sizeof(line1)-1; i++){
            scanf("%c", &testL1[i]);
            if(testL1[i]!=line7[i])
                wrong++;
        }
    }
    else if(chk[0]==7){
        fflush(stdin);
        for(int i=0; i<sizeof(line1)-1; i++){
            scanf("%c", &testL1[i]);
            if(testL1[i]!=line8[i])
                wrong++;
        }
    }
    else if(chk[0]==8){
        fflush(stdin);
        for(int i=0; i<sizeof(line1)-1; i++){
            scanf("%c", &testL1[i]);
            if(testL1[i]!=line9[i])
                wrong++;
        }
    }
    else if(chk[0]==9){
        fflush(stdin);
        for(int i=0; i<sizeof(line1)-1; i++){
            scanf("%c", &testL1[i]);
            if(testL1[i]!=line10[i])
                wrong++;
        }
    }

    //2nd line input from user...
    if(chk[1]==0){
        fflush(stdin);
        for(int i=0; i<sizeof(line1)-1; i++){
            scanf("%c", &testL2[i]);
            if(testL2[i]!=line1[i])
                wrong++;
        }
    }
    else if(chk[1]==1){
        fflush(stdin);
        for(int i=0; i<sizeof(line1)-1; i++){
            scanf("%c", &testL2[i]);
            if(testL2[i]!=line2[i])
                wrong++;
        }
    }
    else if(chk[1]==2){
        fflush(stdin);
        for(int i=0; i<sizeof(line1)-1; i++){
            scanf("%c", &testL2[i]);
            if(testL2[i]!=line3[i])
                wrong++;
        }
    }
    else if(chk[1]==3){
        fflush(stdin);
        for(int i=0; i<sizeof(line1)-1; i++){
            scanf("%c", &testL2[i]);
            if(testL2[i]!=line4[i])
                wrong++;
        }
    }
    else if(chk[1]==4){
        fflush(stdin);
        for(int i=0; i<sizeof(line1)-1; i++){
            scanf("%c", &testL2[i]);
            if(testL2[i]!=line5[i])
                wrong++;
        }
    }
    else if(chk[1]==5){
        fflush(stdin);
        for(int i=0; i<sizeof(line1)-1; i++){
            scanf("%c", &testL2[i]);
            if(testL2[i]!=line6[i])
                wrong++;
        }
    }
    else if(chk[1]==6){
        fflush(stdin);
        for(int i=0; i<sizeof(line1)-1; i++){
            scanf("%c", &testL2[i]);
            if(testL2[i]!=line7[i])
                wrong++;
        }
    }
    else if(chk[1]==7){
        fflush(stdin);
        for(int i=0; i<sizeof(line1)-1; i++){
            scanf("%c", &testL2[i]);
            if(testL2[i]!=line8[i])
                wrong++;
        }
    }
    else if(chk[1]==8){
        fflush(stdin);
        for(int i=0; i<sizeof(line1)-1; i++){
            scanf("%c", &testL2[i]);
            if(testL2[i]!=line9[i])
                wrong++;
        }
    }
    else if(chk[1]==9){
        fflush(stdin);
        for(int i=0; i<sizeof(line1)-1; i++){
            scanf("%c", &testL2[i]);
            if(testL2[i]!=line10[i])
                wrong++;
        }
    }

    //3rd line input from user...
    if(chk[2]==0){
        fflush(stdin);
        for(int i=0; i<sizeof(line1)-1; i++){
            scanf("%c", &testL3[i]);
            if(testL3[i]!=line1[i])
                wrong++;
        }
    }
    else if(chk[2]==1){
        fflush(stdin);
        for(int i=0; i<sizeof(line1)-1; i++){
            scanf("%c", &testL3[i]);
            if(testL3[i]!=line2[i])
                wrong++;
        }
    }
    else if(chk[2]==2){
        fflush(stdin);
        for(int i=0; i<sizeof(line1)-1; i++){
            scanf("%c", &testL3[i]);
            if(testL3[i]!=line3[i])
                wrong++;
        }
    }
    else if(chk[2]==3){
        fflush(stdin);
        for(int i=0; i<sizeof(line1)-1; i++){
            scanf("%c", &testL3[i]);
            if(testL3[i]!=line4[i])
                wrong++;
        }
    }
    else if(chk[2]==4){
        fflush(stdin);
        for(int i=0; i<sizeof(line1)-1; i++){
            scanf("%c", &testL3[i]);
            if(testL3[i]!=line5[i])
                wrong++;
        }
    }
    else if(chk[2]==5){
        fflush(stdin);
        for(int i=0; i<sizeof(line1)-1; i++){
            scanf("%c", &testL3[i]);
            if(testL3[i]!=line6[i])
                wrong++;
        }
    }
    else if(chk[2]==6){
        fflush(stdin);
        for(int i=0; i<sizeof(line1)-1; i++){
            scanf("%c", &testL3[i]);
            if(testL3[i]!=line7[i])
                wrong++;
        }
    }
    else if(chk[2]==7){
        fflush(stdin);
        for(int i=0; i<sizeof(line1)-1; i++){
            scanf("%c", &testL3[i]);
            if(testL3[i]!=line8[i])
                wrong++;
        }
    }
    else if(chk[2]==8){
        fflush(stdin);
        for(int i=0; i<sizeof(line1)-1; i++){
            scanf("%c", &testL3[i]);
            if(testL3[i]!=line9[i])
                wrong++;
        }
    }
    else if(chk[2]==9){
        fflush(stdin);
        for(int i=0; i<sizeof(line1)-1; i++){
            scanf("%c", &testL3[i]);
            if(testL3[i]!=line10[i])
                wrong++;
        }
    }
    end = time(NULL);
    duration = difftime(end, start);

    calculation();
}

//define calcultion function....
void calculation()
{
    double percent, right;
    int LPM, a_choice;
    char s_ch = '%';

    right = 48-wrong;
    percent = (100.0*right)/48;

    if(100 >= percent && percent >= 90)
        score = 100;
    else if(90 > percent && percent >= 80)
        score = 90;
    else if(80 > percent && percent >= 70)
        score = 80;
    else if(70 > percent && percent >= 60)
        score = 70;
    else if(60 > percent && percent >= 50)
        score = 60;
    else if(50 > percent && percent >= 40)
        score = 50;
    else if(40 > percent && percent >= 30)
        score = 40;
    else if(30 > percent && percent >= 20)
        score = 30;
    else if(20 > percent && percent >= 10)
        score = 20;
    else if(10 > percent && percent >= 1)
        score = 10;
    else
        score = 0;

    LPM = (48*60)/duration;

//printing users result...
    system("cls");
    char s_massage[]={"Mr. "};
    char r_massage[]={" Here is Result"};

    printf("\n\n\t\t");
    for(int i =0; i<4; i++){
        printf("%c", s_massage[i]);
        for(int j=0; j<10099990; j++){
            j++;
            j--;
        }
    }
    for(int i =0; i<strlen(user_name); i++){
        printf("%c", user_name[i]);
        for(int j=0; j<10099990; j++){
            j++;
            j--;
        }
    }
    for(int i=0; i<15; i++){
        printf("%c", r_massage[i]);
        for(int j=0; j<10099990; j++){
            j++;
            j--;
        }
    }

    printf("\n\n\tPercentage Of Right is  : %.2lf%c", percent, s_ch);
    printf("\n\tLetter Per Minute is    : %d", LPM);
    printf("\n\tTotal Score of Yours is : %d\n", score);


    fp=fopen("score.txt","a");
    fprintf(fp, "%s (%d)\n", user_name,score);
    fclose(fp);


    char footer[]={"If Test Again Press 1If go to Main Menu Press 2Enter Your Choice :"};
    printf("\n\n\t");
    for(int i=0; i<21; i++){
        printf("%c", footer[i]);
        for(int j=0; j<7099990; j++){
            j++;
            j--;
        }
    }
    printf("\n\t");
    for(int i=21; i<47; i++){
        printf("%c", footer[i]);
        for(int j=0; j<7099990; j++){
            j++;
            j--;
        }
    }
    printf("\n\n\t");
    for(int i=47; i<66; i++){
        printf("%c", footer[i]);
        for(int j=0; j<7099990; j++){
            j++;
            j--;
        }
    }
    scanf("%d", &a_choice);
    if(a_choice == 1){
        wrong =0;
        Speed_Test();
    }

    else if(a_choice ==2)
        mainMenu();
}