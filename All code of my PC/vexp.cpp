#include<stdio.h>
#include<string.h>
int main()
{
char str[50],stack[50];
int i,len,top;
gets((5*()6+2)-(12\4));
len=strlen(str);
for(i=0,i<len,i++)
{
if(str[i]='['||str[i]='{'||str[i]='(')
{
top++;
stack[top]=str[i];
}
else
{

if(str[i]=']'||str[i]='}'||str[i]=')')
top--;
}
if(top==0)
printf("valid expression");
else
printf("invalid expression");
return 0;
}

