// WAP to print multiplication table of an entered number using user define function

#include<stdio.h>
void mul(int n);
int main()
{
    int n;
    printf("Enter a number ");
    scanf("%d",&n);
    mul(n);
}

void mul(n)
{
    int i,m;
    printf("The multiplication table of %d is: \n",n);
    for(i=1;i<=10;i++)
    {
        m = n*i;
        printf("%d * %d = %d \n",n,i,m);
    }
}

// The main logic of a multiplciatopn ya multiplication table is the the that the when a n user 
// enters a number then that number should be multo[l m] multiplied by i numbers from 1 to 10 so the 
// main logic is that the number should be multiplied by 