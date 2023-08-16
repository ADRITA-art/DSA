#include <stdio.h>
int fact(int x)
{
	int k=1;
	for(int i=1;i<=x;i++)
	k=k*i;
	return k;
}
int main()
{
	int n,m,l,s;
	for(int i=0;i<=4;i++)
	{
		for(int j=0;j<=4-i;j++)
		printf(" ");
		for(int k=0;k<=i;k++)
		{
		n=fact(i);
		m=fact(k);
		l=fact(i-k);
		s=(int)(n/(m*l));
		printf("%d ",(s));	
		}
		printf("\n");
	}
	return 1;
}
