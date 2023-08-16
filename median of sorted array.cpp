#include<stdio.h>
int ar3[20];
void med(int l)
	{
		printf("%d",l);
		int med1=0,med2=0,med=0;
		if(l%2==0)
		{
			printf("The first median is : %d\n",ar3[(l-1)/2]);
			printf("The second median is : %d\n", ar3[l/2]);
					
		}
		else
		printf("The  median is : %d\n", ar3[(l-1)/2]);
	}
void sortmerge(int arr1[],int n,int arr2[],int m)
{
	int i=0,j=0,z=0;
	while(i<n && j<m)
	{
		if(arr1[i]<arr2[j])
		{
			ar3[z]=arr1[i];
			i++;
		}
		else
		{
			ar3[z]=arr2[j];
			j++;
		}
		z++;
		
	}
	if(i<n)
	{
		for(int k=i;k<n;k++)
		{
			ar3[z++]=arr1[k];
		}
	}
	else if(j<m)
	{
		for(int k=j;k<m;k++)
		{
			ar3[z++]=arr2[k];
		}
	}
	med(z);
	for(int g=0;g<z;g++)
	printf("%d ",ar3[g]);
	}
	
	int main()
	{
	int ar1[10];
	int ar2[10];
	int n=0,m=0;
	printf("Enter size of first array: ");
	scanf("%d",&n);
	printf("Enter size of second array: ");
	scanf("%d",&m);
	printf("Enter sorted values in first array: ");
	for(int i=0;i<n;i++)
	scanf("%d",&ar1[i]);
	printf("Enter sorted values in second array: ");
	for(int i=0;i<m;i++)
	scanf("%d",&ar2[i]);
	sortmerge(ar1,n,ar2,m);
	return 1;
	}
