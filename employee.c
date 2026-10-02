#include<stdio.h>
#include<conio.h>

struct student
{
    int emp_id;
    char emp_name[50];
    int emp_sal;
    float IT;
};

void main()
{
    struct student emp;
    int n;
    printf("enter the number of employee\n");
    scanf("%d",&n); 

    printf("enter the employee id\n");
    scanf("%d",&emp.emp_id);

    printf("enter the employee names\n");
    scanf("%s",&emp.emp_name);

    printf("enter the employee salary\n");
    scanf("%d",&emp.emp_sal);

   emp. IT=(emp.emp_sal*10)/100;
    printf("income tax to be paid is=%f\n",emp.IT);

}
