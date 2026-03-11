// Find the greatest number among 10 number.

#include<stdio.h>
int main()
{
    int i,gre,ar[10];
    printf("Enter numbers serially \t");
    for (i=0;i<10;i++)
    {
        scanf("%d",&ar[i]);
    }

    for(i=0;i<10;i++)
    {
        if(ar[i]>ar[i+1])
        {
            gre = ar[i];
        }
    }
    printf("%d is the greatest number", gre);

    return 0;
}