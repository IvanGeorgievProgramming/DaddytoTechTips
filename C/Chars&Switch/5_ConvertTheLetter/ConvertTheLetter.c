// This program converts a small letter to a big letter or a big letter to a small letter

#include <stdio.h>

int main(){

    char symbol;

    printf("Enter a symbol: ");
    scanf("%c", &symbol);

    if(symbol >= 'a' && symbol <= 'z'){
        printf("%c is a small letter", symbol);
        symbol = symbol - 32;
        printf(" and the big letter is %c\n", symbol);
    }
    else if(symbol >= 'A' && symbol <= 'Z'){
        printf("%c is a big letter", symbol);
        symbol = symbol + 32;
        printf(" and the small letter is %c\n", symbol);
    }
    else{
        printf("%c is not a letter\n", symbol);
    }

    return 0;

}