#include<stdio.h>
int main()

{
    char a;
    printf("Enter the alphabet: ");
    scanf("%c",&a);
    if(a>=65 && a<=90)
    {
    printf("The entered alphabet is in Uppercase");
    }
    else if(a>=97 && a<=122)
    {
        printf("The entered alphabet is in Lowercase");
    }
    else if(a>=48 && a<=57)
    {
        printf("This is a digit");
    }
    else
    {
        printf("This is a special character");
    }

return 0;
}