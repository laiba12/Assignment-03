#include<stdio.h>
int main()
{
    int a,b,c,D;
    printf("enter the coefficients of a,b and c of quadratic equation= ");
    scanf("%d%d%d",&a,&b,&c);
    D=b*b-4*a*c;
    if(D>0)
    {
        printf("Roots of given equation are real and distinct");
    }
    if(D==0)
    {
        printf("Roots of given equation are real and equal");
    }
    if(D<0)
    {
        printf("Roots of given equation are imaginary");
    }
    return 0;
}