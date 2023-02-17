// This is a program that prints an ASCII symbol

#include <stdio.h>

int main(){

    int symbol;

    printf("Enter a number between 0 and 127: ");
    scanf("%d", &symbol);

    printf("The ASCII symbol for %d is %c\n", symbol, symbol);

    return 0;

}