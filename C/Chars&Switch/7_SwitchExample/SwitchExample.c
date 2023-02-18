// This program demonstrates the use of the switch statement.

#include <stdio.h>

int main(){

    char symbol;

    printf("Enter a symbol: ");
    scanf("%c", &symbol);

    switch (symbol){
        case 'a' ... 'z':
            printf("You entered a lower case letter\n");
            break;
        case 'A' ... 'Z':
            printf("You entered a bigger case letter\n");
            break;
        case '0' ... '9':
            printf("You entered a number\n");
            break;
        case ' ':
            printf("You entered a space\n");
            break;
        // case 0 ... 127:
        //     printf("You entered a symbol\n");
        //     break;
        default:
            printf("You entered something else\n");
            break;
    }

    return 0;
}