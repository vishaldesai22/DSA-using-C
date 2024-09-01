#include<stdio.h>
#include<conio.h>
int top=-1,stack[10],n=4;
void push()
{       int x;
	printf("enter value");
	scanf("%d",&x);
	if(top==n-1)
	{printf("stack overflow");
	}
	else

	{top++;
	stack[top]=x;

	}



}
void pop()
{

	if(top==-1)
	{printf("cant pop");
	}
	else
	{
	  top--;
		}


}
void peek()
{
	if (top==-1)
	{printf("elements are not present");

	}
	else
	{printf("%d",stack[top]);
	}



}
void display()
{        int i;
	 if (top==-1)
	{printf("elements are not present");

	}
	else
	{
	for(i=top;i>=0;i--)
	{printf("%d",stack[i]);
	}
	}


}


void main()
{
	int ch;
	clrscr();
	do
	{
	printf("1.push \n 2.pop\n 3.peek \n 4.display\n\n");
	scanf("%d",&ch);

	switch(ch)
	{
	case 1:push();
	break;
	case 2:pop();
	break;
	case 3:peek();
	break;
	case 4:display();
	break;
	default:printf("wrong choice");
	break;


	}
	}while(ch!=0);

		      getch();
}