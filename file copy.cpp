#include <stdio.h>
int main(int argc, char *argv[])
{
	if(argc!=3)
	return 0;
	FILE *fp,*fp1;
	fp=fopen("argv[1]","r");
	fp1=fopen("argv[2]","w");
	if(fp==NULL)
	{
		printf("File could not be opened");
		return 0;
	}
	if(fp1==NULL)
	{
		printf("File could not be opened");
		return 0;
	}
	char ch=getc(fp);
	while(ch!=EOF)
	{
	putc(ch,fp1);
	ch=getc(fp);
	}
	fclose(fp);
	fclose(fp1);
	return 1;
}
