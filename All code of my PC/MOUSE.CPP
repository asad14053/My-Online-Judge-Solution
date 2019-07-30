#include<stdio.h>
#include<dos.h>
#include<process.h>
#include<graphics.h>
#include<conio.h>

void mouse_reset()
{
	union REGS r;
	r.x.ax=0;
	int86(0x33,&r,&r);
	if(int(r.x.ax)!=-1)
	{
		printf("Hardware failure!");
		exit(1);
	}
}
void mouse_on()
{
	union REGS r;
	r.x.ax=1;
	int86(0x33,&r,&r);
}
void mouse_off()
{
	union REGS r;
	r.x.ax=2;
	int86(0x33,&r,&r);
}
void get_position(int *x,int *y)
{
	union REGS r;
	r.x.ax=3;
	int86(0x33,&r,&r);
	*x=r.x.cx;
	*y=r.x.dx;
}
int left_button_pressed()
{
	union REGS r;
	r.x.ax=3;
	int86(0x33,&r,&r);
	return(r.x.bx & 1);
}
int right_button_pressed()
{
union REGS r;
	r.x.ax=3;
	int86(0x33,&r,&r);
	return(r.x.bx & 2);
}