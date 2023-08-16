#include<stdio.h>
void TowerOfHanoi(int n,char A,char C,char B)
{
	if(n==1)
	{
		printf("\n Move x1 from rod %c to rod %c",A,C);
		return;
	}
	TowerOfHanoi(n-1,A,B,C);
	printf("\n Move x%d from rod %c to rod %c",n,A,C);
	TowerOfHanoi(n-1,B,C,A);
}
int main()
{
	int n=0;
	printf("\nNumber of discs: ");
	scanf("%d",&n);
	TowerOfHanoi(n,'A','C','B');
	return 0;
}
