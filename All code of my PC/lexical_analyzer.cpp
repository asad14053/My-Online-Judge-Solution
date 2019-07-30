/*           LEX.cpp       */

/*PROGRAM TO IMPLEMENT LEXICAL ANALYSER ON C AS A LANGUAUGE
*/
# include <iostream.h>
# include <conio.h>
# include <fstream.h>
# include <ctype.h>                       //header files
# include <dos.h>
# include <stdlib.h>
# include <stdio.h>
# include <string.h>

# define MAX 50
# define ERROR 0
# define ID 1
# define KEY 2
# define DELIM 3
# define OP 4                         //constant declarations
# define DATA_TYPE 0
# define OPER 2
# define KWORD 4
# define RTYPE 5
# define NUM 6

int bcount=0;

char
*msg[]={"error!!","id","key","delim","oprtr","num"},token[MAX][MAX],lex[MA
X][MAX],attr[MAX][MAX];

char *msg2[]={"data type","identifier","operator","special
character","keyword","return type","number"};

char buff[MAX],spl[]={' ',',',';','
','(',')','{','}'};

char *data[]={"int","char","float","long","unsigned","void"};

char oper[]={'+','-','*','/','%','=','|','^','<','>','<=','>=','<>'};

char keys[4][10]={{"begin"},{"end"},{"start"},{"int"}},row[2],col[2];

/********************FUNCTIONS************************/

 void display(int symcount);
 //display function for symbol table

 int flush_buff(char buff[MAX])
  {

     for(int i=0;buff[i]!='
