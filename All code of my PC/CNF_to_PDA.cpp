#include<iostream.h>
#include<dos.h>
#include<stdio.h>
#include<stdio.h>
#include<conio.h>

struct pdastate
	{
	int type;
	char sym;
	int trno;
	int trans[20];
	char tsym[20];
	};

class  pda
	{
	public:
		int n;
		pdastate s[30];

	pda(void)
		{
		n=0;
		}
	void show(void);
	};

void pda::show(void)
	{
	pdastate p;
	clrscr();
	for(int i=0;i<n;i++)
		{
		p=s[i];
		cout<<"
	" State No " := "<<i;
		cout<<"
	" Tag "";
		if(p.type==0)
			cout<<"
	" Start State "";
		else
			if(p.type==1)
				cout<<"
	" Push "<<p.sym<<""";
		else
			if(p.type==2)
				cout<<"
	" Pop State "";
		else
			if(p.type==3)
				cout<<"
	" Read State "";
		else
			if(p.type==4)
				cout<<"
	" Stop State "";
		for(int j=0;j<p.trno;j++)
			{
		cout<<"
	" Transition To State "<<p.trans[j]<<""";
			if(p.tsym[j]!=0)
		cout<<"
	" On Symbol "<<p.tsym[j]<<"""<<endl;
			else
				cout<<endl;
			}
		getch();
		if(i==5)
		clrscr();
		}
	}

union pr
	{
	char a;
	char b[2];
	};

struct prod
	{
	int type;
	union pr p;
	};

class cnf
	{
	private:
	   	char v[10];
	   	int vno;
	   	char t[10];
	   	int tno;
	   	struct prod p[30];
	   	int n;
	   	int vpr[10];
  	public:
	   	cnf(void);
	   	pda mkpda(void);
	};

cnf:: cnf(void)
	{
	clrscr();
	char *mess[]={"-","=","["," ","C","F","A"," ","T","O"," ",
	"P","D","A"," ","]","=","-",};
	int xx=31,xxx=48,i,j;
	_setcursortype(_NOCURSOR);
	for(i=0,j=17;i<10,j>=8;i++,j--)
		{
		gotoxy(xx,1);
		cout<<mess[i];
		xx++;
		gotoxy(xxx,1);
		cout<<mess[j];
		xxx--;
		delay(50);
		}
	xx=30;xxx=49;
	_setcursortype(_NORMALCURSOR);
  	cout<<"

	" Enter No Of Non Terminal Symbols ":= ";
  	cin>>vno;
	for(i=0;i<vno;i++)
		{
		cout<<"
	" Enter A Non-Terminal Symbol ":=";
		cin>>v[i];
		}
	cout<<"
	" Enter The No Of Terminal Symbols ":=";
	cin>>tno;
	for(i=0;i<tno;i++)
		{
		cout<<"
	" Enter A Terminal Symbol ":=";
		cin>>t[i];
		}
	cout<<"
	" Enter The No Of Productions ":=";
	cin>>n;
	int count=0;
	for(i=0;i<vno;i++)
		{
cout<<"
	" Enter No Of Productions Corrosponding To The Non-Terminal "
      <<v[i]<<" ":= ";
	 	cin>>vpr[i];
	 	for(int j=0;j<vpr[i];j++)
	    		{
cout<<"
	" Enter The Type Of Production <1> A-->b , <2> a-->BC ":=";
	    		cin>>p[count].type;
		      	if(p[count].type==1)
	      			{
		      		cout<<"
	 "<<v[i]<<" --> ";
		      		cin>>p[count].p.a;
	      			}
	      		else
	      			{
		      		cout<<"
	 "<<v[i] <<" --> ";
		      		cin>>p[count].p.b[0];
		      		cin>>p[count].p.b[1];
	      			}
	      		count++;
	    		}
		}
	}

pda cnf:: mkpda(void)
	{
  	pda p1;
  	p1.s[p1.n].type=0;
  	p1.s[p1.n].trno=1;
  	p1.s[p1.n].trans[0]=1;
  	p1.s[p1.n].tsym[0]=0;
  	p1.n++;
  	p1.s[p1.n].type=1;
  	p1.s[p1.n].sym=v[0];
  	p1.s[p1.n].trno=1;
  	p1.s[p1.n].trans[0]=2;
  	p1.s[p1.n].tsym[0]=0;
  	p1.n++;
  	p1.s[p1.n].type=2;
  	p1.s[p1.n].trno=1;
  	p1.s[p1.n].trans[0]=3;
  	p1.s[p1.n].tsym[0]=238;
  	p1.n++;
  	p1.s[p1.n].type=3;
  	p1.s[p1.n].trno=1;
  	p1.s[p1.n].trans[0]=4;
  	p1.s[p1.n].tsym[0]=238;
  	p1.n++;
  	p1.s[p1.n].type=4;
  	p1.s[p1.n].trno=0;
  	p1.n++;
	int cnt=p1.s[2].trno;
	int c1=0;
	prod temp;
	for(int i=0;i<vno;i++)
		{
		for(int j=0;j<vpr[i];j++)
			{
			temp=p[c1++];
			if(temp.type==1)
				{
				p1.s[2].trans[cnt]=p1.n;
				p1.s[2].tsym[cnt]=v[i];
				p1.s[p1.n].type=3;
				p1.s[p1.n].trno=1;
				p1.s[p1.n].trans[0]=2;
				p1.s[p1.n].tsym[0]=temp.p.a;
				p1.n++;
				cnt++;
				}
			else
				{
				p1.s[2].trans[cnt]=p1.n;
				p1.s[2].tsym[cnt]=v[i];
				p1.s[p1.n].type=1;
				p1.s[p1.n].sym=temp.p.b[1];
				p1.s[p1.n].trno=1;
				p1.s[p1.n].trans[0]=(p1.n)+1;
				p1.s[p1.n].tsym[0]=0;
				p1.n++;
				cnt++;
				p1.s[p1.n].type=1;
				p1.s[p1.n].sym=temp.p.b[0];
				p1.s[p1.n].trno=1;
				p1.s[p1.n].trans[0]=2;
				p1.s[p1.n].tsym[0]=0;
				p1.n++;
				}
			}
		p1.s[2].trno=cnt;
		}
	return(p1);
	}

void main()
	{
	cnf c;
	pda p1;
	p1=c.mkpda();
	getch();
	p1.show();
  	getch();
	}

