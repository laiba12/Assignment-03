#include<stdio.h>
int main()
{
    int a,b,c,d,e,sum;
    printf("Enter the marks of all five subjects= ");
    scanf("%d%d%d%d%d",&a,&b,&c,&d,&e);
    sum=a+b+c+d+e;
    sum>=33?printf("The student is Passed"):printf("The student is Failed");
    return 0;


}