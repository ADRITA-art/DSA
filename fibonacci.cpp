#include <stdio.h>
int fibr(int n)
{
	if(n==1)
	return 0;
	if(n==2)
	return 1;
	else
	return (fibr(n-1)+fibr(n-2));
}
void fibn(int n)
{
	int n1,n2,n3;
	if(n>2)
	printf("0,1,");
	n1=0;
	n2=1;
	for(int i=1;i<n-1;i++)
	{
	n3=n1+n2;
	n1=n2;
	n2=n3;
	printf("%d,",n3);	
	}
}
int main()
{
	int n=0;
	printf("Enter the limit");
	scanf("%d",&n);
	/*for(int i=1;i<=n;i++)
	printf("%d",fibr(i));*/
	fibn(n);
	return 1;
}
