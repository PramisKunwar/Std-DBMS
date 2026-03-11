// Find the greatest number among 10 number.

// ar[] = 5,4,3,2,1,6,7,8,9,0
// ar [0]> ar [1] 
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