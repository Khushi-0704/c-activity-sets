//2. Write a C program to add two numbers.
#include<stdio.h>
int main(){

    int a,b,sum;
    printf("enter first number:");
    scanf("%d" , &a);

    printf("enter second number:");
    scanf("%d" , &b);

    sum=a+b;

    printf("The sum of %d + %d is %d" , a,b,sum);
    return 0;
}
