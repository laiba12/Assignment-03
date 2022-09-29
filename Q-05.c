#include<stdio.h>
int main()
{
    float a,b;
    printf("Enter the number= ");
    scanf("%f",&a);
    b=a/100;
    if(b>1.00)
    {
        printf("The number is a three digit number");
    }
    else
    {
        printf("The number is NOT a three digit number");
    }
    return 0;
}