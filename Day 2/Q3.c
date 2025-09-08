//Q3: Write a program to calculate the area and perimeter of a rectangle given its length and breadth.

/*
Sample Test Cases:
Input 1:
5 10
Output 1:
Area=50, Perimeter=30

Input 2:
3 7
Output 2:
Area=21, Perimeter=20

*/

#include <stdio.h> 

int main(){

    int x,y;

    printf("enter num1: ");
    scanf("%d", &x);

    printf("enter num2: ");
    scanf("%d", &y);

    int area=x*y;
    int peri=2*(x+y);

    printf("%d\n",area);
    printf("%d\n",peri);

    return 0;

}