// Perform Matrix Addition of 3*3 matrix

#include<stdio.h>
void addMatrices()
{
    int a[10][10],b[10][10],i,j,sum[10][10];
    printf("Enter first array elements ");

    for(i=0;i<3;i++)
    {
        for(j=0; j<3; j++)
        {
            scanf("%d",&a[i][j]);
        }
    }

    printf("Enter second array elements ");

    for(i=0;i<3;i++)
    {
        for(j=0; j<3; j++)
        {
            scanf("%d",&b[i][j]);
        }
    }

    printf("Matrix A \n");

    for(i=0;i<3;i++)
    {
        for(j=0; j<3; j++)
        {
            printf("%d \t",a[i][j]);
        }
        printf("\n");
    }

    printf("Matrix B \n");

    for(i=0;i<3;i++)
    {
        for(j=0; j<3; j++)
        {
            printf("%d \t",b[i][j]);
        }
        printf("\n");
    }

    // Performing matrix addition

    for(i=0;i<3;i++)
    {
        for(j=0; j<3; j++)
        {
            sum[i][j] = a[i][j] + b[i][j];
        }
    }

    printf("\n Matrix A + Matrix B is \n");

    for(i=0;i<3;i++)
    {
        for(j=0; j<3; j++)
        {
            printf("%d \t", sum[i][j]);
        }
        printf("\n");
    }
}

// Matrix addition and multiplication uses same logic