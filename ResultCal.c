// WAP in C to input marls obtained by n-students in computer science and 
// and Calculate average marks of all and number of failed students. 

#include<stdio.h>
int main()
{
    int n,i,avg,a[50],sum,f=0;
    printf("enter how many students marks you want to enter ");
    scanf("%d",&n);

    for(i=0;i<n;i++)
    {
        printf("Enter marks of student '%d' ",i+1);
        scanf("%d",&a[i]);
        sum = sum + a[i];
    }
    avg = sum/n;
    printf("Average marks is is %d ",avg);

    for(i=0;i<n;i++)
    {
        if(a[i]<40)
        {
            f = f+1;
        }
    }

    printf("\n %d students are failed ",f);

    return 0;
}