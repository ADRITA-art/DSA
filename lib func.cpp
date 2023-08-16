#include <stdio.h>
#include <string.h>
int length(char []);
void concat(char [],char []);
int compare(char [],char []);
int main()
{
	char s[999];
	char s1[999];
	char s2[999];
	for( int i=0;i<999;i++)
	s[i]='\0';
	printf("Enter 3 strings\n");
	gets(s);
	gets(s1);
	gets(s2);
	
	
	printf("The length of the string is : %d\n",length(s));
	concat(s1,s2);
		printf("The concatenated string \n");
	puts(s1);
	printf("%d\n",strcmp(s1,s2));
	printf("%d\n",compare(s1,s2));
	
}
int length(char s[])
{
	int i=0;
	for(  i=0;s[i]!='\0';i++);
	return i;
	
}
void concat(char s1[],char s2[])
{
	for(int i=length(s1),k=0;k<length(s2);i++,k++)
	s1[i]=s2[k];
	
}
int compare(char s1[],char s2[])
{ 
	int k=length(s1),l=length(s2);
	if(k>l)
	return -1;
	else if(l>k)
	return 1;
	else
	{
		for(int i=0;i<k;i++)
		{
			if(s1[i]==s2[i]);
			else
			{
				if((int)s1[i]>(int)s2[i])
				return 1;
				else
				return -1;
			}
		}
		return 0;
	}
}
