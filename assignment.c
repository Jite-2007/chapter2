#include<stdio.h>
#include<stdlib.h>
#include<string.h>

int main()
{
    char account_name[40];
    char account_number[13];
    char account_pin[5];

    printf("CREATE NEW ACCOUNT: ");
    fgets(account_name, 40, stdin);
    printf("CREATE ACCOUNT NO: ");
    scanf("%s", &account_number);
    printf("CREATE PIN: ");
    scanf("%s", &account_pin);
    printf("ACCOUNT HOLDER NAME: %s", account_name);

    
    printf("ACCOUNT NO: %s", account_number);
    while(strlen(account_number)!= 13)
    {
        printf("\nInvalid! account no");
        printf("\nenter 12 digit account number: ");
        scanf("%s", &account_number);
    }
    
    printf("PIN NO: %s", account_pin);
    while(strlen(account_pin)!= 5)
    {
        printf("\nInvalid! account pin");
        printf("\nenter 4 digit account pin: ");
        scanf("%s", &account_number);
    }

    return 0;
}