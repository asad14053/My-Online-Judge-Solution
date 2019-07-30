#include<stdio.h>
#include<stdlib.h>
#include<conio.h>

float expon(float n2,float n1)
{
float z=1;
for(int i=0;i<n1;i++)
z=z*n2;
return(z);
}


float oper(char symb,float n1,float n2)
{
int n;
switch(symb)
{
case '+':
return(n=n2+n1);
case '-':
return(n=n2-n1);
case '*':
return(n=n2*n1);
case '/':
return(n=n2/n1);
case '^':
return(n=expon(n2,n1));
defult :printf("%s","Illigal oparator");
exit(1);
}
return(n);
}

float eval(char a[])
{
int posn=0,k=0,j;
char c,pus1[20],pus2[20],m,st1[20];
float op1,op2,value;
float n1,n2,n,st[20];
for(posn=0;((c=a[posn])!='\0');posn++)
if(c>='0'&&c<='9')
{
st1[0]=c;
st[k]=atof(st1);
k++;
}
else
{
n1=st[--k];
n2=st[--k];
value=oper(c,n1,n2);
st[k]=value;
k++;
}
return(value);
}

void main()
{
clrscr();
char a[20],b[20],c,d[20],e,n1[20],n2[20];
int s[1],i=0,j,n,m,x[10],l;
printf("\n\nEnter a postfix expression:-->>");
while((a[i]=getchar())!='\n')
i++;
printf("\n\nThe original postfix is:-->>\n\n");
for(j=0;j<i;j++)
{
printf("%c",a[j]);
}
printf("\n\nThe Evaluate form is:-->\n\n");
a[i--]='\0';
printf("%.2f",eval(a));
getch();
}
