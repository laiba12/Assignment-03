#include<stdio.h>
int main()
{
    int a;
    printf("Enter the year: ");
    scanf("%d",&a);
    a%4==0?printf("This is a LEAP YEAR"):printf("This is NOT a Leap Year");
    return 0;
}
