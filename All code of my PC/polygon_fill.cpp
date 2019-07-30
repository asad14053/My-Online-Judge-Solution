#include<stdio.h>
#include<conio.h>
#include<iostream.h>
#include<graphics.h>
#include<dos.h>
#include<stdlib.h>

int gd=DETECT,gm;

class myStack
	{
        private:
	int arr[10000][2],top;
	public:
	myStack()
		{
		top=-1;
		}
	void push(int x,int y)
		{
		if(top>10000)
			{
			printf("
a	" Stack Full...:-("");
			exit(0);
			}
		top++;
		arr[top][0]=x;
		arr[top][1]=y;
		}

	void pop(int &x,int &y)
		{
		x=arr[top][0];
		y=arr[top][1];
		top--;
		}

	int empty(void)
		{
		if(top==-1)
		return(1);
		else return(0);
		}
	};

void show_quadrant()
	{
	cleardevice();
	rectangle(120,40,320,240);
	rectangle(320,40,520,240);
	rectangle(120,240,320,440);
	rectangle(320,240,520,440);
	for(int i=130;i<=510;i+=10)
		{
		if(i==320)
		continue;
		outtextxy(i,237,"+");
		}
	for(i=50;i<=430;i+=10)
		{
		if(i==240)
		continue;
		outtextxy(317,i,"-");
		}
	outtextxy(310,230,"O");
	outtextxy(530,240,"X");
	outtextxy(320,450,"-Y");
	outtextxy(100,240,"-X");
	outtextxy(320,30,"Y");
	}


int get_poly(int ed[20])
	{
	int edg,i,j;
	clearviewport();
        closegraph();
	cout<<"
	" Enter No. Of Edges ":=";
	cin>>edg;
	for(i=0,j=1;i<2*edg;i+=2,j++)
		{
		cout<<"
		" Enter Vertex No. "<<j<<" ":= ";
		flushall();
		cin>>ed[i]>>ed[i+1];
		ed[i]+=320;
		ed[i+1]=240-ed[i+1];
		}
	ed[i]=ed[0];
	ed[i+1]=ed[1];
	initgraph(&gd,&gm,"..\bgi");
	clearviewport();
	show_quadrant();
	drawpoly(edg+1,ed);
	return(edg);
	}

void get_y(int &min,int &max,int edge[20],int size)
	{
	int i;
	min=480;
	max=0;
	for(i=1;i<2*size;i+=2)
		{
		if(edge[i]>max)
		max=edge[i];
		if(edge[i]<min)
		min=edge[i];
		}
	}

void get_x(int &min,int &max,int edge[20],int size)
	{
	int i;
	min=480;
	max=0;
	for(i=0;i<2*size;i+=2)
		{
		if(edge[i]>max)
		max=edge[i];
		if(edge[i]<min)
		min=edge[i];
		}
	}

void fill_polygon(int x,int y,int fg,int bg)
	{
	myStack stack;
	int col;
	putpixel(x,y,fg);
	stack.push(x,y);
	while(!stack.empty())
		{
		stack.pop(x,y);
		col=getpixel(x,y);
		if(col!=bg&&col!=fg)
		putpixel(x,y,fg);
		col=getpixel(x,y+1);
		if(col!=bg&&col!=fg)
		stack.push(x,y+1);
		col=getpixel(x+1,y);
		if(col!=bg&&col!=fg)
		stack.push(x+1,y);
		col=getpixel(x-1,y);
		if(col!=bg&&col!=fg)
		stack.push(x-1,y);
		col=getpixel(x,y-1);
		if(col!=bg&&col!=fg)
		stack.push(x,y-1);
		}
	}


void flood_fill(int ed[20])
	{
	int i,j,x,y,num,bg,fg,col,k;
	clearviewport();
        closegraph();
	cout<<"
	" Enter No Of Edges ":= ";
	cin>>num;
	for(i=0,k=1;i<2*num;i+=2,k++)
		{
		cout<<"
	" Enter The Vertex No "<<k<<" ":=";
		flushall();
		cin>>ed[i]>>ed[i+1];
		ed[i]+=320;
		ed[i+1]=240-ed[i+1];
		}
	ed[i]=ed[0];
	ed[i+1]=ed[1];
	cout<<"
	" Enter The Seed Point (x,y) ":= ";
	cin>>x>>y;
	x+=320;
	y=240-y;
        initgraph(&gd,&gm,"..\bgi");
        cleardevice();
	show_quadrant();
	setcolor(1);
	drawpoly(num+1,ed);
	fill_polygon(x,y,15,1);
	}

int check_mid(int i,int ed[20],int k)
	{
	int max,min;
	if(ed[k+1]>ed[k+3])
		{
		max=ed[k+1];
		min=ed[k+3];
		}
	if(ed[k+1]<ed[k+3])
		{
		max=ed[k+3];
		min=ed[k+1];
		}
	if(i>min&&i<max)
	return(1);
	else
	return(0);
	}

void scan_poly(int ed[20],int num)
	{
	int i,j,k,xmax,xmin,ymax,ymin,p;
	void sort(float xi[10],int n);
	float xi[10];
	get_y(ymin,ymax,ed,num);
	get_x(xmin,xmax,ed,num);
	for(i=ymin;i<=ymax;i++)
		{
		p=0;
		for(k=0;k<2*num;k+=2)
			{
			if(ed[k+1]==ed[k+3])
			continue;
xi[p] = ed[k]+((double)((double)(i-ed[k+1])/(ed[k+1]-ed[k+3]))*(ed[k]-ed[k+2]));
			if(xi[p]>=xmin&&xi[p]<=xmax)
			p++;
			}
		sort(xi,p);
		for(j=0;j<p;j+=2)
		line(xi[j],i,xi[j+1],i);
		}
	}

void sort(float xi[10],int n)
	{
	int i,j;
	for(i=0;i<n-1;i++)
		{
		for(j=0;j<n-1;j++)
			{
			if(xi[j]>xi[j+1])
				{
				float temp;
				temp=xi[j];
				xi[j]=xi[j+1];
				xi[j+1]=temp;
				}
			}
	       }
	}

void edge_fill(int ed[20],int num)
	{
	int i,j,k,xmax,xmin,ymax,ymin,col;
	double xint;
	get_y(ymin,ymax,ed,num);
	get_x(xmin,xmax,ed,num);
	for(k=0;k<2*num;k+=2)
		{
		for(i=ymin;i<=ymax;i++)
			{
			if(ed[k+1]==ed[k+3])
			continue;
			if(!check_mid(i,ed,k))
			continue;
xint = ed[k]+(((double)(i-ed[k+1])/(ed[k+1]-ed[k+3]))*(ed[k]-ed[k+2]));
			for(j=xmin;j<=xmax;j++)
				{
				if(j>xint)
					{
					col=getpixel(j,i);
					if(col==15)
					putpixel(j,i,0);
					if(col==0)
					putpixel(j,i,15);
					}
				}
			}
		}
	}

void main()
	{
	clrscr();
	char *mess[]={"-","=","["," ","P","o","l","y","g","o","n"," ",
		      "F","i","l","l","i","n","g"," ","]","=","-",};
	int xx=28,xxx=51,i,j;
	_setcursortype(_NOCURSOR);
	for(i=0,j=22;i<13,j>=11;i++,j--)
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
        int choice,ed[20],num;
	_setcursortype(_NORMALCURSOR);
	cout<<"


		1:==>" Flood Fill "";
	cout<<"

		2:==>" Ordered Edge List Fill "";
	cout<<"

		3:==>" Edge Fill "";
	cout<<"

		4:==>" Exit "";
	cout<<"

		" Enter Your Choice ":=";
	cin>>choice;
	initgraph(&gd,&gm,"..\bgi");
	clearviewport();
	switch(choice)
		{
		case 1:
			flood_fill(ed);
			getch();
			break;

		case 2:
			num=get_poly(ed);
			scan_poly(ed,num);
			getch();
			break;

		case 3:
			num=get_poly(ed);
			edge_fill(ed,num);
			getch();
			break;

		case 4:
			exit(0);

                default:
                	cout<<"
	a" Press A Valid Key...!!! "";
                        getch();
                        main();
                        break;
		}
	closegraph();
	}

