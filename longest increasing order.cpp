#include<stdio.h>
#define n 11
int arr[n];
int max()
{
	int s=1,ms=1;
	for(int i=0;i<n-1;i++)
	{
		if(arr[i+1]>arr[i])
		{
		s++;
		if(s>ms)
		ms=s;
		}
		else
		s=1;	
	}
	return ms;
}
void increase()
{
	int q[n];
	int t[n];
	int c=0,z=0,k=0;
	int m=max();
	printf("The longest increasing order is: %d\n",m);
	for(int i=0;i<n;i++)
	{
		q[c++]=arr[i];
		for(int j=i;j<n-1;j++)
		{
			if(arr[j]<arr[j+1])
			{
				q[c]=arr[j+1];
				c++;
			}
			else
			{
			break;
			}
		}
		if(c==m)
		{
		for(int k=0;k<c;k++)
		printf(" %d ",q[k]);
		printf("\n");		
		}
		c=0;
	}	
}
int main()
{
	printf("Enter the elements in the array");
	for(int i=0;i<n;i++)
	scanf("%d",&arr[i]);
	increase();
	return 1;
}
