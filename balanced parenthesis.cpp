#include<stdio.h>
#include<string.h>
bool balance(char c[])
    {
        int i = -1;
        char stack[strlen(c)];
        char ch;
        for (int k=0;k<strlen(c);k++) {
        	ch=c[k];
            if (ch == '(' || ch == '{' || ch == '[')
                stack[++i] = ch;
            else if(ch == ')' || ch == '}' || ch == ']') {
                if (i >= 0 && ((stack[i] == '(' && ch == ')')|| (stack[i] == '{' && ch == '}')|| (stack[i] == '[' && ch == ']')))
                    i--;
                else
                    return false;
            }
        }
        if(i==-1)
        return true;
        else
        return false;
    }
 
   int main()
    {
    	char s[50];
        printf("Enter the string\n");
        gets(s);
        
 
        
        if (balance(s))
            printf("Balanced");
        else
            printf("Not Balanced");
            return 1;
        }
