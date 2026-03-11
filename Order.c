// Sort n numbers in ascending and descending order.       
#include<stdio.h>
int main()
{
    int a[10],i,j,temp,n;
    printf("How many numbers? ");
    scanf("%d",&n);

    for(i=0;i<n;i++)
    {
        scanf("%d",&a[i]);
    }

    for(i=0;i<n;i++)
    {
        for(j=i+1;j<n;j++)
        {
            if(a[i]>a[j])
        {
            temp = a[i];
            a[i] = a[j];
            a[j] = temp;
        }
        }
    }

    printf("\nAscending is ");

    for(i=0;i<n;i++)
    {
        printf("%d\t",a[i]); 
    }

    for(i=0;i<n;i++)
    {
        for(j=i+1;j<n;j++)
        {
            if(a[i]<a[j])
        {
            temp = a[i];
            a[i] = a[j];
            a[j] = temp;
        }
        }
    }

    printf("\nDescending is ");
    for(i=0;i<n;i++)
    {
        printf("%d\t",a[i]); 
    }

    return 0;
}
