#include<stdio.h>
int main()
{
    int a,b,c,sum;
    printf("Enter the length of sides of Triangle= ");
    scanf("%d%d%d",&a,&b,&c);
    a+b>c && b+c>a && a+c>b?printf("Trinagle is valid"):printf("Triangle is NOT valid");
    return 0;
}
