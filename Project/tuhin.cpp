
#include <stdio.h>
#include <string.h>
#include <stdlib.h>

struct items
{
    char item[20];
    float price;
    int qty;
};

struct orders
{
    char customer[50];
    char date[50];
    int numOfItems;
    struct items itm[50];
};
// functions to generate biils
void generateBillHeader(char name[50], char date[30])
{
    printf("\n\n");
    printf("\t    BUBT Restaurant Bill Management system...... ");
    printf("\n\t   -----------------");
    printf("\nDate:%s", date); // Time and Date ,,,,,,,,,
    printf("\nInvoice To: %s", name);
    printf("\n");
    printf("---------------------------------------\n");
    printf("Items\t\t");
    printf("Qty\t\t");
    printf("Total\t\t");
    printf("\n---------------------------------------");
    printf("\n\n");
}
void generateBillBody(char item[30], int qty, float price)
{ // fast time 30 item order...........
    printf("%s\t\t", item);
    printf("%d\t\t", qty);
    printf("%.2f\t\t", qty * price);
    printf("\n");
}

void generateBillFooter(float total)
{
    printf("\n");
    float dis = 0.1 * total; // Discount all time 10% for all BUBT student...........
    float netTotal = total - dis;
    // float cgst=0.09*netTotal,grandTotal=netTotal + 2*cgst;//netTotal + cgst + sgst
    printf("---------------------------------------\n");
    printf("Sub Total\t\t\t%.2f", total);
    printf("\nDiscount @10%s\t\t\t%.2f", "%", dis);
    printf("\n\t\t------------------------");
    printf("\nNet Total\t\t\t%.2f", netTotal);
    // printf("\nCGST @9%s\t\t\t%.2f","%",cgst);
    // printf("\nSGST @9%s\t\t\t%.2f","%",cgst);
    // printf("\n---------------------------------------");
    // printf("\nGrand Total\t\t\t%.2f",grandTotal);
    printf("\n---------------------------------------\n");
}
int main()
{
    printf("#############################################################################################\n");
    printf("##                                                                                         ##\n");
    printf("##                     -----BUBT Restaurant Bill Management System------                   ##\n");
    printf("##                                                         10~Discount for BUBT student    ##\n");
    printf("#############################################################################################\n");
    int opt, n;
    system("clear");
    struct orders ord;
    // struct orders ord;
    char saveBill = 'y', contFlag = 'y';
    char name[50];
    FILE *fp;

    // Menu items
    struct items menuItems[] = {
        {"Pizza", 150.00, 0},
        {"Pancakes", 200.00, 0},
        {"Burger", 120.00, 0},
        {"Ice Cream", 60.00, 0},
        {"Chicken Wings", 150.00, 0},
        {"Tacos", 200.00, 0},
        {"Lasagna", 230.00, 0},
        {"Spaghetti", 300.00, 0},
        {"Salad", 340.00, 0},
    };
    int numMenuItems = sizeof(menuItems) / sizeof(menuItems[0]);

    while (contFlag == 'y')
    {
        system("clear");
        float total = 0;
        int invoiceFound = 0;
        printf("\n\n\t\t1. Menu Card......\n\n");
        for (int j = 0; j < numMenuItems; j++)
        {
            printf(" ** %s - %.2f\n", menuItems[j].item, menuItems[j].price);
        }

        printf("\n2. Show all Invoices");
        printf("\n3. Search Invoice");
        printf("\n4. Exit");
        printf("\n5. About Our Team");

        printf("\n\nYour choice: ");
        scanf("%d", &opt);
        fgetc(stdin);

        switch (opt)
        {
        case 1:
            // system("clear");
            printf("\nPlease enter the name of the customer: ");
            fgets(ord.customer, 50, stdin);
            ord.customer[strlen(ord.customer) - 1] = 0;
            strcpy(ord.date, __DATE__);
            printf("\nPlease enter the number of items: ");
            scanf("%d", &n);
            ord.numOfItems = n;

            for (int i = 0; i < n; i++) // i = 0,1,2           //n = 2;
            {
                fgetc(stdin);
                printf("\n\n");
                printf("Please select an item from the menu (1-%d): \n", numMenuItems);
                for (int j = 0; j < numMenuItems; j++)
                {
                    printf("%d. %s - %.2f\n", j + 1, menuItems[j].item, menuItems[j].price);
                }
                int selectedItem;
                scanf("%d", &selectedItem);
                if (selectedItem >= 1 && selectedItem <= numMenuItems)
                {
                    strcpy(ord.itm[i].item, menuItems[selectedItem - 1].item); // ord.itm[0].item = iceCream// ord.itm[1].item = pizza
                    printf("Please enter the quantity: ");
                    scanf("%d", &ord.itm[i].qty);                         // kotogulo Quantity = 3// kotogulo Quantity = 2
                    ord.itm[i].price = menuItems[selectedItem - 1].price; //  ord.itm[i].price = 50.00 // ord.itm[i].price = 150.00
                    total += ord.itm[i].qty * ord.itm[i].price;           // total = 0,   total = 0+ 3*50.00 = 150.00 // total = 150.00 + 2*150.00 = 450.00
                }
                else
                {
                    printf("Invalid item selection. Please choose an item from the menu.\n");
                    i--;
                }
            }

            generateBillHeader(ord.customer, ord.date);
            for (int i = 0; i < ord.numOfItems; i++)
            {
                generateBillBody(ord.itm[i].item, ord.itm[i].qty, ord.itm[i].price);
            }
            generateBillFooter(total);

            printf("\nDo you want to save the invoice [y/n]: ");
            scanf(" %c", &saveBill);

            if (saveBill == 'y')
            {
                fp = fopen("RestaurantBill.txt", "a+");     /// a+ = append  //fopen = file open
                fwrite(&ord, sizeof(struct orders), 1, fp); // fwrite = file write
                if (fwrite != NULL)
                    printf("\nInvoice successfully saved");
                else
                    printf("\nError saving invoice");
                fclose(fp); // fclose = file close
            }
            break;

        case 2:
            system("clear");
            fp = fopen("RestaurantBill.txt", "r"); // r = read
            if (fp == NULL)
            {
                printf("Failed to open file\n");
                return 1; // Or handle error appropriately
            }
            printf("\n  *****Your Previous Invoices*****\n");
            while (fread(&ord, sizeof(struct orders), 1, fp))
            {
                float tot = 0;
                generateBillHeader(ord.customer, ord.date);
                for (int i = 0; i < ord.numOfItems; i++)
                {
                    generateBillBody(ord.itm[i].item, ord.itm[i].qty, ord.itm[i].price);
                    tot += ord.itm[i].qty * ord.itm[i].price;
                }
                generateBillFooter(tot);
            }
            fclose(fp);
            break;

        case 3:
            printf("Enter the name of the customer:\t");
            // fgetc(stdin);
            fgets(name, 50, stdin);
            name[strlen(name) - 1] = 0;
            system("clear");
            fp = fopen("RestaurantBill.txt", "r");

            printf("\t*****Invoice of %s*****", name);
            while (fread(&ord, sizeof(struct orders), 1, fp))
            {
                float tot = 0;
                if (strstr(ord.customer, name) != NULL)
                {
                    generateBillHeader(ord.customer, ord.date);
                    for (int i = 0; i < ord.numOfItems; i++)
                    {
                        generateBillBody(ord.itm[i].item, ord.itm[i].qty, ord.itm[i].price);
                        tot += ord.itm[i].qty * ord.itm[i].price;
                    }
                    generateBillFooter(tot);
                    invoiceFound = 1;
                }
            }
            if (!invoiceFound)
            {
                printf("Sorry the invoice for %s does not exists", name);
            }
            fclose(fp);
            break;

        case 4:
            printf("\n\t\t Bye Bye :)\n\n");
            exit(0);
            break;

        case 5:
            printf("We are 5 member in our team.");
            printf("\n1.KAMRUL(474)\n2.KANIZ\n3.SADIA\n4.MAYMUNA\n5.LABI-BA");
            break;

        default:
            printf("Sorry invalid option");
            break;
        }
        printf("\nDo you want to perform another operation?[y/n]:\t");
        scanf("%s", &contFlag);
    }
    printf("\n\t\t Bye Bye :)\n\n");
    printf("\n\n");

    printf("Are you Interested About our Team");

    return 0;
}
