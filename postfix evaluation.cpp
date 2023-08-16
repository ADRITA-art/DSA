#include<stdio.h>
#include<stdlib.h>
#include<string.h>
#include<math.h>
#define n 10;
double st[10];
int top=-1;
void push(double ele)
{
	if(top==9)
	{
		printf("Stack overflow\n");
	}
	else
	{
		top++;
		st[top]=ele;
	}
	return;
}
double pop()
{
	double x=0.0;
	if(top==-1)
	printf("Stack underflows\n");
	else
	{
		x=st[top];
		top--;
		return(x);
	}
}
int main()
{
	char s[100];
	char str[10];
	int x=0,z=0,m=0,b=0;
	double l=0.0,f=0.0,w=0.0,y=0.0;
	char ch=' ';
	printf("Enter a postfix expression: ");
	gets(s);
	x=strlen(s);
	for(int i=0;i<x;i++)
	{
		ch=s[i];
		b=(int)ch;
		if(b>=48 && b<=57)
		{
		push(b-48);
	}
	else{
	l=pop();
	f=pop();
			switch(ch)
			{
				case '+':
				w=f+l;
				break;
				case '-':
				w=f-l;
				break;
				case '*':
				w=f*l;
				break;
				case '/':
				w=f/l;
				break;
				case '^':
				w=pow(f,l);
				break;				
			}
			push(w);
			if(top==9)
		return 0;
			
		}
	}
		
		printf("The value is: %.2f",pop());
	return 0;
}
