#include <stdio.h>
#include <unistd.h>
double calculator(double *number, double *number2, char *op)
{
    double res;
    printf("What the num1 you wanna fit in?\n>>: ");
    scanf("%lf", number);
    printf("What the num2 you wanna fit in?\n>>: ");
    scanf("%lf", number2);
    printf("What the operation you wanna fit in?\n>>: ");
    scanf("%s", op);  
    printf("your calculation goes like this >> %.1lf %c %.1lf\n", *number, *op, *number2);
    sleep(5);
    if (*op == '+')
        res = *number + *number2;

    else if (*op == '-')
        res = *number - *number2;

    else if (*op == '/')
        res = *number / *number2;

    else if (*op == '*')
        res = *number * *number2;
    
    else
        printf("please your operation is invalid");     
    return (res);
}

int main(void)
{
    char operator;
    double num1;
    double num2;
    double results;
    int dec;
    double *number = &num1;
    double *number2 = &num2;
    char *op = &operator;
    printf("Welcome to our \033[0;33mC\033[0m calculator\nIf you wanna use calculator enter \033[0;31m1\033[0m\notherwise enter \033[0;31m0\033[0m for quit\n>>: ");
    scanf("%d", &dec);
    
    if (dec == 1)
    {
        printf("Welcome to our advanture :D\n");
        results = calculator(number, number2, op);
        printf(">> your result is: %.2lf\n", results);
    }
    else 
        printf("Invalid number %d please use guide number in first line\n", dec);
}