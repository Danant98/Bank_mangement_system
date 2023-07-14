#include <stdio.h>
#include <math.h>
#include <stdlib.h>

#define private static
#define public

/*
Creating a simple bank manegment system
*/

private struct user 
{
    char name[25], pwd[25];
    float balance;
};

private void login(char name[], char password[])
{
    printf("To be done!");
}

private void createAccount()
{
   printf("To be done!"); 
}

private void getBalance(float balance)
{   
    system("cls");
    int userInput;
    
    printf("\nBalance: %.3f\n\n", balance);

    printf("\n\n1) Back \n2) Exit");
    printf("\n\nEnter: ");
    scanf("%d", &userInput);

    switch (userInput)
    {
    case 1:
    system("cls");
        break;
    
    case 2:
        system("cls");
        exit(0); 
        break;
    
    default:
        printf("\n\n Invalid command recived!\n. Please choose either 1 or 2");
    }
}

private float depositBalance(float balance, float amount)
{   
    system("cls");
    balance += amount;
    printf("\nBalance: %.3f\n\n", balance);
    printf("");


    return balance;
}

private float withdrawBalance(float balance, float amount)
{
    if (balance <= 0 || balance - amount < 0) {
        printf("\nYour balance is zero or negative or your balance will become negative, so it is not possible to withdraw\n");
        return balance;
    }
    
    balance -= amount;
    printf("\nYour new balance is %.3f\n\n", balance);
    return balance;
}

private float fecthBalance() 
{   

    FILE *fptr = fopen("account.txt", 'r');
   // Checking to see if account exists
   if (fptr == NULL) {
        printf("Account is not found, please create a new account!");
        return -1;
   }


    // Closing file
    fclose(fptr);

    return 0;
}

private int setBalance(float balance)
{
    FILE *fptr = fopen("account.txt", 'w');
   // Checking to see if account exists
   if (fptr == NULL) {
        printf("Account is not found, please create a new account!");
        return -1;
   }

   fprintf(fptr, "Balance: %.2f", balance);

    // Closing file
    fclose(fptr);

    return 0;
}


private void options()
{   
    printf("\n Hi! WELCOMME TO SECRET BANK\n\n"); 
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
    
    float balance = fecthBalance();

    system("cls");

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

            default:
                printf("\n\n Invalid command recived!\n Please specify a integer between 1-4.");
                break;
        }
    }

    return 0;
}
 