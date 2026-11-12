#include<stdio.h>
#include<stdlib.h>

struct node{
    int data;
    stuct node, *next;
};

typedef struct node *NODE;

NODE getnode(int item);
{
    NODE temp = (node)malloc(sizeof(stuct node));
    if(temp==NULL)
    {
        printf("memory allocation failed");
        exit(1);
     }
     temp-> next = NULL;
return temp;

}
int main()
{
   int item ,n;
    NODE temp,tail,head;
    printf("enter the number of elements:");
    scanf("%d","&n");

    printf("enter %d integers",n);
               for(;;)

    printf("enter an item");
    scanf("%d",&item);

    temp=getnode(item);

    if(head==NULL)
      head = temp;
      else
      tail ->next = temp; 
      tail = temp;
}
  display(head);

