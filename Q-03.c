#include<stdio.h>
int main()
{
    int b;
    printf("Enter the number= ");
    scanf("%d",&b);
    b%2==0?printf("The number is EVEN"):printf("The number is ODD");
    return 0;
}