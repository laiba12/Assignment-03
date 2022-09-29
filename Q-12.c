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
    else 
    {
        printf("This is not an alphabet");
    }

return 0;
}