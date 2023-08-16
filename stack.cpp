#include<stdio.h>
#include<stdlib.h>
#define n 10
int top=-1;
int arr[n];
void display()
{
	if(top==-1)
	return;
	for(int i=0;i<=top;i++)
	printf("|%d| ",arr[i]);
}
void push()
{
	int item=0;
	if(top==n-1)
	{
		printf("Stack Overflow\n");
		return;
	}
	printf("Enter the value: ");
	scanf("%d",&item);
	top++;
	arr[top]=item;
}
void pop()
{
	if(top==-1)
	{
		printf("Stack underflow");
		return;
	}
	top--;
	if(top==-1)
	printf("Empty stack");
}
int main()
{
	int ch=0;
	printf("Enter 1 to push element in stack\n");
	printf("Enter 2 to pop element from stack\n");
	printf("Enter 3 to exit\n");
	do
	{
		printf("\nMaximum size of stack is: %d\n",n);
		printf("Remaining space in stack is: %d\n",(n-top-1));		
		printf("Enter your choice: ");
		scanf("%d",&ch);
		switch(ch)
		{
			case 1:
			push();
			break;
			case 2:
			pop();
			break;
			case 3:
			exit(0);
			default:
			printf("Wrong Choice\n");
			break;
		}
		display();
		printf("\n");														
	}while(1);
}//END OF MAIN
	

