#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <stdbool.h>

// Define a struct for items
struct items {
    char item[20];       // Name of the item
    float price;         // Price of the item
    int quantity;        // Quantity of the item
};

// Define a struct for orders
struct orders {
    char customer[50];   // Customer's name
    char date[50];       // Date of the order
    int numOfItems;      // Number of items in the order
    struct items itm[50];// Array to store items
};

// Function to create a bill header
void generateBillHeader(char name[50], char date[30], bool isBUBTStudent) {
    printf("\n\n");
    printf("###########################################\n");
    printf("##                                       ##\n");
    printf("##   BUBT Restaurant Bill Invoice        ##\n");
    printf("##                                       ##\n");
    printf("###########################################\n");
    printf("Date: %s\n", date);
    printf("Invoice To: %s\n", name);
    printf("-------------------------------------------\n");
    printf("Items\t\tQuantity\t\tTotal\n");
    printf("-------------------------------------------\n");

    if (isBUBTStudent) {                                              // Check if the customer is a BUBT student
        printf("You are a BUBT student. You get a 10%% discount!\n");
    }
}

                                                                      // Function to add an item to the bill
void generateBillBody(char item[30], int quantity, float price) {
    printf("%s\t\t%d\t\t%.2f\n", item, quantity, quantity * price);
}

                                                                      // Function to create a bill footer
void generateBillFooter(float total, bool isBUBTStudent) {
    float discount = 0;
    if (isBUBTStudent) {
        discount = 0.1 * total;                                       // 10% discount for BUBT students
    }
    float netTotal = total - discount;

    printf("-------------------------------------------\n");
    printf("Sub Total\t\t\t%.2f\n", total);
    if (isBUBTStudent) {
        printf("Discount @10%% (BUBT Student)\t%.2f\n", discount);
    }
    printf("\t\t------------------------\n");
    printf("Net Total\t\t\t%.2f\n", netTotal);
    printf("-------------------------------------------\n");
}

int main() {
printf("#############################################################################################\n");
printf("##                                                                                         ##\n");
printf("##                     -----BUBT Restaurant Bill Management System------                   ##\n");
printf("##                                                         10~Discount for BUBT student    ##\n");
printf("#############################################################################################\n");
    int opt, n;
    struct orders ord;
    struct orders order;
    char saveBill = 'y', contFlag = 'y';
    char name[50];
    FILE *fp;
    bool isBUBTStudent = false;

    while (contFlag == 'y') {
        system("clear");
        float total = 0;
        int invoiceFound = 0;

        printf("\n\nPlease select your preferred operation\n");
        printf("1. Create a Bill\n");
        printf("2. Show all Invoices\n");
        printf("3. Search Invoice\n");
        printf("4. Exit\n");
        printf("5. Meet Our Team\n");

        printf("\nYour choice: ");
        scanf("%d", &opt);
        fgetc(stdin);

        switch (opt) {
            case 1:
                printf("\nPlease enter the customer's name: ");
                fgets(ord.customer, 50, stdin);
                ord.customer[strlen(ord.customer) - 1] = 0;
                strcpy(ord.date, __DATE__);
                printf("\nPlease enter the number of items: ");
                scanf("%d", &n);
                ord.numOfItems = n;

                                                                // Input item details
                for (int i = 0; i < n; i++) {
                    fgetc(stdin);
                    printf("\n\n");
                    printf("Please enter the item %d: ", i + 1);
                    fgets(ord.itm[i].item, 20, stdin);
                    ord.itm[i].item[strlen(ord.itm[i].item) - 1] = 0;
                    printf("Please enter the quantity: ");
                    scanf("%d", &ord.itm[i].quantity);
                    printf("Please enter the unit price: ");
                    scanf("%f", &ord.itm[i].price);
                    total += ord.itm[i].quantity * ord.itm[i].price;
                }

                                                               // Check if the customer is a BUBT student
                printf("\nAre you a BUBT student? (y/n): ");
                char studentStatus;
                scanf(" %c", &studentStatus);
                if (studentStatus == 'y' || studentStatus == 'Y') {
                    isBUBTStudent = true;
                }

                generateBillHeader(ord.customer, ord.date, isBUBTStudent);
                for (int i = 0; i < ord.numOfItems; i++) {
                    generateBillBody(ord.itm[i].item, ord.itm[i].quantity, ord.itm[i].price);
                }
                generateBillFooter(total, isBUBTStudent);

                printf("\nDo you want to save the invoice [y/n]: ");
                scanf(" %c", &saveBill);

                if (saveBill == 'y') {
                    fp = fopen("RestaurantBill.dat", "a+");
                    fwrite(&ord, sizeof(struct orders), 1, fp);
                    if (fwrite != 0)
                        printf("\nInvoice successfully saved");
                    else
                        printf("\nError saving invoice");
                    fclose(fp);
                }
                break;

            case 2:
                fp = fopen("RestaurantBill.dat", "r");
                printf("\n  *****Your Previous Invoices*****\n");
                while (fread(&order, sizeof(struct orders), 1, fp)) {
                    float tot = 0;
                    generateBillHeader(order.customer, order.date, isBUBTStudent);
                    for (int i = 0; i < order.numOfItems; i++) {
                        generateBillBody(order.itm[i].item, order.itm[i].quantity, order.itm[i].price);
                        tot += order.itm[i].quantity * order.itm[i].price;
                    }
                    generateBillFooter(tot, isBUBTStudent);
                }
                fclose(fp);
                break;

            case 3:
                printf("Enter the customer's name: ");
                fgets(name, 50, stdin);
                name[strlen(name) - 1] = 0;
                fp = fopen("RestaurantBill.dat", "r");
                printf("\n*****Invoice of %s*****", name);
                while (fread(&order, sizeof(struct orders), 1, fp)) {
                    float tot = 0;
                    if (!strcmp(order.customer, name)) {
                        generateBillHeader(order.customer, order.date, isBUBTStudent);
                        for (int i = 0; i < order.numOfItems; i++) {
                            generateBillBody(order.itm[i].item, order.itm[i].quantity, order.itm[i].price);
                            tot += order.itm[i].quantity * order.itm[i].price;
                        }
                        generateBillFooter(tot, isBUBTStudent);
                        invoiceFound = 1;
                    }
                }
                if (!invoiceFound) {
                    printf("Sorry, the invoice for %s does not exist", name);
                }
                fclose(fp);
                break;

            case 4:
                printf("\n\t\tGoodbye :)\n\n");
                exit(0);
                break;

            case 5:
                printf("\nMeet Our Team:");
                printf("\n1. KAMRUL (474)\n2. KANIZ\n3. SADIA\n4. MAYMUNA\n5. LABI-BA");
                break;

            default:
                printf("\nSorry, invalid option");
                break;
        }

        printf("\nDo you want to perform another operation? [y/n]: ");
        scanf(" %c", &contFlag);
        isBUBTStudent = false;
    }

    printf("\n\t\tGoodbye :)\n\n");

    return 0;
}