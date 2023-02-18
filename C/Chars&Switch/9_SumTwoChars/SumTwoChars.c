#include <stdio.h>

int main(){

    char symbol1, symbol2;

    printf("Enter two symbols: ");
    scanf("%c %c", &symbol1, &symbol2);

    printf("The sum of %c and %c is %d (%c)\n", symbol1, symbol2, symbol1 + symbol2, symbol1 + symbol2);

    return 0;
}