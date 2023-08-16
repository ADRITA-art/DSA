#include <stdio.h>
#include <stdlib.h>
struct node
{
	int info;
	struct node* left;
	struct node* right;
};
struct node* head;
int k;
int count()
{
	k=1;	
	struct node *p=head;
	if(head==NULL)
	{
		k=0;
		return 0;
	}
	while(p->right!=NULL)
	{
		k++;
		p=p->right;		
	}
}

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
		newnode->left=NULL;
		newnode->right=NULL;
	}
	else
	{
		head->left=newnode;
		newnode->right=head;
		head=newnode;
		newnode->left=NULL;
	}
	return 0;
}

int insertend()
{
	struct node *p=head;
	int data=0;
	printf("Enter the value: ");
	scanf("%d",&data);
	struct node *newnode=(struct node*)malloc(sizeof(struct node));
	newnode->info=data;
	newnode->right=NULL;
	if(head==NULL)
	{
	head=newnode;
	newnode->left=NULL;
	}
	else
	{
		while(p->right!=NULL)
		p=p->right;
	p->right=newnode;
	}
	return 1;
}
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
	printf("Enter the position: ");
	scanf("%d",&pos);	
	if(pos==1)
	{
		beg();
	}
	else if((pos<=k)&&(pos>=1))
	{
	struct node *newnode=(struct node*)malloc(sizeof(struct node));
	printf("Enter the value: ");
	scanf("%d",&data);
	newnode->info=data;
	while(c<pos-1)
	{
		p=p->right;
		c++;
	}
	newnode->left=p;
	newnode->right=p->right;
	p->right=newnode;
	q=newnode->right;
	q->left=newnode;
	
	}
	else if(pos==k+1)
	insertend();
	else
	printf("invalid ");

	return 1;
}

int delbeg()
{
struct node *p=head;
	if(head!=NULL)
	{
 	p=head->right;
 	free(head);
	 head=p;	
	}
	return 0;
}

int delend()
{
	struct node *p=head;
	struct node *q;
	if(head!=NULL)
	{
	if(head->right!=NULL)
	{
		while((p->right)!=NULL)
		{
			p=p->right;
		}
		q=p->left;
		
		free(p);
		q->right=NULL;		
	}
	else
	{		
		free(head);
		head=NULL;
	}
}
	return 0;
}
int delanypos()
{
	struct node *p=head;
	struct node *q,*m;
	int pos=0,c=1;
	count();
	if(head!=NULL)
	{
	if(k==1)
	{
		delbeg();
	}
	else
	{
	printf("Enter the position to delete item: ");
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
		p=p->right;
		c++;	
		}
		q=p->right;
		m=q->right;
		free(q);
		p->right=m;
		m->left=p;
		
	}
	else
	printf("Invalid input ");
}
}
}

int reverse1()
{
	if(head!=NULL)
	{
	struct node *p=head;
	struct node *q,*m;
	while(p!=NULL)
	{
		q=p->left;
		p->left=p->right;
		p->right=q;
		m=p;
		p=p->left;

	}
	head=m;
	}	
	
}

int display()
{
	struct node *p=head;
	printf("\nCurrent element(s) are:  ");
	if(p!=NULL)
	{
	while(p!=NULL)
	{
		printf("|%d|-->",p->info);
		p=p->right;
	}
	printf("%d",head->info);
}
else
printf("NULL");
	return 0;
}

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
			reverse1();													
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
