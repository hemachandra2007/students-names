#include<stdio.h>
#include<conio.h>

struct student
{
    int emp_id;
    char emp_name[50];
    int emp_sal;
    float IT;
};

int main()
{
    struct student emp;
    int n,i;
    printf("enter the number of employee\n");
    scanf("%d",&n); 

    printf("enter the employee id\n");
    for(i=0;i<n;i++)
    scanf("%d",&emp.emp_id);

    printf("enter the employee names\n");
    for(i=0;i<n;i++)
    scanf("%s",&emp.emp_name);

    printf("enter the employee salary\n");
    for(i=0;i<n;i++)
    scanf("%d",&emp.emp_sal);

   emp. IT=(emp.emp_sal*10)/100.0;
   for(i=0;i<n;i++)
    printf("income tax to be paid is=%f\n",emp.IT);

     return 0;
}
