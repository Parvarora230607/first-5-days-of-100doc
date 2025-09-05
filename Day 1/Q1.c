// Q1: Write a program to input two numbers and display their sum.

/*
Sample Test Cases:
Input 1:
3 4
Output 1:
Sum = 7

Input 2:
-1 20
Output 2:
Sum = 19

*/
#include <stdio.h>

int main(){
    int x,y,z;

    printf("enter num1: ");
    scanf("%d",&x);

    printf("enter num2: ");
    scanf("%d",&y);

    z=x+y;
    
    printf("sum= %d",z);
    return 0;
}

