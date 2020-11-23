#include<stdio.h>
int stack[100],choice,n,top,x,i;
void push(void);
void pop(void);
void display(void);
int main()
{
    top=-1;
    printf("enter the size of stack\n");
    scanf("%d",&n);
    printf("enter 1 to push 2 to pop 3 to display 4 to exit \n");
    do
    {
       printf("enter ur choice\n");
    scanf("%d",&choice);
    switch(choice)
    {
        case 1:
        {
            push();
            break;
        }
         case 2:
        {
            pop();
            break;
        }
         case 3:
        {
            display();
            break;
        }
                 case 4:
        {
            printf("\n exit");
            break;
        }
        default:
        {
          printf("\n enter a valid choice");   
        }
    }
    }
    while(choice!=4);
    return 0;
}
    void push()
    {
        if (top>=n-1)
        {
            printf("overflow\n");
            }
            else
            {
            printf("enter the value to b pushed\n");
            scanf("%d",&x);
            top++;
            stack[top]=x;
            }
    }
            void pop()
            {
                 if (top<=-1)
                 {
                     printf("underflow\n");
                 }
                 else
                 {
                     printf("%d",stack[top]);
                     top--;
                 }
            }
                 void display()
                 {
                     if(top>=0)
                     {
                         printf("the elemnts of stack is\n");
                         for(i=top;i>=0;i--)
                         printf("\n%d",stack[i]);
                          printf("enter next choice");
                     }
                     else
                     {
                         printf("empty");
                     }
                 }