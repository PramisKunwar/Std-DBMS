// Program to check whether input num is positive ,negative or zero using user defined function

#include<stdio.h>
void check(int n);
int main ()
{
    int n;
    printf("Enter a number ");
    scanf("%d",&n);
    check(n);
    return 0;
}

void check( int n)
{
    if(n>0)
    {
        printf("\n %d is positive",n);
    }
    else if(n<0)
    {
        printf("\n %d is negative",n);
    }
    else
    {
        printf("%d is neutral",n);
    }
    
}