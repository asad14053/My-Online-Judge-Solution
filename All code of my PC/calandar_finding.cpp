#include<stdio.h>
#include<conio.h>
#include<dos.h>
char
month[12][10]={"JAN","FEB","MAR","APR","MAY","JUN","JUL","AUG","SEP","OCT"
,"NOV","DEC"};
char week[7][10]={"MON","TUE","WED","THU","FRI","SAT","SUN"};
long int days=0,year,mon,lp,i,dd,tab,n;

void main()
{ int leap(int);
  clrscr();
  printf("Enter a year : ");
  scanf("%d",&year);
  printf("Enter a month (1-12) : ");
  scanf("%d",&mon);
  if(year>1900)
  { for(i=1900;i<year;i++)
    { lp=leap(i);
      if(lp==1)
      days+=366;
      else
      days+=365;
    }
  }
  else if(year<1900)
  { for(i=1900;i>=year;i--)
    { lp=leap(i);
      if(lp==1)
      days+=366;
      else
      days+=365;
    }
  }
  i=1;
  while(i<mon)
  { if(i==1 || i==3 || i==5 || i==7 || i==8 || i==10 || i==12)
    { dd=31;
      if(year>=1900)
      days+=dd;
      else
      days-=dd;
    }
    else if(i==4 || i==6 || i==9 || i==11)
    { dd=30;
      if(year>=1900)
      days+=dd;
      else
      days-=dd;
    }
    else
    { lp=leap(year);
      if(lp==1)
      { dd=29;
	if(year>=1900)
	days+=dd;
	else
	days-=dd;
      }
      else
      { dd=28;
	if(year>=1900)
	days+=dd;
	else
	days-=dd;
      }
    }
    i++;
  }
  clrscr();
  for(i=1;i<70;i++)
  printf("_");
  for(i=1;i<5;i++)
  printf("
");
  for(i=1;i<5;i++)
  printf("	");
  printf("%d
",year);
  for(i=1;i<3;i++)
  printf("
");
  for(i=1;i<5;i++)
  printf("	");
  printf("%s
",month[mon-1]);
  for(i=1;i<70;i++)
  printf("_");
  printf("

");
  for(i=0;i<7;i++)
  printf("	%s",week[i]);
  printf("

	");
  tab=days%7;
  if(mon==1 || mon==3 || mon==5 || mon==7 || mon==8 || mon==10 ||
mon==12)
  { dd=31; }
  else if(mon==4 || mon==6 || mon==9 || mon==11)
  { dd=30; }
  else
  { lp=leap(year);
    if(lp==1)
    { dd=29; }
    else
    { dd=28; }
  }
  n=1;
  for(i=1;i<=7;i++)
  { if(i<=tab)
    { printf("	"); }
    else
    { printf("%2d	",n);
      n++;
    }
  }
  printf("

	");
  while(n<=dd)
  { i=1;
    while(i<=7)
    { if(n<=dd)
      { printf("%2d	",n);
	n++;i++;
      }
      else
      break;
    }
    printf("

	");
  }
  printf("
");
  for(i=1;i<70;i++)
  printf("_");
  getch();
}

int leap(int y)
{ if(y%4==0)
  { if(y%100==0)
    { if(y%400==0)
      return 1;
      else
      return 0;
    }
    return 1;
  }
  else
  return 0;
}

