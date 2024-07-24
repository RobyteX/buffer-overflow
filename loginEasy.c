#include <stdio.h>
#include <string.h>

int main() {
    char username[16];
    char password[16];
    int passcheck = 0;

    printf("Username: ");
    gets(username, sizeof(username), stdin); 
    printf("Password: ");
    gets(password, sizeof(password), stdin);

    username[strcspn(username, "\n")] = 0;
    password[strcspn(password, "\n")] = 0;

    if (strcmp(username, "username") == 0 && strcmp(password, "password") == 0) {
        passcheck = 1;
    }

    if (passcheck) {
        printf("Access granted!\n");

        char command[32];
        strcpy(command, "ls ");
        strcat(command, "/var/log");
        system(command);
    } else {
        printf("Access denied!\n");
    }
    return 0;
}