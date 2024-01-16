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

// Function declarations
void generateBillHeader(char name[50], char date[30]);
void generateBillBody(char item[30], int qty, float price);
void generateBillFooter(float total);

int main()
{
    printf("#############################################################################################\n");
    printf("##                                                                                         ##\n");
    printf("##                     -----BUBT Restaurant Bill Management System------                   ##\n");
    printf("##                                                         10~Discount for BUBT student    ##\n");
    printf("#############################################################################################\n");

    int opt;
    char contFlag = 'y';
    char name[50];
    FILE *fp;

    struct orders ord;
    struct orders order;
    char saveBill = 'y';

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
            printf("\nPlease enter the name of the customer: ");
            fgets(ord.customer, 50, stdin);
            ord.customer[strlen(ord.customer) - 1] = 0;
            strcpy(ord.date, __DATE__);
            printf("\nPlease enter the number of items: ");
            scanf("%d", &ord.numOfItems);

            for (int i = 0; i < ord.numOfItems; i++)
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
                    strcpy(ord.itm[i].item, menuItems[selectedItem - 1].item);
                    printf("Please enter the quantity: ");
                    scanf("%d", &ord.itm[i].qty);
                    ord.itm[i].price = menuItems[selectedItem - 1].price;
                    total += ord.itm[i].qty * ord.itm[i].price;
                }
                else
                {
                    printf("Invalid item selection. Please choose an item from the menu.\n");
                    i--; // Retry the same item
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
                fp = fopen("RestaurantBill.txt", "a+");
                fwrite(&ord, sizeof(struct orders), 1, fp);
                if (fwrite != 0)
                    printf("\nInvoice successfully saved");
                else
                    printf("\nError saving invoice");
                fclose(fp);
            }
            break;

        case 2:
            fp = fopen("RestaurantBill.txt", "r");
            printf("\n  *****Your Previous Invoices*****\n");
            while (fread(&order, sizeof(struct orders), 1, fp))
            {
                float tot = 0;
                generateBillHeader(order.customer, order.date);
                for (int i = 0; i < order.numOfItems; i++)
                {
                    generateBillBody(order.itm[i].item, order.itm[i].qty, order.itm[i].price);
                    tot += order.itm[i].qty * order.itm[i].price;
                }
                generateBillFooter(tot);
            }
            fclose(fp);
            break;

        case 3:
            printf("Enter the name of the customer:\t");
            fgets(name, 50, stdin);
            name[strlen(name) - 1] = 0;
            fp = fopen("RestaurantBill.txt", "r");

            printf("\t*****Invoice of %s*****", name);
            while (fread(&order, sizeof(struct orders), 1, fp))
            {
                float tot = 0;
                if (strstr(order.customer, name) != NULL)
                {
                    generateBillHeader(order.customer, order.date);
                    for (int i = 0; i < order.numOfItems; i++)
                    {
                        generateBillBody(order.itm[i].item, order.itm[i].qty, order.itm[i].price);
                        tot += order.itm[i].qty * order.itm[i].price;
                    }
                    generateBillFooter(tot);
                    invoiceFound = 1;
                }
            }
            if (!invoiceFound)
            {
                printf("Sorry the invoice for %s does not exist", name);
            }
            fclose(fp);
            break;

        case 4:
            printf("\n\t\t Bye Bye :)\n\n");
            exit(0);
            break;

        case 5:
            printf("We are 5 members in our team.");
            printf("\n1. KAMRUL(474)\n2. KANIZ\n3. SADIA\n4. MAYMUNA\n5. LABI-BA");
            break;

        default:
            printf("Sorry invalid option");
            break;
        }
        printf("\nDo you want to perform another operation?[y/n]:\t");
        scanf(" %c", &contFlag);
    }

    printf("\n\t\t Bye Bye :)\n\n");
    printf("\n\n");
    printf("Are you Interested About our Team");

    return 0;
}
