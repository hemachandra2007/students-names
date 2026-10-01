#include<stdio.h>
void main()
{
    int n,i,m;
    char names[20][50];
    printf("enter the number of students\n");
    scanf("%d",&n);

    printf("enter the students names:\n");
    for(i=0;i<n;i++)
    {
    scanf("%s",names[i]);
    }
    printf("enter the number of names to be displayed\n");
     scanf("%d",&m);

    printf("\n first %d students are\n:",m);

    for(i=0;i<m;i++)

   {     
    printf("%d.%s\n",i+1,names[i]);
   }
}