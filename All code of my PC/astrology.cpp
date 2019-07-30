/* This code is used to determine certain information by giving the
necessary data */

/*Done by:Somok Sarkar*/

#include <stdio.h>
#include <conio.h>
#include <string.h>
#include <DOS.h>
int menu();
int year, month, day;
void main()
{
start:
clrscr();
printf("
Enter your year of birth(1970-2005):");
scanf("%d",&year);
if (year<1970||year>2005)
	goto start;

skip:
printf("
Enter Your Month of birth(1-12):");
scanf("%d",&month);

if (month==1)
	{
	back:
	printf("
Enter Day (1-31):");
	scanf("%d",&day);
	if (day<=19)
		{
		clrscr();
		printf("%d-%d-%d",month,day,year);
		menu();
		printf("
You are born on the month of JANUARY.");
		printf("
Your BirthStone is GARNET.");
		printf("
You are a CAPRICORN.");
		}
	else if (day>19&&day<=31)
		{
					 clrscr();
		printf("%d%d%d",month,day,year);
		menu();
		printf("
You are born on the month of JANUARY.");
		printf("
Your BirthStone is GARNET.");
		printf("
You are an AQUARIUS.");
		}
	else
		{printf("
Enter Correct Day!!!!!!");
		goto back;
		}
	}

else if (month==2)
	{
	back1:
	printf("
Enter Day (1-29):");
	scanf("%d",&day);
	if (day<=18)
		{
					 clrscr();
		printf("%d-%d-%d",month,day,year);
		menu();
		printf("
You are born on the month of FEBRUARY.");
		printf("
Your BirthStone is AMETHYST.");
		printf("
You are an AQUARIUS.");
		}
	else if (day>18&&day<=29)
		{
					 clrscr();
		printf("%d-%d-%d",month,day,year);
		menu();
		printf("
You are born on the month of FEBRUARY.");
		printf("
Your BirthStone is AMETHYST.");
		printf("
You are a PISCES.");
		}
	else
		{printf("
Enter Correct Day!!!!!!");
		goto back1;}
	}

else if (month==3)
	{
	back2:
	printf("
Enter Day (1-31):");
	scanf("%d",&day);
	if (day<=20)
		{
					 clrscr();
		printf("%d-%d-%d",month,day,year);
		menu();
		printf("
You are born on the month of MARCH.");
		printf("
Your BirthStone is AQUAMARINE or BLOODSTONE.");
		printf("
You are a PISCES.");
		}
	else if (day>20&&day<=31)
		{
					 clrscr();
		printf("%d-%d-%d",month,day,year);
		menu();
		printf("
You are born on the month of MARCH.");
		printf("
Your BirthStone is AQUAMARINE or BLOODSTONE.");
		printf("
You are an ARIES.");
		}
	else
		{printf("
Enter Correct Day!!!!!!");
		goto back2;}
	}

else if (month==4)
	{
	back3:
	printf("
Enter Day (1-30):");
	scanf("%d",&day);
	if (day<=19)
		{
					 clrscr();
		printf("%d-%d-%d",month,day,year);
		menu();
		printf("
You are born on the month of APRIL.");
		printf("
Your BirthStone is DIAMOND.");
		printf("
You are an ARIES.");
		}
	else if (day>19&&day<=30)
		{
					 clrscr();
		printf("%d-%d-%d",month,day,year);
		menu();
		printf("
You are born on the month of APRIL.");
		printf("
Your BirthStone is DIAMOND.");
		printf("
You are a TAURUS.");
		}
	else
		{printf("
Enter Correct Day!!!!!!");
		goto back3;}
	}

else if (month==5)
	{
	back4:
	printf("
Enter Day (1-31):");
	scanf("%d",&day);
	if (day<=20)
		{
					 clrscr();
		printf("%d-%d-%d",month,day,year);
		menu();
		printf("
You are born on the month of MAY.");
		printf("
Your BirthStone is EMERALD.");
		printf("
You are a TAURUS.");
		}
	else if (day>20&&day<=31)
		{
					 clrscr();
		printf("%d-%d-%d",month,day,year);
		menu();
		printf("
You are born on the month of MAY.");
		printf("
Your BirthStone is EMERALD.");
		printf("
You are a GEMINI.");
		}
	else
		{printf("
Enter Correct Day!!!!!!");
		goto back4;}
	}

else if (month==6)
	{
	back5:
	printf("
Enter Day (1-30):");
	scanf("%d",&day);
	if (day<=20)
		{
					 clrscr();
		printf("%d-%d-%d",month,day,year);
		menu();
		printf("
You are born on the month of JUNE.");
		printf("
Your BirthStone is PEARL, ALEXANDRITE or MOONSTONE.");
		printf("
You are a GEMINI.");
		}
	else if (day>20&&day<=30)
		{
					 clrscr();
		printf("%d-%d-%d",month,day,year);
		menu();
		printf("
You are born on the month of JUNE.");
		printf("
Your BirthStone is PEARL, ALEXANDRITE or MOONSTONE.");
		printf("
You are a CANCER.");
		}
	else
		{printf("
Enter Correct Day!!!!!!");
		goto back5;}
	}

else if (month==7)
	{
	back6:
	printf("
Enter Day (1-31):");
	scanf("%d",&day);
	if (day<=22)
		{
					 clrscr();
		printf("%d-%d-%d",month,day,year);
		menu();
		printf("
You are born on the month of JULY.");
		printf("
Your BirthStone is RUBY.");
		printf("
You are a CANCER.");
		}
	else if (day>22&&day<=30)
		{
					 clrscr();
		printf("%d-%d-%d",month,day,year);
		menu();
		printf("
You are born on the month of JULY.");
		printf("
Your BirthStone is RUBY.");
		printf("
You are a LEO.");
		}
	else
		{printf("
Enter Correct Day!!!!!!");
		goto back6;}
	}

else if (month==8)
	{
	back7:
	printf("
Enter Day (1-31):");
	scanf("%d",&day);
	if (day<=22)
		{
					 clrscr();
		printf("%d-%d-%d",month,day,year);
		menu();
		printf("
You are born on the month of AUGUST.");
		printf("
Your BirthStone is PERIDOT or SARDONYX.");
		printf("
You are a LEO.");
		}
	else if (day>22&&day<=31)
		{
					 clrscr();
		printf("%d-%d%-d",month,day,year);
		menu();
		printf("
You are born on the month of AUGUST.");
		printf("
Your BirthStone is PERIDOT or SARDONYX.");
		printf("
You are a VIRGO.");
		}
	else
		{printf("
Enter Correct Day!!!!!!");
		goto back7;}
	}

else if (month==9)
	{
	back8:
	printf("
Enter Day (1-30):");
	scanf("%d",&day);
	if (day<=22)
		{
					 clrscr();
		printf("%d-%d-%d",month,day,year);
		menu();
		printf("
You are born on the month of SEPTEMBER.");
		printf("
Your BirthStone is SAPPHIRE.");
		printf("
You are a VIRGO.");
		}
	else if (day>22&&day<=30)
		{
					 clrscr();
		printf("%d-%d-%d",month,day,year);
		menu();
		printf("
You are born on the month of SEPTEMBER.");
		printf("
Your BirthStone is SAPPHIRE.");
		printf("
You are a LIBRA.");
		}
	else
		{printf("
Enter Correct Day!!!!!!");
		goto back8;}
	}

else if (month==10)
	{
	back9:
	printf("
Enter Day (1-31):");
	scanf("%d",&day);
	if (day<=22)
		{
					 clrscr();
		printf("%d-%d-%d",month,day,year);
		menu();
		printf("
You are born on the month of OCTOBER.");
		printf("
Your BirthStone is OPAL or TOURMALINE.");
		printf("
You are a LIBRA.");
		}
	else if (day>22&&day<=31)
		{
					 clrscr();
		printf("%d-%d-%d",month,day,year);
		menu();
		printf("
You are born on the month of OCTOBER.");
		printf("
Your BirthStone is OPAL or TOURMALINE.");
		printf("
You are a SCORPIO.");
		}
	else
		{printf("
Enter Correct Day!!!!!!");
		goto back9;}
	}

else if (month==11)
	{
	back10:
	printf("
Enter Day (1-30):");
	scanf("%d",&day);
	if (day<=21)
		{
					 clrscr();
		printf("%d-%d-%d",month,day,year);
		menu();
		printf("
You are born on the month of NOVEMBER.");
		printf("
Your BirthStone is TOPAZ.");
		printf("
You are a SCORPIO.");
		}
	else if (day>21&&day<=30)
		{
					 clrscr();
		printf("%d-%d-%d",month,day,year);
		menu();
		printf("
You are born on the month of NOVEMBER.");
		printf("
Your BirthStone is TOPAZ.");
		printf("
You are a SAGITARIUS.");
		}
	else
		{printf("
Enter Correct Day!!!!!!");
		goto back10;}
	}

else if (month==12)
	{
	back11:
	printf("
Enter Day (1-31):");
	scanf("%d",&day);
	if (day<=21)
		{
					 clrscr();
		printf("%d-%d-%d",month,day,year);
		menu();
		printf("
You are born on the month of DECEMBER.");
		printf("
Your BirthStone is TURQUOISE OR ZIRCON");
		printf("
You are a SAGITARIUS.");
		}
	else if (day>21&&day<=31)
		{
					 clrscr();
		printf("%d-%d-%d",month,day,year);
		menu();
		printf("
You are born on the month of DECEMBER.");
		printf("
Your BirthStone is TURQUOISE OR ZIRCON.");
		printf("
You are a CAPRICORN.");
		}
	else
		{printf("
Enter Correct Day!!!!!!");
		goto back11;}
	}
else
	{printf("
Enter Correct No.!!!!!!");

	goto skip;}
getch();
}

int menu()
{
if (year==1992||year==1980||year==2004)
	printf("
You are born on the Year of the MONKEY.");
else if (year==1993||year==1981||year==2005)
	printf("
You are born on the Year of the ROOSTER.");
else if (year==1994||year==1982||year==1970)
	printf("
You are born on the Year of the DOG");
else if (year==1995||year==1971||year==1983)
	printf("
You are born on the Year of the BOAR.");
else if (year==1996||year==1984||year==1972)
	printf("
You are born on the Year of the RAT.");
else if (year==1997||year==1985||year==1973)
	printf("
You are born on the Year of the OX.");
else if (year==1998||year==1986||year==1974)
	printf("
You are born on the Year of the TIGER.");
else if (year==1975||year==1999||year==1987)
	printf("
You are born on the Year of the RABBIT.");
else if (year==1976||year==2000||year==1988)
	printf("
You are born on the Year of the DRAGON.");
else if (year==1977||year==2001||year==1989)
	printf("
You are born on the Year of the SNAKE.");
else if (year==2002||year==1978||year==1990)
	printf("
You are born on the Year of the HORSE.");
else if (year==2003||year==1979||year==1991)
	printf("
You are born on the Year of the RAM.");
getch();
}

