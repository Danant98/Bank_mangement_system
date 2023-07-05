#include <stdio.h>
#include <math.h>
#include <stdlib.h>

#define private static
#define public

/*
Creating a simple bank manegment system
*/

struct user 
{
    char name[25], pwd[25];
    float balance;
};

private void login(char name[], char password[])
{
    printf("");
}

private void createAccount()
{
   printf(""); 
}

private void getBalance(float balance)
{
    printf("\nYour balance is %f\n\n", balance);
}

private float depositBalance(float balance, float amount)
{   
    balance += amount;
    printf("\nYour new balance is %f\n\n", balance);
    return balance;
}

private float withdrawBalance(float balance, float amount)
{
    if (balance <= 0) {
        printf("\nYour balance is zero or negative, so it is not possible to withdraw\n");
        exit(0);
    } else {
        balance -= amount;
        printf("\nYour new balance is %f\n\n", balance);
        return balance;
    }
}

private void options()
{
    printf("Please choose one of the listed options\n\n");
    printf(" 1) Check balance\n 2) Deposite amount\n 3) Withdraw amount\n 4) Exit\n\n");
}

public int main()
{   
    /* IMPLEMENT AFTER MAIN LOOP
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

   FILE *fptr;

    fptr = fopen("balance.txt", "r");
    char balance;
    fgets(balance, 20, fptr);
    float balance;


    system("cls");
    printf("\n Hi! WELCOMME TO SECRET BANK\n\n");

    while (1) 
    {   
        // Running options meny each iteration
        options();

        int choice;

        printf("Enter your choice: ");
        scanf("%d", &choice);

        switch (choice)
        {
            case 1:
                getBalance(balance);
                break;
            case 2: ;
                float inputAmount;
                printf("\nPlease spesify amount: ");
                scanf("%f", &inputAmount);
                balance = depositBalance(balance, inputAmount);
                break;
            case 3: ;
                float withdrawl;
                printf("\nPlease spesify amount: ");
                scanf("%f", &withdrawl);
                balance = withdrawBalance(balance, withdrawl);
                break;
            case 4:
                system("cls");
                exit(0);
                break;
        }
    }
    // Saving balance to text file
    fptr = fopen("balance.txt", "w");
    fprintf(fptr, (char) balance); 
    fclose(fptr);

    return 0;
}
 