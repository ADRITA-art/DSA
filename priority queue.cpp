#include<stdio.h>
#include<stdlib.h>
#define n 6
int c=0;
int q[n];
void enqueue()
{
	if(c==n)
	{
		printf("Queue Overflow");
		return;
	}
	int item=0;
	printf("Enter the element: ");
	scanf("%d",&item);
	q[c]=item;
	c++;
}
int find(int x)
{
	for(int i=0;i<c;i++)
	{
		if(q[i]==x)
		return i;
	}
	return -1;
}
void dequeue(){
	if(c==0)
	{
		printf("Queue underflows");
		return;
	}
	int item=0,k=0;
	printf("Enter the element to delete: ");
	scanf("%d",&item);
	k=find(item);
	if(k==-1)
	{
		printf("Element not present\n");
		return;
	}
	for(int i=k;i<c-1;i++)
	{
		q[i]=q[i+1];
	}
	c--;
	}
	display()
	{
		for(int i=0;i<c;i++)
		printf("|%d| ",q[i]);
	}
	int main()
{
	int ch=0;
	printf("Enter 1 to Enqueue\n");
	printf("Enter 2 to Dequeue\n");
	printf("Enter 3 to exit\n");
	do
	{
		
		printf("Enter your choice: ");
		scanf("%d",&ch);
		switch(ch)
		{
			case 1:
			enqueue();
			break;
			case 2:
			dequeue();
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
	return 1;
}//END OF MAIN

