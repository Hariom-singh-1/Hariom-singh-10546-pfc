#include <stdio.h>

int main() {
    int password = 1234;   // correct password
    int input;
    int tries = 0;

    while (tries < 3) {
        printf("Enter password: ");
        scanf("%d", &input);

        if (input == password) {
            printf("Access Granted \n");
            return 0;
        } else {
            printf("Wrong password!\n");
            tries++;
        }
    }

    printf("Account Locked 🔒\n");
    return 0;
}