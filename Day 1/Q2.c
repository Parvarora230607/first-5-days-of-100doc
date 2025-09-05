// Q2: Write a program to input two numbers and display their sum, difference, product, and quotient.

/*
Sample Test Cases:
Input 1:
10 2
Output 1:
Sum=12, Diff=8, Product=20, Quotient=5

Input 2:
7 3
Output 2:
Sum=10, Diff=4, Product=21, Quotient=2

*/

#include <stdio.h>

int main(){

    int x,y;

    printf("enter num1: ");
    scanf("%d",&x);

    printf("enter num2: ");
    scanf("%d",&y); 

    int sum=x+y;
    int diff=x-y;
    int pro=x*y;
    float div=x/y;

    printf("%d\n",sum);
    printf("%d\n",diff);
    printf("%d\n",pro);
    printf("%.2f\n",div);

    return 0;
    
    


}