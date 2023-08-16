#include <stdio.h>
#include <stdlib.h>
#include <conio.h>
int main()
{
	int *n;
	int size;
	scanf("%d",&size);
	n=(int*)calloc(size,sizeof(int));
	if(n==NULL)
	
	{
		printf("Memory allocation unsuccesful");
	}
	else
	{
		printf("Enter the elements");
		for(int j=0;j<size;j++)
		scanf("%d",&n[j]);
		for(int j=0;j<size;j++)
		printf("%d",n[j]);
		
	}
	return 1;
}
