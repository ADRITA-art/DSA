#include <stdio.h>
#include <stdlib.h>
struct node
{
	int info;
	struct node* left;
	struct node* right;
};
struct node* head;
struct node* end;
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
	else if(p->right==NULL)
	{
		k=1;
		return 0;
	}
	while(p->right!=head)
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
	if((head==NULL))
	{
		head=newnode;
		end=newnode;
		newnode->left=newnode;
		newnode->right=newnode;
	}
	else
	{
		head->left=newnode;
		newnode->right=head;
		head=newnode;
		newnode->left=end;
		end->right=head;
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
	if((head==NULL))
	{
		head=newnode;
		end=newnode;
		newnode->left=newnode;
		newnode->right=newnode;
	}
	else
	{
		while((p->right!=head)&&(p->right!=NULL))
		p=p->right;
		p->right=newnode;
		newnode->left=p;
		newnode->right=head;
		head->left=newnode;
		end=newnode;
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
		beg();
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
	if((head!=NULL)&&(head->right)!=head)
	{
 	p=head->right;
 	free(head);
	head=p;
	head->left=end;
	end->right=head;	
	}
	else
	{
	free(head);
	head=NULL;
	}
	return 0;
}
int delend()
{
	struct node *p=head;
	struct node *q;
    if((head!=NULL)&&(head->right)!=head)
	{
		while(p!=end)
		p=p->right;
		q=p->left;	
		free(p);
		q->right=head;
		end=q;
		head->left=end;
	}
	else
	{
	free(head);
	head=NULL;
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
int delbyval()
{
	int val;
	printf("Enter the value to be deleted\n");
	scanf("%d",&val);
	struct node* p=head;
	struct node* q,m;
	count();
	for(int i=1;i<=k;i++)
	{
		if(p->info==val)
		{
			q=p->left;
			m=p->right;
			free(p);
			q->right=m;
			m->left=q;
			if(i==1)
			head==m;
			else if(i==k)
			end=q;
			p=p->right;
		}
	}
}
int reverse1()
{
	if(head!=NULL)
	{
	struct node *p=head;
	struct node *q;
	end=head;
	while(p->right!=head)
	{
		q=p->left;
		p->left=p->right;
		p->right=q;
		p=p->left;
	}
	q=p->left;
	p->left=p->right;
	p->right=q;
	head=p;	
	}		
}
int display()
{
	struct node *p=head;
	count();
	printf("\nCurrent element(s) are:  ");
	if(p!=NULL)
	{
	while((p->right!=head))
	{
		printf("|%d|",p->left);
		printf("|%d:%d|",p->info,p);
		printf("|%d|-->",p->right);
		p=p->right;
	}
	printf("|%d|",p->left);
	printf("|%d:%d|",p->info,p);
	printf("|%d|",p->right);
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
