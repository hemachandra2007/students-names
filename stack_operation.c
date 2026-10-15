#include <stdio.h>
#define max 5

int main()
{
    int choice, top = -1;
    int a[max];

    printf("\nStack Operations\n");
    printf("1. INSERT\n");
    printf("2. DELETE\n");
    printf("3. PEEK\n");
    printf("4. DISPLAY\n");
    printf("Enter your choice: ");
    scanf("%d", &choice);

    switch (choice)
   do {
        case 1:
            if (top == max - 1)
            {
                printf("Overflow\n");
            }
            else
            {
                int value;
                printf("Enter the element to push: ");
                scanf("%d", &value);
                top++;
                a[top] = value;
                printf("Element inserted successfully\n");
            }
            break;

        case 2:
            if (top == -1)
            {
                printf("Underflow\n");
            }
            else
            {
                printf("The deleted element is: %d\n", a[top]);
                top--;
            }
            break;

        case 3:
            if (top == -1)
            {
                printf("Stack is empty\n");
            }
            else
            {
                printf("Top element: %d\n", a[top]);
            }
            break;

        case 4:
            if (top == -1)
            {
                printf("Stack is empty\n");
            }
            else
            {
                printf("Stack elements are:\n");
                for (int i = top; i >= 0; i--)
                {
                    printf("%d\n", a[i]);
                }
            }
            break;

        default:
            printf("Invalid choice\n");
    }while(choice<5 && choice>0);

    return 0;
   }
