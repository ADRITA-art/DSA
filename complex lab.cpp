#include <stdio.h>
struct complex
{
	int real,com;
}complex[2];
int main()
{
	int s1,s2, m1,m2;
	printf("Enter real part of the first number\n");
	scanf("%d",&complex[0].real);
	printf("Enter complex part of the first number\n");
	scanf("%d",&complex[0].com);
	printf("Enter real part of the second number\n");
	scanf("%d",&complex[1].real);
	printf("Enter complex part of the first number\n");
	scanf("%d",&complex[1].com);
	s1=complex[0].real+complex[1].real;
	s2=complex[0].com+complex[1].com;
	m1=complex[0].real-complex[1].real;
	m2=complex[0].com-complex[1].com;
	printf("The sum is %d + %di\n",s1,s2);
	printf("The difference is %d + %di\n",m1,m2);
	
}
