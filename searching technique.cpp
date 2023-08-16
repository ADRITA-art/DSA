#include <stdio.h>
void linear_search(int arr[],int n,int ele)
{
	int k=0,l=0;
	for(int i=0;i<n;i++)
	{
		if(arr[i]==ele)
		{
			k=1;
			break;
		}
	}
	if(k==1)
	printf("The element is present");
	else
	printf("The element is absent");
}
void binary_search(int arr[],int n,int ele)
{
	int l=0,h=n,mid,k=0;
	while(l<=h)
	{
		mid=(l+h)/2;
		if(ele>arr[mid])
		l=mid+1;
		else if(ele<arr[mid])
		h=mid-1;
		else if(ele==arr[mid])
		{
			k=1;
			break;
		}
	}
	if(k==1)
	printf("The element is present");
	else
	printf("The element is absent");
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
	printf("Enter element to be searched");
	scanf("%d",&ele);
	binary_search(ar,n,ele);
	return 1;
}
