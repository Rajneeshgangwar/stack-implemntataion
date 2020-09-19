#include<stdio.h>
#include<conio.h>
#define max 5
int stack[max],top=-1;
void push();
void pop();
void display();
void main()
{
    int ch;
   while(1)
   {
        printf("enter your choice\n");
    printf("\n 1.push \n 2.pop\n 3.display\n");
    scanf("%d",&ch);
    switch(ch)
    {
        case 1: push();
        break;
        case 2: pop();
        break;
        case 3: display();
        break;
        case 4: exit(0);
        default: printf("invalid choice\n");
    }
   }
}
void push()
{
    int item;
    if(top==max-1)
    {
        printf("stack is full");
    }else
    {
        printf("enter the element to push\n");
        scanf("%d",&item);
        top=top+1;
        stack[top]=item;
    }
}
void pop()
{
    if(top==-1)
    {
        printf("the stack is empty\n");

    }else
    {
        printf("the element deleted successfully\n");
        top=top-1;

    }
}
void display()
{
    int i;
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
