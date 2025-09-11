//Q10: Write a program to input time in seconds and convert it to hours:minutes:seconds format.

/*
Sample Test Cases:
Input 1:
3661
Output 1:
1:1:1

Input 2:
7322
Output 2:
2:2:2

*/

#include <stdio.h>

int main(){

    int totalsecs,hours,mins,secs;

    printf("Enter the amount of secs: ");
    scanf("%d",&totalsecs);
    hours=totalsecs/3600;
    mins=(totalsecs%3600)/60;
    secs=(totalsecs%3600)%60;
    printf("%d:%d:%d",hours, mins, secs);

    return 0;

    


}