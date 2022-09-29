#include<stdio.h>
int main()
{
    int a;
    printf("Enter the number= ");
    scanf("%d",&a);
    if(a>0)
    {
    printf("The number is Positive");
    }
    else if(a==0)
    {
    printf("The number is Zero");
    }
    else if(a<0)
    {
    printf("The number is Negetive");
    }
   
    return 0;
}