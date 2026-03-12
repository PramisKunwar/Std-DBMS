// Write a program to check whether the given string is palindrome or not.
#include<stdio.h>
#include<string.h>
int main()
{
    char s[10],r[10];
    int l,i,j=0;
    printf("enter a string ");
    scanf("%s",s);
    l = strlen(s);

    for(i=l-1;i>=0;i--)
    {
        r[j]=s[i];
        j=j+1;
    }

     r[j] = '\0';

    printf("Reverse is ");
    for(j=0;j<=l;j++)
    {
        printf("%c",r[j]);
    }

    if (strcmp(s,r) == 0)
    {
        printf("\n The string is palindrome");
    }
    else
    {
        printf("\n The string is not palindrome");
    }
    return 0;
}