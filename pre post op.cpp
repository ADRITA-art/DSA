#include <stdio.h>
int main()
{
	int n1=30,n2=40;
	n2=n1;
	n2?(n1,n2)?n1:n2:n2;
	printf("%d %d ",n1,n2);
	/*int a=3;
	int b=a++ + ++a;
	printf("%d %d",b,a);
//	printf("%d %d %d",++a,a++,a);*/
}
