// This program converts a symbol to a number

#include <stdio.h>

int main(){

    char symbol;
    int number = 0;
    int sign = 1;

    printf("Enter a number (witch is secretly a combination of char symbols): ");
    do{
        symbol = getchar();
        if(symbol >= '0' && symbol <= '9' || symbol == '-'){
            if(symbol == '-'){
                sign = -1;
            }
            else{
                number = number * 10 + (symbol - '0') * sign;
            }
        }
    }
    while(symbol != '\n');

    printf("The number is %d\n", number);

    // To be sure that the program is a number we will add add 1 to it
    //printf("%d + 1 = %d\n", number, number + 1);

    return 0;

}