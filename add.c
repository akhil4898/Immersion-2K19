// Write a program to add two numbhers.

#include "stdio.h"

int main(void){
    int num1, num2, sum;
    printf("Enter the value of num1 : ");
    scanf("%d", &num1);
    printf("Enter the value of num2 : ");
    scanf("%d", &num2);
    sum = num1 + num2;
    printf("The sum is : %d \n", sum);
    return 0;
}