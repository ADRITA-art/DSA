#include<stdio.h>
#include<stdlib.h>
#define n 6
int f=-1,r=-1;
int queue[n];
void enqueue()
{
int item=0;
if(r>=n-1){
printf("Queue overflow");
return;
}
printf("Enter the element: ");
scanf("%d",&item);
if(f==-1)
{
	f++;
	queue[f]=item;
	r++;
}	
else{
	queue[++r]=item;
}
}
void dequeue()
{
	if((f==-1 && r==-1)||(f==n-1)){
		printf("Queue underflow");
		return;
	}
	f++;
}
void display()
{
	if((f==-1)&&(r==-1))
	printf("Empty stack");
	else if((r==n-1)&&(f==n))
	printf("ok");
	else
	{
		for(int i=f;i<=r;i++)
		printf("\n|%d|",queue[i]);
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
