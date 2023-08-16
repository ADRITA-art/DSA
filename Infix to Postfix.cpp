#include<stdio.h>
#include<string.h>
#include<stdlib.h>
int top=-1;
char stack[20];
bool check(char a)
{
	return((a>='0' && a<='9')||(a>='a' && a<='z')||(a>='A' && a<='Z'));
}
int operatorprece(char t)
{
	switch(t)
	{
		case ')':
		case '(':
		return 0;
		case '+':
		case '-':
		return 1;
		case '*':
		case '/':
		return 2;
		case '^':
		return 3;
		default:
		exit(0);
		return 0;
	}
}
void push(char c)
{
	top++;
	stack[top]=c;
}
char pop()
{
	return (stack[top--]);
}
void convert(char s[])
{
	int i,j=0;
	char exp[20];
	char c1,c2;
	for(i=0;i<strlen(s);i++)
	{
		c1=s[i];
		if(check(c1))
		{
			exp[j++]=c1;
		}
		else
		{
			while(top!=-1 && operatorprece(c1)<=operatorprece(stack[top])&& (c1!='('))
			{
				c2=pop();
				if(c2=='(')
				break;
				if(c1!='(')
				exp[j++]=c2;
			}
			if(c1!=')')
				push(c1);
				
			}
		}
		while(top!=-1)
			exp[j++]=pop();
			for(i=0;i<j;i++)
			{
				if((exp[i]!='(')&&(exp[i]!=')'))
			printf("%c ",exp[i]);
			}
	}
int main()
{
	char s1[20];
	printf("Enter the expression: ");
	gets(s1);
//	push('(');
//	s1[strlen(s1)]=')';
	printf("Postfix form is: ");
	convert(s1);
	return 0;
}
