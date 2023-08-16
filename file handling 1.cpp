#include <stdio.h>
int main()
{
	FILE *fp;
	fp=fopen("hello.txt","w");
	if(fp==NULL)
	{
		printf("Unable to open file\n");
		
	}
	int x=0,z=0;
	float y=0.0,k=0.0;
	printf("Enter an integer number and enter a floating number\n");
	scanf("%d %f",&x,&y);
	fprintf(fp,"%d %f",x,y);
	fclose(fp);
	fp=fopen("hello.txt","r");
	if(fp==NULL)
	{
		printf("sorry,Unable to open file\n");
		return 1;
	}
	printf("Reading filess from the file\n");
	fscanf(fp,"%d %f",&z,&k);
	printf("%d %f",z,k);
	fclose(fp);
	return 1;
}
