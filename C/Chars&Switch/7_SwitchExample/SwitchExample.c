// This program demonstrates the use of the switch statement.

#include <stdio.h>

int main(){

    int number;

    printf("Enter a number between 1 and 5: ");
    scanf("%d", &number);

    switch (number){
        case 1:
            printf("You entered 1\n");
            break;
        case 2:
            printf("You entered 2\n");
            break;
        case 3:
            printf("You entered 3\n");
            break;
        case 4:
            printf("You entered 4\n");
            break;
        case 5:
            printf("You entered 5\n");
            break;
        default:
            printf("You did not enter a number between 1 and 5\n");
            break;
    }

    return 0;
}