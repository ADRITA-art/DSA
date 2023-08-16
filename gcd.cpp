#include <stdio.h>
int gcdr(int x,int y)
{
	if(x==0)
	return y;
	else if(x>y)
	return gcdr(y,x);
	else
	return gcdr(x,y%x);
}
void gcd(int x,int y)
{
	int k=0;
	for(int i=1;i<x&&i<y;i++)
	{
		if(((x%i)==0)&&((y%i)==0))
		k=i;
	}
	printf("%d",k);
}
int main()
{
	int x,y;
	printf("enter two numbers");
	scanf("%d%d",&x,&y);
//	printf("%d",gcdr(x,y));
gcd(x,y);
	return  1;
}
