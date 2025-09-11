//Q9: Write a program to calculate simple and compound interest for given principal, rate, and time.

/*
Sample Test Cases:
Input 1:
1000 5 2
Output 1:
Simple Interest=100, Compound Interest=102.5

Input 2:
5000 7 3
Output 2:
Simple Interest=1050, Compound Interest=1125.76

*/

#include <stdio.h>
#include <math.h>

int main(){

   float P,R,T;

   printf("Enter the principal amount: ");
   scanf("%f",&P);

   printf("Enter the Rate amount: ");
   scanf("%f",&R);

   printf("Enter the time amount: ");
   scanf("%f",&T);

   float SI=P*R*T/100;
   float CI=P* pow((1+R/100),T)-P;

   printf("%f\n",SI);
   printf("%.2f\n",CI);

   return 0;
}