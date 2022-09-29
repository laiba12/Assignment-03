#include<stdio.h>
int main()
{
        
    float  CP,SP,x=0;
    printf("Enter the cost price of the product= ");
    scanf("%f",&CP);
    printf("Enter the selling price of the product= ");
    scanf("%f",&SP);
    if( SP>CP)
    {
       printf("Its Profit");
       x=((SP-CP)*100)/CP;
       printf("\nThe profit percent is= %f",x);
    }
    else
    {
        printf("Its Loss");
        x=((CP-SP)*100)/CP;
        printf("\nThe Loss percent is= %f",x);
    
    }
   
    
    return 0;
   
    }