#include <stdio.h>
#include <stdlib.h>
#include <string.h>

struct Account {
    int accNo;
    char name[50];
    float balance;
};

void createAccount(struct Account accounts[], int *count) {
    printf("\nEnter Account Number: ");
    scanf("%d", &accounts[*count].accNo);
    printf("Enter Account Holder Name: ");
    scanf(" %[^\n]", accounts[*count].name);
    accounts[*count].balance = 0.0;
    (*count)++;
    printf("Account created successfully!\n");
}

void deposit(struct Account accounts[], int count) {
    int accNo;
    float amount;
    printf("\nEnter Account Number: ");
    scanf("%d", &accNo);
    for (int i = 0; i < count; i++) {
        if (accounts[i].accNo == accNo) {
            printf("Enter amount to deposit: ");
            scanf("%f", &amount);
            if (amount > 0) {
                accounts[i].balance += amount;
                printf("Deposited %.2f successfully!\n", amount);
            } else {
                printf("Invalid deposit amount.\n");
            }
            return;
        }
    }
    printf("Account not found!\n");
}

void withdraw(struct Account accounts[], int count) {
    int accNo;
    float amount;
    printf("\nEnter Account Number: ");
    scanf("%d", &accNo);
    for (int i = 0; i < count; i++) {
        if (accounts[i].accNo == accNo) {
            printf("Enter amount to withdraw: ");
            scanf("%f", &amount);
            if (amount > 0 && amount <= accounts[i].balance) {
                accounts[i].balance -= amount;
                printf("Withdrawn %.2f successfully!\n", amount);
            } else {
                printf("Invalid withdrawal amount or insufficient balance.\n");
            }
            return;
        }
    }
    printf("Account not found!\n");
}

void checkBalance(struct Account accounts[], int count) {
    int accNo;
    printf("\nEnter Account Number: ");
    scanf("%d", &accNo);
    for (int i = 0; i < count; i++) {
        if (accounts[i].accNo == accNo) {
            printf("Account Holder: %s | Balance: %.2f\n", accounts[i].name, accounts[i].balance);
            return;
        }
    }
    printf("Account not found!\n");
}

void displayAccounts(struct Account accounts[], int count) {
    if (count == 0) {
        printf("\nNo accounts found.\n");
        return;
    }
    printf("\n--- Bank Accounts ---\n");
    for (int i = 0; i < count; i++) {
        printf("Account No: %d | Name: %s | Balance: %.2f\n",
               accounts[i].accNo, accounts[i].name, accounts[i].balance);
    }
}

int main() {
    struct Account accounts[100];
    int count = 0, choice;

    while (1) {
        printf("\n--- Bank Account System ---\n");
        printf("1. Create Account\n");
        printf("2. Deposit\n");
        printf("3. Withdraw\n");
        printf("4. Check Balance\n");
        printf("5. Display All Accounts\n");
        printf("6. Exit\n");
        printf("Enter your choice: ");
        scanf("%d", &choice);

        switch (choice) {
            case 1: createAccount(accounts, &count); break;
            case 2: deposit(accounts, count); break;
            case 3: withdraw(accounts, count); break;
            case 4: checkBalance(accounts, count); break;
            case 5: displayAccounts(accounts, count); break;
            case 6: exit(0);
            default: printf("Invalid choice! Try again.\n");
        }
    }
    return 0;
}
