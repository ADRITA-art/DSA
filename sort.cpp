#include <stdio.h>
void print(int arr[],int n)
{
	for(int i=0;i<n;i++)
	printf("%d",arr[i]);
}
void bubblesort(int arr[],int n)
{
	int temp=0;
	for(int i=0;i<n-1;i++)
	{
		for(int j=0;j<n-1-i;j++)
		{
			if(arr[j]>arr[j+1])
			{
				temp=arr[j];
				arr[j]=arr[j+1];
				arr[j+1]=temp;
			}
		}
	}
	print(arr,n);
}
void selections(int arr[],int n)
{
	int temp=0,min;
	for(int i=0;i<n-1;i++)
	{
	min=i;
	for(int j=i+1;j<n;j++)
	{
		if(arr[j]<arr[min])
		min=j;
	}
	temp=arr[i];
	arr[i]=arr[min];
	arr[min]=temp;
	    
	}
	print(arr,n);
}
void insertionsort(int arr[],int n)
{
	int temp=0,key=0,j=0;
	for(int i=1;i<n;i++)
	{
		key=arr[i];
		j=i-1;
		while(j>=0 && arr[j]>key)
		{
			arr[j+1]=arr[j];
			j--;
		}
		arr[j+1]=key;
	}
	print(arr,n);
}
int main()
{
	int n,ele;
	int ar[20];
	printf("Enter number of elements you want to enter");
	scanf("%d",&n);
	printf("Enter the elements");
	for(int i=0;i<n;i++)
	scanf("%d",&ar[i]);
	insertionsort(ar,n);
	return 1;
}
