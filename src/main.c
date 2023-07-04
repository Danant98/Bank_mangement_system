#include <stdio.h>
#include <math.h>

#define private static
#define public

/*
Creating a simple bank manegment system
*/

struct user 
{
    char name[25];
    char pwd[25];
};

private void login(char name[], char password[])
{
    
}

public int main()
{   
    char input;
    printf("Hi! Welcome to Secret Bank! \n 1) Create new account.\n 2) Login.\n");
    fgets(&input, sizeof(input), stdin);
    switch (input)
    {
    case '1':
        create_account();
        break;
    case '2':
        login;
        break;
    default:
        printf("Invalid input.\n Please enter either 1 or 2.");
        break;
    }
    return 0;
}
