#include<stdio.h>
int top=-1;
int stack[10];
void push(int n)
{
	if(top==9){
		printf("Stack oerflow");
		return;
	}
	else
	stack[top++]=n;
}
void pop()
{
	if(top==-1)
	{
		printf("Stack underflow");
		return;
	}
	else
	{
		printf("%d",stack[top]);
		top--;
	}
}
	int main()
	{
		int n=0;
		printf("Enter the decimal number: \n");
		scanf("%d",&n);
		while(n>0)
		{
			push(n%2);
			n=n/2;
		}
		while(top>-1)
		{
			pop();
		}
		return 1;
	}
	
	

