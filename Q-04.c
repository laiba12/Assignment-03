#include<stdio.h>
int main()
{
    int a,b;
    printf("enter the number= ");
    scanf("%d",&a);
    b=a&1;
    if(b==1)
    {
        printf("The number is ODD");
    }
    else 
    {
        printf("The number is EVEN");
    }
    return 0;
}