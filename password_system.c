/*
Name:BRUCE ONYANCHA
Reg No:PA106/G/28827/25
Description:Do while loop for password system
*/
#include <stdio.h>
#include <string.h>

int main() {
    char password[20];

    do {
        printf("Enter password: ");
        scanf("%19s", password);

        if (strcmp(password, "1234")) {
            printf("Incorrect password. Try again.\n");
        }
    } while (strcmp(password, "1234"));

    printf("Access Granted.\n");

    return 0;
}
