// Program to find the greatest number among 10 number.

#include<stdio.h>
void findGreatestAmongTen()
{
    int i,gre,ar[10];
    printf("Enter numbers serially \t");
    for (i=0;i<10;i++)
    {
        scanf("%d",&ar[i]);
    }
    gre = ar[0];
    for(i = 1; i < 10; i++) 
    {
    if(ar[i] > gre) {
        gre = ar[i];
    }
    }
    printf("%d is the greatest number", gre);
}