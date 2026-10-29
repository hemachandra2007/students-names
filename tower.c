#include<stdio.h>

int count=0;

void tower(int n,char source ,char temp,char dest)
{
    if( n == 0)
    return;
    printf("move disk %d from %c to %c\n",n,source,dest);
    tower(n-1,source,dest,temp);
    count++;
}
int main(void)
{
    int n;
    printf("enter the number of moves:\n");
    scanf("%d",&n);
    printf("sequence of moves\n");
    tower(n,'A','B','C');
    printf("total number of moves=%d\n",count);
    return 0;

}