#include <stdio.h>
#include <math.h>

#define private static
#define public

/*
Creating a simple bank manegment system
*/

struct user 
{
    char name[25], pwd[25];
    double balance;
};

private void login(char name[], char password[])
{
    printf("");
}

private void createAccount()
{
   printf(""); 
}

private void getBalance(double balance)
{
    printf("Your balance is %lf\n", balance);
}

private void depositBalance(double balance, double amount)
{   
    balance += amount;
    prinf("Your new balance is %lf\n", balance);
}

private void withdrawBalance(double balance, double amount)
{
    if (balance <= 0) {
        printf("Your balance is zero or negative, so it is not possible to withdraw\n");
        exit(0);
    } else {
        balance -= amount;
        printf("Your new balance is %lf\n", balance);
    }
}

public int main()
{   
    /* IMPLEMENT AFTER MAIN 
    char input;
    printf("Hi! Welcome to Secret Bank! \n 1) Create new account.\n 2) Login.\n");
    fgets(input, sizeof(input), stdin);
    switch (input)
    {
    case '1':
        createAccount();
        break;
    case '2':
        login;
        break;
    default:
        printf("Invalid input.\n Please enter either 1 or 2.");
        break;
    }
    */

    double balance;

    system("cls");
    printf("\n Hi! WELCOMME TO SECRET BANK\n\n");
    printf("Please choose one of the listed options\n\n");
    printf(" 1) Check balance\n 2) Deposite amount\n 3) Withdraw amount\n 4) Exit\n\n");

    // User input
    while (1) 
    {
        int choice;

        printf("Enter your choice: ");
        scanf("%d", &choice);

        switch (choice)
        {
            case 1:
                getBalance(balance);
                break;
            case 2:
                double inputAmount;
                printf("Please spesify amount: ");
                scanf("%lf", &inputAmount);
                depositBalance(balance, inputAmount);
                break;
            case 3:
                double withdrawl;
                printf("Please spesify amount: ");
                scanf("%lf", &withdrawl);
                withdrawBalance(balance, withdrawl);
                break;
            case 4:
                exit(0);
                break;
        }
    }

    return 0;
}
