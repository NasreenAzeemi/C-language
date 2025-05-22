#include <stdio.h>

#define MAX_CUSTOMERS 200

// Define the structure for customer data
struct Customer {
    int accountNumber;
    char name[100];
    float balance;
};

// Function to print account number and name of customers with balance below Rs. 100
void printLowBalanceCustomers(struct Customer customers[], int size) {
    printf("Customers with balance below Rs. 100:\n");
int x;
    for (int i = 0; i < size; i++) {
        if(customers[i].balance < 100) {
            printf("Account Number: %d, Name: %s\n", customers[i].accountNumber, customers[i].name);
            x = i;   
        }
        if (i = size-1){
            printf("No balance below 100");
        }
    }
}

int main() {
    struct Customer customers[MAX_CUSTOMERS];
    int numberOfCustomers;

    printf("Enter the number of customers: ");
    scanf("%d", &numberOfCustomers);

    for (int i = 0; i < numberOfCustomers; i++) {
        printf("Enter details for customer %d\n", i + 1);
        printf("Account Number: ");
        scanf("%d", &customers[i].accountNumber);
        printf("Name: ");
        scanf("%s", customers[i].name);
        printf("Balance: ");
        scanf("%f", &customers[i].balance);
    }

    printLowBalanceCustomers(customers, numberOfCustomers);

    return 0;
}
