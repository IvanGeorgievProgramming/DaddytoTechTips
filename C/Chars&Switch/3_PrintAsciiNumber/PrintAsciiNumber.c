// This is a program that prints an ASCII number

#include <stdio.h>

int main(){

    char symbol;

    printf("Enter a symbol:");
    scanf("%c", &symbol);

    printf("The ASCII number for %c is %d\n", symbol, symbol);

    return 0;

}