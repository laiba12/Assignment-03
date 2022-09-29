#include<stdio.h>
int main()
{
    int a,b;
    printf("Enter the number= ");
    scanf("%d",&a);
    b=a%10;

   if(b==5|b==0)
{
    printf("Entered number is divisible by 5");
}
    else
{
    printf("Entered number is not divisible by 5");
}
return 0;
}
