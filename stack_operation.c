#include<stdio.h>
#define max 5
int main()
{
     int choice;
     int a[max];
     printf("stack operation");
     printf("1. INSERT\n");
     printf("2. DELETE\n");
     printf("3. peek\n");
     printf("4. DISPLAY\n");
     printf("enter your choice:");
     scanf("%d",&choice);

     switch(choice)
      {
     case 1: 
         void push();
         {
          int top, value;
         
          if(top==max-1)
          {
             printf("overflow\n");
          }
            else 
          {printf("enter the element that you need to push:\n");
          scanf("%d",&value);
          a[++top]=value;
          }
         }
      break;
       
      case  2:
        void pop();
        int top=-1,value;

        if(top==max)
        printf("underflow");
        top--;
        printf("the element is deleted from top:\n");
        scanf("%d",&value);
      break;

      case 3:peek();
      break;

      case 4:void display();
         int value;

      break;

      default  :Invalid choice;
      }
      return0;
}