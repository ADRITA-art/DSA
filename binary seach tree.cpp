#include <stdio.h>
#include <stdlib.h>
struct node
{
	int info;
	struct node* left;
	struct node* right;
	};
struct node* root;
int k;
int count(int x)
{
	struct node *p=root;
	int k=0;
	if(p==NULL)
	return -1;
	else
	{
		while(p!=NULL)
		{
			if(x>p->info)
			{
				p=p->right;
			}
			else if(x<p->info)
			p=p->left;
			else
			{
			 if(p->left!=NULL)	
			 k++;
			 if(p->right!=NULL)	
			 k++;
			 return k;
			}
		}
		return -1;
	}
}
void deletel(int x)
{
struct node *p=root;
struct node *b;
struct node *q;
int k=count(x);
if(k==-1){
printf("Element not found");
return;
}
while(p->info!=x)
{
	q=p;
	if(x>p->info)
	p=p->right;
	else
	p=p->left;
}
if(k==0)
{
	
	if(p==root)
	root=NULL;
	else
	{
	free(p);
	if(x>q->info)
	q->right=NULL;
	else
	q->left=NULL;
}
	
}
else if(k==1)
{
	if(p==root)
	{
		if(p->left!=NULL)	
		 root=p->left;
			else
			 root=p->right;
			 return;
	}
if(p->right==NULL)
b=p->left;
else
b=p->right;
if(x>q->info)
{
	q->right=b;
}	
	else
			q->left=b;
			free(p);
}
else
{
		struct node* n=p;
		struct node* b = p;
        struct node* s = p->right;
        struct node* r = p->right;
        struct node* m = s->right;
        struct node* l=p->left;
        struct node* a;
        while (s->left != NULL) {
            n = s;
            s = s->left;
		}
		a=s->right;
		if(p==root)
		{
		root=s;
		if(n==p)
		{	
		free(p);
		s->left=l;
		s->right=m;
		return;
	}
	else
	{
		
		free(p);
		s->left=l;
		s->right=r;
		n->left=a;
		return;
	}
		
		
	}
		if(n!=p)
		{
		if(x<q->info)
		q->left=s;
		else
		q->right=s;
		s->left=l;
		s->right=r;
		n->left=a;
		}
		else
		{
		if(x<q->info)
		q->left=s;
		else
		q->right=s;
		s->left=l;
	}
		return;
}
}
int insert()
{
	int data=0;
	struct node *p=root;
	struct node *q;
	printf("Enter the element: ");
	scanf("%d",&data);
	struct node *newnode=(struct node*)malloc(sizeof(struct node));
	newnode->info=data;
	newnode->left=NULL;
	newnode->right=NULL;
	if(root==NULL)
		root=newnode;
	else
		while(p!=NULL)
		{
			q=p;
			if(data>p->info)
				p=p->right;
			else if(data<p->info)
				p=p->left;
		}
		if(q->info>data)
		q->left=newnode;
		else
		q->right=newnode;
	}
void inorderTraversal(struct node* root) {
  if (root == NULL) 
  return ;
  inorderTraversal(root->left);
  printf("%d ->", root->info);
  inorderTraversal(root->right);
}
void preorderTraversal(struct node *root)
{
	if(root ==NULL)
	return;
	printf("%d ->",root->info);
	preorderTraversal(root->left);
	preorderTraversal(root->right);
}
void postorderTraversal(struct node *root)
{
	if(root ==NULL)
	return;
	postorderTraversal(root->left);
	postorderTraversal(root->right);
	printf("%d ->",root->info);
}

	int main()
	{
		int ch;
		printf("\n1: To insert a number\n");
		printf("2: To delete element\n");
		printf("3: Exit\n");		
		do
		{
		printf("\nEnter your choice: ");
		scanf("%d",&ch);
		switch(ch)
		{
			case 1:
			insert();
			break;
			case 2:
				{
			int n=0;
			printf("Enter the element to delete: ");
			scanf("%d",&n);
			deletel(n);
			break;
		}
			case 3:
			exit(0);
			
				
		}
		printf("INORDER:");
		inorderTraversal(root);
		printf("\n");
		printf("PREORDER:");
		preorderTraversal(root);
		printf("\n");
		printf("POSTORDER:");
		postorderTraversal(root);
		printf("\n");
		
	}while(1);
}


