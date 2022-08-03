#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main()
{
    char username[20], password[20], op;
    here:
    printf("===============\nLog in\n===============\n");
    printf("Enter Username: ");
    gets(username);
    printf("Enter Password: ");
    gets(password);
    if (strcmp(username, "Gerardo")==0 && strcmp(password, "Tubay14")==0){
        printf("\nSuccessfuly log in\n");
    }
    else {
        printf("\nIncorrect username or password.\n");
    }
    return 0;
}
