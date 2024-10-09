#include<stdio.h>
// Write a programm for simple calculator
int main(){
    char operation;
    double a,b;
    printf("Enter an operator :");
    scanf("%c", &operation);
    printf("Enter two operand :");
    scanf("%lf %lf", &a, &b);
    switch(operation){
        case '+':
        printf("%.1lf + %.1lf = %.1lf", a,b, a+b);
        break;
        case '-':
        printf("%.1lf - %.1lf = %.1lf", a,b, a-b);
        break;
        case '*':
        printf("%.1lf * %.1lf = %.1lf", a,b, a*b);
        break;
        case '/':
        printf("%.1lf / %.1lf = %.1lf", a,b, a/b);
        break;
        // operator does not match any case constant +,-,*,/
        default:
        printf("Error! operator is not correct");
    }
    return 0;
}