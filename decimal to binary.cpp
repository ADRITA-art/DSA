#include <stdio.h>
int main()
{
	int bin[20];
	int n=0,l=0;
	printf("Enter the decimal number");
	scanf("%d",&n);
	while(n>0)
	{
		bin[l]=n%2;
		l++;
		n/=2;
	}
	for(int i=l-1;i>=0;i--)
	printf("%d",bin[i]);
return 1;	
}
