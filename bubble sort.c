#include<stdio.h>
void main()
{
     int i,j,n,a[20],temp;
     printf("enter the number of elements\n");
     scanf("%d",&n);
     printf("enter the elements:\n");
     for(i=0;i<n;i++)
     {
        scanf("%d",&a[i]);
     
    }
    printf("the elements are\n:");

    printf("\n****sorting****\n");
    for(i=0;i<n-1;i++)
    {
        for(j=0;j<n-i-1;j++)
        {
            if(a[j]>a[j+1])
            {
            temp=a[j];
            a[j]=a[j+1];
            a[j+1]=temp;
        
          }
        }
    }     
          printf("the elements after sorting\n:");
          for(i=0;i<n;i++)
          {
            printf("%d ",a[i]);

          }
 }
