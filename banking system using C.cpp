#include <stdio.h>
#include <string.h>

int main() {
    char user[100];
    char user1[] = "SriKrishna";
    char pass1[100];
    char pass[] = "301103";
    int attempts = 3;
    int authenticated = 0;
    printf("\n***-------- SriKrishna Banking System---------***\n");
    printf("ENTER USERNAME: ");
    scanf("%s", user);
    if (strcmp(user1, user) == 0) {
        while (attempts > 0) {
            printf("ENTER PASSWORD: ");
            scanf("%s", pass1);
            if (strcmp(pass, pass1) == 0) {
                printf("Welcome_to_the_Sri_Krishna_Banking_System\n");
                authenticated = 1;
                break;
            } else {
                attempts--;
                if (attempts > 0) {
                    printf("Invalid password, try again. You have %d attempts left.\n", attempts);
                }
            }
        }
    } else {
        printf("Invalid username.\n");
    }

    if (authenticated) {
        int op;
        float bal = 1000.0;
        float amount;

        while (1) {
            printf("\n***--------Sri_Krishna_Banking_System_Menu------------ ***\n");
            printf("1. Check Balance\n");
            printf("2. Deposit Money\n");
            printf("3. Withdraw Money\n");
            printf("4. Exit\n");
            printf("Enter your operation: ");
            scanf("%d", &op);

            switch (op) {
                case 1:
                    printf("Your current balance is: $%.2f\n", bal);
                    break;
                case 2:
                    printf("Enter the amount to deposit: $");
                    scanf("%f", &amount);
                    if (amount > 0) {
                        bal += amount;
                        printf("You have successfully deposited $%.2f\n", amount);
                        printf("Your new balance is: $%.2f\n", bal);
                    } else {
                        printf("Invalid deposit amount.\n");
                    }
                    break;
                case 3:
                    printf("Enter the amount to withdraw: $");
                    scanf("%f", &amount);
                    if (amount > 0 && amount <= bal) {
                        bal -= amount;
                        printf("You have successfully withdrawn $%.2f\n", amount);
                        printf("Your new balance is: $%.2f\n", bal);
                    } else if (amount > bal) {
                        printf("Insufficient funds. Your current balance is: $%.2f\n", bal);
                    } else {
                        printf("Invalid withdrawal amount.\n");
                    }
                    break;
                case 4:
                    printf("Exiting the banking system. ARA ARA SAYONARA!\n");
                    return 0;
                default:
                    printf("Invalid operation. Please try again.\n");
                    break;
            }
        }
    } else {
        printf("Too many failed attempts. Access denied.\n");
    }

    return 0;
}

