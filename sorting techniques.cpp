#include <stdio.h>
#include <stdlib.h>
int oddeven(int arr[],int n)
{
	int e=0,o=0;
	for(int i=0;i<n;i++)
	{
		if(arr[i]%2==0)
		e++;
		else 
		o++;
	}	
	printf("The number of even numbers is :%d\nThe number of odd numbers is :%d\n",e,o);
	return 1;
}
int printarray(int arr[],int k)
{
	for(int i=0;i<k;i++)
	printf("%d\n",arr[i]);
	return 0;
}
int BubbleSort(int arr[],int n)
{
	int temp=0;
	for(int i=0;i<n-1;i++)
	{
		for(int j=0;j<n-i-1;j++)
		{
			if(arr[j]>arr[j+1])
			{
				temp=arr[j];
				arr[j]=arr[j+1];
				arr[j+1]=temp;
			}
		}
	}
	printarray(arr,n);
	return 0;
}
int SelectionSort(int arr[],int n)
{
	int min=0,temp=0;
	for(int i=0;i<n-1;i++)
	{
		min=i;
		for(int j=i+1;j<n;j++)
		{
			if(arr[min]>arr[j])
			min=j;
		}
		temp=arr[min];
		arr[min]=arr[i];
		arr[i]=temp;	
	}
	printarray(arr,n);
	return 0;	
}
int InsertionSort(int arr[],int n)
{//5->2->4||5->5->4||2->5->4||2->5->5||2->4->5
	int key=0,j=0;
	for(int i=1;i<n;i++ )
	{
		key=arr[i];
		j=i-1;
		while(j>=0 && arr[j]>key)
		{
			arr[j+1]=arr[j];
			j=j-1;
		}
		arr[j+1]=key;
	}
	printarray(arr,n);
	
}

int main()
{
	int n=0;
	int arr[60];
	printf("Enter the number of elements in the array\n");
	scanf("%d",&n);
	printf("Enter the numbers in the array\n");
	for(int i=0;i<n;i++)
	scanf("%d",&arr[i]);
	oddeven(arr,n);
	BubbleSort(arr,n);
	InsertionSort(arr,n);
	SelectionSort(arr,n);
return 0;	
}

