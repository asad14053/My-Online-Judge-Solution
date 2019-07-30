# include<stdio.h>
# include<conio.h>
# include<stdlib.h>
#include<ctype.h>
#include<string.h>
#include<math.h>
#define max 100

int top=-1;

double value(char x[]);
double operation(int symb, double op1, double op2);
double delet(double s[]);
void insert(double s[],double value);

void main()
{
 char x[max];
 clrscr();
 printf("\n Enter the postfix notation:");
 scanf("%s",x);
 printf("\n Value of postfix notation is:= %f",value(x));
 getch();
}

double value(char x[])
{
 int c,i;
 char p[1]={'0'};
 double opnd1,opnd2,a,b;
 double opnd[max];

 for(i=0;(c=x[i])!='\0';i++)
  {
   if(isdigit(c))
    {
     p[0]=c;
     a=atoi(p);
     insert(opnd,a);
    }
   else
    {
     opnd2=delet(opnd);
     opnd1=delet(opnd);
     b=operation(c,opnd1,opnd2);
     insert(opnd,b);
    }
  }
 return (delet(opnd));

}

double operation(int oper,double op1,double op2)
{
 switch (oper)
  {
   case '+':return(op1+op2);
   case '-':return(op1-op2);
   case '*':return(op1*op2);
   case '/':return(op1/op2);
   case '^':return(pow(op1,op2));
   default :printf("%s","illegal operation");
   //exit(1);
  }
 return 0;
}
double delet(double s[])
{
 if(top==-1)
  {
   printf("array is underflow");
  // exit(1);
  }
 else
  {
    return(s[top--]);
  }
 return 0;
}
void insert(double s[],double value)
{
 if(top==max)
  {
   printf("stack overflow");
   //exit(1);
  }
 else
  {
   top++;
   s[top]=value;
  }

}








