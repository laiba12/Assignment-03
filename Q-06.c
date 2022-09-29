#include<stdio.h>
int main()
{
    int a,b;
    printf("Enter the first numbers= ");
    scanf("%d",&a);
    printf("Enter the second numbers= ");
    scanf("%d",&b);
    
    if(a>b)
    {
        printf("First number is greater than second number");
    }
    if(b>a)
    {
        printf("Second number is greater than first number");
    }
    if(a==b)
    {
        printf("Both numbers are equal");
    }
    return 0;
}