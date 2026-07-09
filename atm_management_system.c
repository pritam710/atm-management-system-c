#include <stdio.h>

float balance = 10000.00;

void checkBalance()
{
    printf("\nCurrent Balance: ₹%.2f\n", balance);
}

void deposit()
{
    float amount;
    printf("\nEnter amount to deposit: ₹");
    scanf("%f", &amount);

    if(amount > 0)
    {
        balance += amount;
        printf("₹%.2f deposited successfully!\n", amount);
    }
    else
    {
        printf("Invalid amount!\n");
    }
}

void withdraw()
{
    float amount;

    printf("\nEnter amount to withdraw: ₹");
    scanf("%f", &amount);

    if(amount <= 0)
    {
        printf("Invalid amount!\n");
    }
    else if(amount > balance)
    {
        printf("Insufficient Balance!\n");
    }
    else
    {
        balance -= amount;
        printf("₹%.2f withdrawn successfully!\n", amount);
    }
}

int main()
{
    int choice;

    do
    {
        printf("\n==============================\n");
        printf("      ATM MANAGEMENT SYSTEM\n");
        printf("==============================\n");
        printf("1. Check Balance\n");
        printf("2. Deposit Money\n");
        printf("3. Withdraw Money\n");
        printf("4. Exit\n");
        printf("------------------------------\n");

        printf("Enter your choice: ");
        scanf("%d", &choice);

        switch(choice)
        {
            case 1:
                checkBalance();
                break;

            case 2:
                deposit();
                break;

            case 3:
                withdraw();
                break;

            case 4:
                printf("\nThank you for using the ATM!\n");
                break;

            default:
                printf("\nInvalid Choice! Please try again.\n");
        }

    } while(choice != 4);

    return 0;
}
