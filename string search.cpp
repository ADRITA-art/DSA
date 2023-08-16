#include <stdio.h>
#include <stdlib.h>
#include <string.h>
int main()
{
char s1[999];
char s2[999];
char s3[999];
char s4[999];
int r=0;
printf("Enter the string\n");
gets(s1);
printf("Enter the string to be searched\n");
gets(s2);
printf("Enter the search percentage\n");
scanf("%d",&r);
for(int i=0;i<100;i++)
s4[i]='\0';
for(int i=0;i<100;i++)
s3[i]='\0';
s1[strlen(s1)]=' ';
int k=0,l=0,q=0,v=0,flag=0,j=0,p=0;
k=strlen(s1);
l=strlen(s2);
for(int i=0;i<k;i++)
{
q=0;
if(s1[i]!=' ')
{
s3[p]=s1[i];
p++;
}
else
{
while(j<strlen(s3))
{
v=0;
for( j=q;j<l+q;j++)
{
s4[v]=s3[j];
v++;
}
if(strcmp(s4,s2)==0)
flag++;
q++;

}
if((int)((flag*l*100)/p>=r))
{
puts(s3);
printf("The match result is %d percentage",(int)((flag*l*100)/p));
printf("\n");
}
for(int i=0;i<100;i++)
s3[i]='\0';
for(int i=0;i<100;i++)
s4[i]='\0';
flag=0;
p=0;
j=0;
}
}
}

