#include<stdio.h>
int main()
{
    int a,b,c;
    printf("Enter the numbers= ");
    scanf("%d%d%d",&a,&b,&c);
    if(a>b && a>c)
    {
        printf("First number is the greatest");
    }
    if(b>a && b>c)
    {
        printf("Second number is the greatest");
    }
    if(c>a && c>b)
    {
        printf("Third number is the greatest");
    }
    return 0;
}