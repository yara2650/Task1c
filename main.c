#include <stdio.h>
#include <string.h>

// Define a struct for user information
struct UserInfo {
    char user_name[25];
    char password[10];
    int isActive; // Flag to indicate user activity
};

// Define a union that includes the struct
union UserAccount {
    struct UserInfo info;
    int flag; // Use this for any additional flags if needed
};

int main() {
    union UserAccount user1, user2;

    // Registration
    printf("Welcome!\n");
    printf("Register:-\n");
    printf("Enter the user name: ");
    scanf("%s", user1.info.user_name);
    printf("Enter the Password: ");
    scanf("%s", user1.info.password);
    printf("Set the user activity flag (0 for False, 1 for True): ");
    scanf("%d", &user1.info.isActive);

    printf("Register successfully\n\n");

    // Login
    printf("LOGIN:-\n");
    printf("Enter the user name: ");
    scanf("%s", user2.info.user_name);
    printf("Enter the Password: ");
    scanf("%s", user2.info.password);

    // Check if the user is active and credentials match
    if (user2.info.isActive && !strcmp(user1.info.user_name, user2.info.user_name) && !strcmp(user1.info.password, user2.info.password)) {
        printf("Logged in Successfully\n");
    } else {
        printf("Failed to log in\n");
    }

    return 0;
}
