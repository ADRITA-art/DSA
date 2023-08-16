#include <stdio.h>
#include <stdlib.h>
struct node
{
	int info;
	struct node* next;
};
struct node* head;
int k;
//TO COUNT NUMBER OF NODES PRESENT AT A PARTICULAR TIME
int count()
{
	k=1;	
	struct node *p=head;
	if(head==NULL)
	{
		k=0;
		return 0;
	}
	while(p->next!=NULL)
	{
		k++;
		p=p->next;		
	}
}

//TO INSERT NODES FROM THE BEGINNING OF A LINKED LIST
int beg()
{
	int data;
	printf("Enter the element: ");
	scanf("%d",&data);
	struct node *newnode=(struct node*)malloc(sizeof(struct node));
	newnode->info=data;
	if(head==NULL)
	{
		head=newnode;
		newnode->next=NULL;
	}
	else
	{
		newnode->next=head;
		head=newnode;
	}
	return 0;
}

//TO INSERT NODES FROM THE NED SIDE OF THE LINKED LIST
int insertend()
{
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
		//newnode->next=NULL;
	}
	else
	{
		while(p->next!=NULL)
			p=p->next;
		p->next=newnode;	
	}
	return 0;	
}

//TO INSERT NODES FROM ANY POSITION OF THE LINKED LIST ACCORDING TO USER'S CHOICE
int insertanypos()
{
	int pos=0,data=0,c=1;
	struct node *p=head;
	struct node *q;
	count();
	if(k==0)
	{
		beg();
		return 0;
	}
	printf("Enter the position");
	scanf("%d",&pos);	
	if(pos==1)
	{
		beg();
	}
	else if((pos<=k)&&(pos>=1))
	{
	struct node *newnode=(struct node*)malloc(sizeof(struct node));
	printf("Enter the value");
	scanf("%d",&data);
	newnode->info=data;
	while(c<pos-1)
	{
		p=p->next;
		c++;
	}
	q=p->next;
	p->next=newnode;
	newnode->next=q;
	}
	else if(pos==k+1)
	insertend();
	else
	printf("invalid ");

	return 1;
}

//TO DELETE NODES FROM THE BEGINNING OF THE LINKED LIST
int delbeg()
{
struct node *p=head;
	if(head!=NULL)
	{
 	p=head->next;
 	free(head);
	 head=p;	
	}
	return 0;
}

//TO DELETE NODES FROM THE END OF THE LINKED LIST
int delend()
{
	struct node *p=head;
	struct node *q;
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
	return 0;
}

//TO DELETE NODES FROM ANY POSTION OF THE LINKED LIST ACCORDING TO USERS CHOICE
int delanypos()
{
	struct node *p=head;
	struct node *q,*m;
	int pos=0,c=1;
	count();
	if(k==1)
	{
		delbeg();
	}
	else
	{
	printf("Enter the position to delete item");
	scanf("%d",&pos);
	count();
	if(pos==1)
	delbeg();
	else if(pos==k)
	delend();
	else if((pos<k)&&(pos>=1))
	{
		while(c<pos-1)
		{
		p=p->next;
		c++;	
		}
		q=p->next;
		m=q->next;
		free(q);
		p->next=m;
		
	}
	else
	printf("Invalid input");
}
	return 1;
}

//TO REVERSE A LINKED LIST
int reverse()
{
	if(head->next!=NULL)
	{
	struct node *p=head;
	struct node *q=p->next;
	p->next=NULL;
	p=q;
	while(p->next!=NULL)
	{
	p=p->next;
	q->next=head;
	head=q;
	q=p;
	}
	p->next=head;
	head=p;
	}
return 0;
}

//TO DISPLAY A LINKED LIST
int display()
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
	count();
	printf("\n%d",k);
	return 0;
}

//MAIN FUNCTION FOR SWITCH CASE
int main()
{
	int ch=0;
	printf("Enter 1 to insert from front\n");
	printf("Enter 2 to insert from end\n");
	printf("Enter 3 to insert from any point\n");
	printf("Enter 4 to delete from front\n");
	printf("Enter 5 to delete from end\n");
	printf("Enter 6 to delete from any position\n");
	printf("Enter 7 to display\n");
	printf("Enter 8 to reverse the linked list\n");
	printf("9:To exit\n");
	do
	{
		printf("\nEnter your choice: ");
		scanf("%d",&ch);
		switch(ch)
		{
			case 1:
			beg();
			break;
				
			case 2:
			insertend();
			break;
					
			case 3:
			insertanypos();
			break;
						
			case 4:
			delbeg();					
			break;
							
			case 5:
			delend();							
			break;
								
			case 6:
			delanypos();
			break;
					
			case 7:																			
			break;
			
			case 8:
			reverse();													
			break;
													
			case 9:
			exit(0);
			break;
													
			default:
			printf("Wrong Choice\n");
			break;
		}
		display();														
	}while(1);
}//END OF MAIN
