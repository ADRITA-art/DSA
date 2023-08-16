#include <stdio.h>
#include <stdlib.h>
struct date
{
	int day,mon,year;
}date[2];
int main()
{
	printf("Enter day\n");
	scanf("%d",&date[0].day);
	printf("Enter month\n");
	scanf("%d",&date[0].mon);
	printf("Enter year\n");
	scanf("%d",&date[0].year);
	printf("Enter day\n");
	scanf("%d",&date[1].day);
	printf("Enter mon\n");
	scanf("%d",&date[1].mon);
	printf("Enter year\n");
	scanf("%d",&date[1].year);
	if((date[0].day==date[1].day)&&(date[0].mon==date[1].mon)&&(date[1].year==date[0].year))
	printf("Equal");
	else
	printf("Unequal");
}
