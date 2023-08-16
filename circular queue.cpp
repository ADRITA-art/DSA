#include<stdio.h>
#include<stdlib.h>
#include<math.h>
#define n 6
int f=-1,r=-1;
int queue[n];
void enqueue()
{
int item=0;
if((r==f-1)||((f==0)&&(r==n-1))){
printf("Queue overflow");
return;
}
printf("Enter the element: ");
scanf("%d",&item);
if((f==-1)&&(r==-1))
{
	f=0;
	r=0;
	queue[f]=item;
}	
else{
	r=(r+1)%n;
	queue[r]=item;
}
}
void dequeue()
{
	if(f==-1 && r==-1)
	{
		printf("Queue underflow");
		return;
	}
	else if((f==r)&&(f!=-1))
	{
		f=-1;
		r=-1;
	}
	else
	{0
		f=(f+1)%n;
	}
}
void display()
{
	if((f==-1)&&(r==-1))
	printf("Empty stack");
	
	else
	{
		for(int i=f;i<=r;i++)
		{
		printf("\n|%d|",queue[i]);
	}
	
		printf("\nFront: %d\n",f);
		printf("Rear: %d\n",r);		
	}
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
