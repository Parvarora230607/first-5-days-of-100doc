//Q6: Write a program to swap two numbers using a third variable.

/*
Sample Test Cases:
Input 1:
3 5
Output 1:
After swap: 5 3

Input 2:
-1 1
Output 2:
After swap: 1 -1

*/

#include <stdio.h>

int main(){

    int x=3,y=5;
    int z;

    printf("enter num1: ");
    scanf("%d",&x);

    printf("enter num2: ");
    scanf("%d",&y);

    z=x;
    x=y;
    y=z;

    printf("After swap: %d,%d\n",x,y);

    return 0;

}