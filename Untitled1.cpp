#include <stdio.h>
#include <string.h>

int main()
{
    char user_name1[25];
    char password1[10];
    char confirm[10];
    char user_name2[25];
    char password2[10];
    
    printf("Welcome!\n");
    printf("Register:-\n");
    printf("Enter the user name: ");
    scanf("%s", user_name1);
    printf("Enter the Password: ");
    scanf("%s", password1);
    printf("Confirm Password: ");
    scanf("%s", confirm);
    
    if (strcmp(confirm, password1) == 0)
    {
        printf("Register successfully\n");
    }
    else
    {
        printf("Sign up Failed\n");
        return 0 ;
    }

    printf("\nLOGIN:-\n");
    printf("Enter the user name: ");
    scanf("%s", user_name2);
    printf("Enter the Password: ");
    scanf("%s", password2);

    if (!strcmp(user_name1, user_name2) && !strcmp(password1, password2))
    {
        printf("Logged in Successfully\n");
    }
    else
    {
        printf("Failed to log in\n");
    }

    return 0;
}
