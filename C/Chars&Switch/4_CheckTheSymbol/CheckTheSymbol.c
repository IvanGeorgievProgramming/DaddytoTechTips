// This program checks if a symbol is a small letter, big letter or a number

#include <stdio.h>

int main(){

    char symbol;

    printf("Enter a symbol: ");
    scanf("%c", &symbol);

    if(symbol >= 'a' && symbol <= 'z'){
        printf("%c is a small letter\n", symbol);
    }
    else if(symbol >= 'A' && symbol <= 'Z'){
        printf("%c is a big letter\n", symbol);
    }
    else if(symbol >= '0' && symbol <= '9'){
        printf("%c is a number\n", symbol);
    }
    else{
        printf("%c is a special symbol\n", symbol);
    }

    return 0;

}