#include <stdio.h>
#include <string.h>
#define MAX 200

struct customerBankInfo{
    int accNo;//account number
    char name[50];
    float balance;
};
//Customers with balance below $100
void printLowBalanceCustomers(struct customerBankInfo customers[], int size) {
    printf("Customers with balance below Rs. 100:\n");
    for (int i = 0; i < size; i++) {
        if (customers[i].balance < 100) {
            printf("Account Number: %d\nName: %s\nBalance: Rs.$.2f", customers[i].accNo, customers[i].name, customerBankInfo.balance );
        }
    }
}


int main()
{
    int data;
    do
    {
        printf("Input the number of people for whom you wish to save the data. The maximum limit is 200. ");
        scanf("%d",&data);
    }while(data>MAX);

    int i;
    for(i=1; i<=data; ++ i)
    {
       // printf("%d",i);
        b[i].customer = i;
        printf("\nFor customer number%d,\n", b[i].customer);
        printf("Enter account number: ");
        scanf("%d", &b[i].accNo);
        printf("Enter name: ");
        scanf("%s", &b[i].name);
        printf("Enter balance: ");
        scanf("%f", &b[i].balance);
    }
    printf("\n\n\tDisplaying Information:\n");

    // displaying information
    for (i = 1; i <=data; ++i) {
        printf("\nCustomer number %d\n", i);
        printf("Account No.: %d", b[i].accNo);
        printf("\nName: ");
        puts(b[i].name);
        printf("Balance: Rs.%.2f", b[i].balance);
        printf("\n");
    }

    printf("--------------------------");

    printLowBalanceCustomers(b,data);



    return 0;
}
 //balance below 100 function
void printLowBalanceCustomers(struct Customer customers[], int size) {
    printf("Customers with balance below Rs. 100:\n");
    for (int i = 1; i <= size; i++) {
        if (customers[i].balance < 100) {
            printf("Account Number: %d, Name: %s\n", customers[i].accountNumber, customers[i].name);
        }
    }
}
