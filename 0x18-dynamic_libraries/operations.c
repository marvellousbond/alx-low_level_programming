#include<stdio.h>

int main()
{
    printf("\n\n\t\tArithemetic Operations in c\n\n\n");

    int a, b, add, subtract, multiply, remainder, divide;

    printf("Enter two integers: \n");
    scanf("%d%d", &a, &b);

    add = a+b;
    subtract = a-b;
    multiply = a*b;
    divide = a/b;
    remainder = a%b;

    printf("\n\nAddition of the numbers = %d\n", add);
    printf("\nSubtraction of 2nd number from 1st = %d\n", subtract);
    printf("\nMultiplication of the numbers = %d\n", multiply);
    printf("\nDividing 1st number from 2nd = %d\n", divide);
    printf("\nRemainder on Dividing 1st number by 2nd is %d\n", remainder);
    printf("\n\n\t\t\tRESULTS !\n\n\n");
    return 0;
}
