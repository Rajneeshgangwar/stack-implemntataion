#include<stdio.h>
#define max 10
void push(int);
void pop();
void dispaly(int);

int stack[max],top=-1;
void main()
{
    int choice,i,item;
    while(1)
    {
    printf("\nenter the choice");
    printf("\n1.push\n2.pop\n3.display\n4.exit\n");
    scanf("%d",&choice);
    switch(choice)
    {
    case 1:
        printf("\nenter the element\n");
        scanf("%d",&item);
        push(stack,item);
        break;
    case 2:
        pop();
        break;
    case 3:
        display(i);
        break;
    case 4:
        exit(0);
        break;
    default:
        printf("\ninvalid choice");
    }
   }
}
void push(int item)
{
    if(top==max-1)
    {
        printf("the stack is full\n");

    }
    else
    {
        top=top+1;
        stack[top]=item;

    }
}
void pop()
{
    if(top==-1)
    {
        printf("stack is empty can't delete item");
    }else
    {
        top--;
        printf("element deleted successfully");
    }
}
void display(int i)
{

      if(top==-1)
    {
        printf("the stack is empty\n");

    }else
    {
        printf("the stack is ........\n");
        for(i=top;i>=0;i--)
        {
            printf("%d\n",stack[i]);
        }
    }
}

