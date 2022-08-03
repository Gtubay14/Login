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
    if (strcmp(username, "jewel")==0 && strcmp(password, "jewel123")==0){
        printf("\nSuccessfuly log in\n");
    }
    else {
        printf("\nIncorrect username or password.\n");
    }
    return 0;
}
