#include<iostream.h>
#include<conio.h>
#include<string.h>
class mutation
{
       public:
               char id[10],p1[9],p2[9],p[9],str[4];
               int c,f;
               void sign();
               void hack();
};


                                 /*JUST LIKE THAT*/
void mutation::sign()
{
cout<<"welcome"<<endl;
 CRE:
       cout<<"Please enter your desired id:";
       cin>>id;
       cout<<"Please enter desired password:";
       cin>>p1;
       cout<<"Please confirm your password :";
       cin>>p2;
       c=strcmp(p1,p2);  /*c=0 if p1==p2 else any non zero number*/
       if(c==0)
       cout<<"Your id has been confirmed."<<endl;
       if(c!=0)
       {
       cout<<"Passwords do not match.Try again."<<endl;
       goto CRE;
       }
}



                               /*THE REAL ONE*/
void mutation::hack()
{
int a=0;
char pas[4];
cout<<"Enter a check string(of length 5 characters):";
for(a=0;a<=4;a++)
{
str[a]=getch();
cout<<"*";
}
cout<<endl;
for(pas[0]=65;pas[0]<=122;pas[0]++)
{
for(pas[1]=65;pas[1]<=122;pas[1]++)
{
for(pas[2]=65;pas[2]<=122;pas[2]++)
{
for(pas[3]=65;pas[3]<=122;pas[3]++)
{
for(pas[4]=65;pas[4]<=122;pas[4]++)
{
if(pas[0]==str[0]&&pas[1]==str[1]&&pas[2]==str[2]&&pas[3]==str[3]&&pas[4]=
=str[4])
{
cout<<"Password detected."<<endl;
cout<<"It is:"<<pas<<endl;
goto bye;
}
else
{
cout<<pas<<"		";
cout<<"trying........"<<endl;
}
}
}
}
}
}
bye:
        cout<<"Thank you for using this program."<<endl;
}



void main()
{
clrscr();
mutation one;
one.sign();
one.hack();
}

