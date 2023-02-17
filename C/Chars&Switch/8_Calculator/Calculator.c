#include <stdio.h>
#include <math.h>

int main(){
    float number1 = 0, number2 = 0;
    char operator;

    printf("Enter the first number: ");
    scanf("%f", &number1);

    do{
        do{
            printf("Enter the operator: ");
            scanf(" %c", &operator);
        }
        while (operator != '+' && operator != '-' && operator != '*' && operator != '/' && operator != '=');
        
        if(operator == '='){
            break;
        }

        printf("Enter another number: ");
        scanf("%f", &number2);

        switch(operator){
            case '+':
                number1 = number1 + number2;
                break;
            case '-':
                number1 = number1 - number2;
                break;
            case '*':
                number1 = number1 * number2;
                break;
            case '/':
                while(number2 == 0){
                    printf("Enter another number: ");
                    scanf("%f", &number2);
                }
                number1 = number1 / number2;
                break;
            default:
                printf("Invalid operator\n");
                break;
        }
    }
    while(1);

    printf("The result is: %.2f", number1);

    return 0;
}
