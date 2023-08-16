#include<stdio.h>
#include<stdlib.h>
#define n 6
int arr[n];
void quicksort(int left,int right)
{
	int pivot=left;
	int temp=0;
	int c1=left+1;
	int c2=right-1;
	
	while(c1<c2)
	{
		if(arr[c1]>arr[pivot] && arr[c2]<arr[pivot])
		{
		temp=arr[c1];
		arr[c1]=arr[c2];
		arr[c2]=temp;
		c1++;
		c2--;	
		}
		else if(arr[c1]<=pivot && arr[c2]<pivot)
		c1++;
		else if(arr[c2]>=pivot && arr[c1]>pivot)
		c2--;
	}
	temp=arr[c2];
	arr[c2]=arr[pivot];
	arr[pivot]=temp;
	quicksort(0,pivot);
	quicksort(pivot,n);
	}
	int main()
	{
	printf("Enter the elements: ");
	for(int i=0;i<n;i++)
	scanf("%d",&arr[i]);
	quicksort(0,n);
	for(int i=0;i<n;i++)
	printf("%d",arr[i]);	
	}
	

