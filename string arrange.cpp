#include <stdio.h>
#include <string.h>
int main()
{
char s1[999];
int arr[999];
int k=0,l=0,m=0,h=0,p=0,n=0;
for(int i=0;i<999;i++)
s1[i]='\0';
char c=' ';
printf("Enter the string");
gets(s1);
k=strlen(s1);
for(int i=0;i<strlen(s1);i++)
{
for(int j=i;j<strlen(s1);j++)
{
if(s1[i]==s1[j])
{
l++;
h++;
}
if(l>1)
{
for(int m=j;m<strlen(s1)-1;m++)
{
   
s1[m]=s1[m+1];
}
l=l-1;
s1[strlen(s1)-1]='\0';
j--;
}
}
l=0;
arr[i]=h;
h=0;
}
n=strlen(s1);
for(int i=0;i<n-1;i++)
{
for(int j=0;j<n-1-i;j++)
{
if(arr[j+1]>arr[j])
{
p=arr[j];
arr[j]=arr[j+1];
arr[j+1]=p;
c=s1[j];
s1[j]=s1[j+1];
s1[j+1]=c;

}
else if(arr[j+1]==arr[j])
{
if((int)s1[j]>(int)s1[j+1])
{
c=s1[j];
s1[j]=s1[j+1];
s1[j+1]=c;
p=arr[j];
arr[j]=arr[j+1];
arr[j+1]=p;
}
}

}
}
for(int i=0;i<n;i++)
{
for(int j=0;j<arr[i];j++)
printf("%c",s1[i]);
}
}

