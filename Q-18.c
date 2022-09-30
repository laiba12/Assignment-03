#include<stdio.h>
int main()
{
    int a;
    printf("Enter the month number= ");
    scanf("%d",&a);
    if(a==1||a==3||a==5||a==7||a==8||a==10||a==12)
    {
        printf("This month has 31 Days");
    }
    else if(a==4||a==6||a==9||a==11)
    {
        printf("This month has 30 Days ");
}
else if(a==2)
{
    printf("This month has 28/29 Days");
}
return 0;
}
