#include<stdio.h>
#include<stdlib.h>
#define n 10
struct node
{
	int info;
	struct node* next;
};
int top=-1;
struct node* head;
void push()
{
	if(top==n-1)
	{
		printf("Stack Overflow\n");
		return;
	}
	struct node *p=head;
	int data=0;
	printf("Enter the value: ");
	scanf("%d",&data);
	struct node *newnode=(struct node*)malloc(sizeof(struct node));
	newnode->info=data;
	newnode->next=NULL;
	if(head==NULL)
	{
		head=newnode;
	}
	else
	{
		while(p->next!=NULL)
			p=p->next;
		p->next=newnode;	
	}
	return;
}
void pop()
{
	struct node *p=head;
	struct node *q;
	if(top==-1)
	{
		printf("Stack underflow");
		return;
	}
	top--;
	if(top==-1)
	{
	printf("Empty stack");
}
	if(head!=NULL)
	{
	if(head->next!=NULL)
	{
		while((p->next)->next!=NULL)
		{
			p=p->next;
		}
		q=p;
		free(p->next);
		q->next=NULL;		
	}
	else
	{		
		free(head);
		head=NULL;
	}
}
	return ;
}
void display()
{
	struct node *p;
	p=head;
	printf("\nCurrent element(s) are:  ");
	while(p!=NULL)
	{
		printf("%d-->",p->info);
		p=p->next;
	}
	printf("NULL");
	printf("\n%d",top);
	return;
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

