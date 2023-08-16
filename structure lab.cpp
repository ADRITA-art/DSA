#include <stdio.h>
#include <stdlib.h>
#include <conio.h>
struct student
{
	char name[20],dept[20],course[20];
	int roll,year;
}student[60];
int yearwise(int y,int n)
{
	for(int i=0;i<n;i++)
	{
		if(student[i].year==y)
		{
			printf("Name of student ");
			puts(student[i].name);
			printf("Roll number of student %d\n",student[i].roll);
			printf("Department of student ");
			puts(student[i].dept);
			printf("Course of student ");
			puts(student[i].course);
		}
	}
}
int rollwise(int r,int n)
{
	for(int i=0;i<n;i++)
	{
		if(student[i].roll==r)
		{
			printf("Name of student ");
			puts(student[i].name);
			printf("Year of joining of student %d\n",student[i].year);
			printf("Department of student ");
			puts(student[i].dept);
			printf("Course of student ");
			puts(student[i].course);
		}
	}
}
int main()
{
	int n=0,ys=0,rr=0;
	printf("Enter the number of students\n");
	scanf("%d",&n);
	for(int i=0;i<n;i++)
	{
	printf("Enter name of student\n");
	scanf("%s",&student[i].name);
	printf("Enter dept of student\n");
	scanf("%s",&student[i].dept);
	printf("Enter course of student\n");
	scanf("%s",&student[i].course);
	printf("Enter roll number of student\n");
	scanf("%d",&student[i].roll);
	printf("Enter year of joining of student\n");
	scanf("%d",&student[i].year);
	}
	printf("Enter year of joining of student to be searched\n");
	scanf("%d",&ys);
	yearwise(ys,n);
	printf("Enter roll number of student to be searched\n");
	scanf("%d",&rr);
	rollwise(rr,n);
	return 0;
}
