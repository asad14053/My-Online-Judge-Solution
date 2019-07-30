      /* program of Result prosess system */

/*************************** Header file *****************************/

#include<stdio.h>
#include<conio.h>
#include<stdlib.h>
#include<string.h>
#include<io.h>


/***************************** User define function **********************************************/

tea_entrl(void);        /* Internal teacher menu */
admi_main(void);         /*main menu administration function*/
acad_main(void);         /*main menu academy function*/
exit(void);              /* exit menu */
add_number(void);         /* Add number to the student*/
viwe_number(void);        /* Viwe student subject marks */
viwe_inf(void);          /*Viwe student information */
delete_list(void);        /*Delete student number list */
std_info(void);           /*Student information function */
contrpllar(void);        /*Main  Result process */
dept_inf(void);           /*Viwe dept information */
delete_inf(void);         /* Delete student information */
add_inf(void);            /*Add new student information */
load_info(void);           /*Student information load from file*/

delete_int();              /*Delete intranl teacher mark*/
delete_ext();              /*Delete extranal teacher mark*/


add_final_mark(void);       /*add final mark for each student from internal teacher */
add_extra_teacher(void);        /*add final mark for each student from extranal teacher */

find_free(int u,char *l);        /*find how many course mark add each student */
find_credit(int fr,char *fd);    /*find how many credit add each student */
find_int(int d,char*k,char*p);    /*find no repeated intranal course mark each student */
find(int d,char *k,char *p);       /*Compear Extranal course to the intranal course */
find_ext(char *d,int r,char*c);    /*find no repeated extranal course mark each student */

edit();                             /* Edit menu */
edit_int();                         /* Edit to the intranal teacher mark */
edit_ext();                         /* Edit to the extranal teacher mark */
edit_inf();                         /* Edit to the student information */

result_final();
calculation();



#define MAX 100


/***************************************** Globle variable *********************************************/



struct stu_data{	                     /* main structure for student database */
		char dept[4];
		char name[14];
		char roll[9];
		char resist[9];
		char semester[5];
		char session[8];

		     }base[MAX] ;

struct inputnum{                              /* main structure intranal teacher number database */
	      char mdept[5];
	      int mroll;
	      char subt[8];
	      char sbmrk[15];
	      char clstmk[5];
	      char clspt[3];
	      int credit ;
			 }add_num[MAX];


struct input_ext_num{                              /* main structure extranal teacher number database */
	      char mdept[5];
	      int mroll;
	      char subt[8];
	      char sbmrk[2];
			 }add_num_ext[MAX];



struct mark{                                          /* main structure for final result database */
	    char dept[5];
	    int roll;
	    char subt[8];
	    int sbmrk;
	    int int_mrk;
	    int ext_mrk;
	    int thrmrk;
	    int credit;
	    int clst;
	    int clsp;
	    char grad[2];
	    char gpa[1];
	    char total_gpa[2];
		       }result[MAX];

     char *gpa_point[]={"4.00","3.75","3.50","3.25","3.00","2.75","2.50","2.25","2.00","0.00"};
     char *grade_latter[]={"A+","A","A-","B+","B","B-","C+","C","D","F"};




	 FILE *fp;


/******************************************** Main function ********************************************/

void main()
    {

     clrscr();

      char  n;



    while(1)

	{

	  clrscr();
	  textcolor(WHITE);
	  gotoxy(15,3);
	  cprintf("Enter your choice.");

	  gotoxy(25,5);
	  cprintf("1.Administration.");

	  gotoxy(25,7);
	  cprintf("2. Academy.");

	  gotoxy(25,9);
	  cprintf("3. Exit.");

	  n=getchar();

	   switch(n)
		  {
			case '1':
				admi_main();
				break;

			case '2':
				acad_main();
				break;

			case '3':
				exit(0);

		  }
	   }

	}


 /******************************************** Academy main menu *************************************/


 acad_main(void)

	    {


	     int b;


		while(1)

			{
			clrscr();

			textcolor(WHITE);
			gotoxy(15,3);
			printf("Enter your choise.");

			gotoxy(25,5);
			printf("1.Add number.");

			gotoxy(25,7);

			printf("2.Viwe number.");

			gotoxy(25,9);

			printf("3.Delete number.");

			gotoxy(25,11);
			printf("4.Ruturn.");


			b=getche();

			switch(b){

				  case '1':
					 add_number();
					 break;

				  case '2':

					 viwe_number();
					 break;

				  case '3':
					 delete_list();
					 break;

				 case '4':
					 return 0;

				 }

			  }

		}

/***************************************************** Administration main menu ******************************/


 admi_main()
	  {


	 int i;


	while(1)

		{

		clrscr();

		textcolor(WHITE);
		gotoxy(15,3);
		printf("Enter your choice.");

		gotoxy(25,5);
		printf("1.Controllar.");

		gotoxy(25,7);
		printf("2.Student information.");

		gotoxy(25,9);
		printf("3.Delete information.");

		gotoxy(25,11);
		printf("4.Return.");




		i=getche();

		 switch(i)
			{

			case'1':
				contrpllar();
				break;

			case'2':
				std_info();
				break;

			case'3':
				delete_inf();
				break;

			case'4':
				return 0;

			 }


		   }

	}




/***************************************** Internal Teacher menu ************************************/



add_number(void)

		{
		 int y;

		 while(1)
			{

			 clrscr();

			 textcolor(WHITE);
			 gotoxy(15,3);
			 printf("Enter your choice.");

			 gotoxy(25,5);
			 printf("1.Intranal Teacher's mark.");

			 gotoxy(25,7);
			 printf("2.Extranal Teacher's mark.");

			 gotoxy(25,9);
			 printf("3.Edit.");

			 gotoxy(25,11);
			 printf("4.Return.");

			  y=getche();

			 switch(y)

				 {
				  case '1':
					  add_final_mark();
					  break;

				  case '2':
					 {
					 clrscr();
					add_extra_teacher();
					 break;
					 }

				 case '3':
					 edit();
					 break;

				 case '4':
					 main();

				     }


			       }
			}


/***************************************** Add final exam mark internal teacher *********************/


add_final_mark(void)

		 {


		 FILE *fn;

		char *fd,*fr,*m;
		int mr,k,w=0,p,x,r,y,l,b,c,u;



		 do
		  {

		w=0;

		clrscr();

		fn=fopen("d:\\data.txt","a+");
		rewind(fn);

		gotoxy(25,3);
		printf("Enter dept name");
		scanf("%s",fd);

		gotoxy(25,4);
		printf("Enter roll no.");
		scanf("%d",&r);

		y=find_free(r,fd);

		u=find_credit(r,fd);

		if(y>=7 || y<0)

			{
			gotoxy(25,16);
			printf("You already enter seven course marks for this student.");
			w=1;

			}

		if(u>=20 || u<0)
			{
			gotoxy(25,17);
			printf("You already enter 20 credit for this student.");
			w=1;
			}

			e:

		 if(y<7 && u<20)

			  {
			    gotoxy(5,27);
			    printf("You can add only %d course marks and %d credit for this student.\n How many course do you want to enter ?",(7-y),(20-u));
			    scanf("%d",&x);

			    k=y+x;

			    if(k>7)

				 {
				  gotoxy(25,20);
				 printf("You cann't do this.");

				 goto e;

				 }

			    for(int i=0;i<x;i++)

				{


				 strcpy(add_num[i].mdept,fd);
				 fprintf(fn,"%s\n",add_num[i].mdept);

				 add_num[i].mroll=r;


				 fprintf(fn,"%d\n",add_num[i].mroll);


				  ww:
				 gotoxy(25,7);
				 printf("Enter course code.");
				 scanf("%s",m);

				 p=find_int(r,fd,m);

				 strcpy(add_num[i].subt,m);

				 if(p==0)
					 fprintf(fn,"%s\n",add_num[i].subt);


				if(p==1)
					{
					  gotoxy(25,8);
					  printf("You cannot enter this course code again.\nTry another course.\n");
					  goto ww;

					 }

					 z:
					 gotoxy(25,9);
					 printf("Enter course mark");
					 scanf("%s",add_num[i].sbmrk);

			       if((atoi(add_num[i].sbmrk))>70)

							 {
							 gotoxy(25,10);
							 printf("You must add  below to 70 mark.");

							 goto z;

							  }

							 fprintf(fn,"%s\n",add_num[i].sbmrk);

							 as:
							 gotoxy(25,11);
							 printf("Enter class test mark");
							 scanf("%s",add_num[i].clstmk);

				if((atoi(add_num[i].clstmk))>20)

							{
							 gotoxy(25,12);
							 printf("You must add  below to 20 mark.");

							 goto as;

							  }


							 fprintf(fn,"%s\n",add_num[i].clstmk);

							 aa:
							 gotoxy(25,13);
							 printf("Enter class attendence");
							 scanf("%s",add_num[i].clspt);

							if((atoi(add_num[i].clspt))>10)

										    {
										     gotoxy(25,14);
										     printf("You must add  below to 10 mark.");

										     goto aa;

										     }

										    fprintf(fn,"%s\n",add_num[i].clspt);

										    nn:
										    vv:
										    gotoxy(25,16);
										    printf("You can enter %d credit number.",(20-u));
										    gotoxy(25,18);
										    printf("Enter credit number.");
										    scanf("%d",&c);

										    if((u+c)<=20)
												 {

												 if(c<=3 && c>0)
													       {
														add_num[i].credit=c;
														fprintf(fn,"%d\n",add_num[i].credit);

														}

												   if(c<=0 || c>3)
														{
														 gotoxy(25,21);
														 printf("You must enter credit number between 1 to 3.");
														 goto nn;
									     }

									     }
										     else
											goto vv;


										w=1;

								   }

							  }


							if(w==0)
							       {
								gotoxy(25,23);
							       printf("The student donot found");
								}
							       gotoxy(25,24);
							       printf("Do you continue(y/n)?");


				     fclose(fn);

				     b=getche();


					 }while(b!=110);



			getch();

		 return 0;



		 }


/******************************************** Add extranal teacher mark ****************************/





add_extra_teacher()

	{

	FILE *fn,*ft;


	char *fd,d,*m,*cm;
	int mr,fr,w=0,p,x,r,y,k=0;

       do

	 {

	 clrscr();

	 w=0;

	 k=0;

	 fn=fopen("d:\\datatest.txt","a+");
	 ft=fopen("d:\\data.txt","r");

	 rewind(ft);
	 rewind(fn);


	gotoxy(25,5);
	printf("Enter dept name");
	scanf("%s",fd);

	gotoxy(25,7);
	printf("Enter roll no.");
	scanf("%d",&fr);

	   for(int i=0;i<MAX;i++)

		   {
			 fscanf(ft,"%s",&add_num[i].mdept);
			 fscanf(ft,"%d",&add_num[i].mroll);


			 if((strcmp(add_num[i].mdept,fd))==0 && add_num[i].mroll==fr)

				    {

				     aa:

				    if(k<3)
					   {

					    k++;

					    gotoxy(25,9);
					    printf("Enter course code.");
					    scanf("%s",m);

					    y=find(fr,fd,m);

					    x=find_ext(fd,fr,m);

				    if(y==1)
					   {
					    if(x!=1)

					       {

						   strcpy(add_num_ext[i].mdept,fd);
						   fprintf(fn,"%s\n",add_num_ext[i].mdept);


						   add_num_ext[i].mroll=fr;


						   fprintf(fn,"%d\n",add_num_ext[i].mroll);


						   strcpy(add_num_ext[i].subt,m);

						   fprintf(fn,"%s\n",add_num_ext[i].subt);

						   tt:
						   gotoxy(25,11);
						   printf("Enter course mark");
						   scanf("%s",cm);

					     if((atoi(cm))<=70)

						       {
							 strcpy(add_num_ext[i].sbmrk,cm);
							 fprintf(fn,"%s\n",add_num_ext[i].sbmrk);
							 }

							else
							   goto tt;

						     }

					    if(x==1)
						   {
						      gotoxy(25,20);
						      printf("You cannot enter this course code repeat.");
						       goto aa;
						     }

				    }


			 else
			    {
			     gotoxy(25,21);
			     printf("The course code not found.Try again.");

			     goto aa;

			     }

			}


			w=1;

			break;

			}

	       }


		 if(w==0)
		 {
		 gotoxy(25,22);
		 printf("The student donot found");
		 }

	      fclose(ft);

	     gotoxy(25,23);
	     printf("Do you continue(y/n)?");

	     d=getche();

	     }while(d!=110);

		 fclose(fn);


		 return 0;

	    }


/*************************************************Find extranal course to no repeat*******************************/

find_ext(char *d,int r,char*c)

	{

	 FILE *fp;

	 fp=fopen("d:\\datatest.txt","r");


	 rewind(fp);

	 int i,a,w=0;


	for(i=0; i<25;i++)

	  {

	 fscanf(fp,"%s",&add_num_ext[i].mdept);
	 fscanf(fp,"%d",&add_num_ext[i].mroll);


	 fscanf(fp,"%s",&add_num_ext[i].subt);
	 fscanf(fp,"%s",&add_num_ext[i].sbmrk);



	 a=strcmp(add_num_ext[i].mdept,d);



	 if(a==0 && add_num_ext[i].mroll==r && (strcmp(add_num_ext[i].subt,c))==0)

	   w=1;



	  }


	fclose(fp);

	return w;

	}



/****************************************** Compear Extranal course to the intranal   *******************************/


find(int d,char*k,char*p)

		{

	FILE *fn;

	fn=fopen("d:\\data.txt","r");

        rewind(fn);

       int i,t=0,a;

       for(i=0; i<10;i++)

	{

	 fscanf(fn,"%s",&add_num[i].mdept);
	 fscanf(fn,"%d",&add_num[i].mroll);

	 fscanf(fn,"%s",&add_num[i].subt);
	 fscanf(fn,"%s",&add_num[i].sbmrk);

	 fscanf(fn,"%s",&add_num[i].clstmk);
	 fscanf(fn,"%s",&add_num[i].clspt);
	 fscanf(fn,"%d",&add_num[i].credit);

	 a=strcmp(add_num[i].mdept,k);

	 if(a==0 && d==add_num[i].mroll && (strcmp(add_num[i].subt,p))==0)
	  t=1;

	 }


       fclose(fn);

       
	return t;

   }

/**********************************************************************************************/
  find_int(int d,char*k,char*p)

	{

	FILE *fn;

	fn=fopen("d:\\data.txt","r");

	rewind(fn);

        int i,t=0,a;

	load_info();

        for(i=0; i<10;i++)

	  {

	 fscanf(fn,"%s",&add_num[i].mdept);
	 fscanf(fn,"%d",&add_num[i].mroll);

	 fscanf(fn,"%s",&add_num[i].subt);
	 fscanf(fn,"%s",&add_num[i].sbmrk);
	 fscanf(fn,"%d",&add_num[i].credit);

	 fscanf(fn,"%s",&add_num[i].clstmk);
	 fscanf(fn,"%s",&add_num[i].clspt);

	 a=strcmp(add_num[i].mdept,k);

	 if(a==0 && d==add_num[i].mroll && (strcmp(add_num[i].subt,p))==0)
	   t=1;

	  }

        fclose(fn);

	if(t==1)
	return 1;

	return t;

    }


/*****************************************Find credit number *****************************************/

find_credit(int fr,char *fd)

      {

	FILE *fn;

	fn=fopen("d:\\data.txt","r");

        rewind(fn);

        int i,k=0,a,w;



        for(i=0; i<15;i++)

	  {

	  fscanf(fn,"%s",&add_num[i].mdept);
	  fscanf(fn,"%d",&add_num[i].mroll);


	  fscanf(fn,"%s",&add_num[i].subt);
	  fscanf(fn,"%s",&add_num[i].sbmrk);
	  fscanf(fn,"%s",&add_num[i].clstmk);
	  fscanf(fn,"%s",&add_num[i].clspt);
	  fscanf(fn,"%d",&add_num[i].credit);


	  a=strcmp(add_num[i].mdept,fd);



	  if(a==0 && add_num[i].mroll==fr)

		{

	  w=add_num[i].credit;

	  k=w+k;

		 }

	   }

	 fclose(fn);

         return k;

      }





/******************************************** View student subject marks ********************/

 viwe_number(void)

          {

	    FILE *fn,*ft;
	    char *dp,s,*p,d;
	    int t,h,ar,ad,g,r,q=0;

	   do
            {

	       clrscr();

                 fn=fopen("d:\\data.txt","r");
                 ft=fopen("d:\\datatest.txt","r");

		 rewind(fn);
		 rewind(ft);

		 gotoxy(15,3);
                 printf("Enter your Choice.");

		 gotoxy(25,5);
		 printf("1.Internal mark.");

		 gotoxy(25,7);
		 printf("2.Extranal mark.");

		 gotoxy(25,9);
		 printf("3.Return.");
		 scanf("%d",&g);

                 clrscr();

		 gotoxy(25,3);
		 printf("Enter dept name.");
		 scanf("%s",dp);

		 gotoxy(25,5);
		 printf("Enter roll no.");
		 scanf("%d",&r);

                 clrscr();

		 gotoxy(3,3);
		 printf("Dept:%s.",dp);
		 gotoxy(20,3);
		 printf("Roll:%d.",r);

		                             gotoxy(3,5);
					     printf("Course code:");


     					     gotoxy(18,5);
     					     printf("Marks:");

					     gotoxy(30,5);
					     printf("Credit:");

					     gotoxy(40,5);
					     printf("Class test:");

					     gotoxy(54,5);
					     printf("Class attendence:");

					     
			for(int i=0;i<=MAX;++i)

			 {

			 fscanf(fn,"%s",&add_num[i].mdept);
			 fscanf(fn,"%d",&add_num[i].mroll);

                         fscanf(fn,"%s",&add_num[i].subt);
			 fscanf(fn,"%s",&add_num[i].sbmrk);

			 fscanf(fn,"%s",&add_num[i].clstmk);
		         fscanf(fn,"%s",&add_num[i].clspt);
		         fscanf(fn,"%d",&add_num[i].credit);

                       	 fscanf(ft,"%s",&add_num_ext[i].mdept);
			 fscanf(ft,"%d",&add_num_ext[i].mroll);
			 fscanf(ft,"%s",&add_num_ext[i].subt);
			 fscanf(ft,"%s",&add_num_ext[i].sbmrk);



			    t=add_num[i].mroll;

			    h=strcmp(dp,add_num[i].mdept);


			     if(t==r && h==0 && g==1)
					     {

					    

					   gotoxy(3,6+i);

					   printf("%s",add_num[i].subt);
					   gotoxy(18,6+i);

					   printf("%s",add_num[i].sbmrk);
					   gotoxy(30,6+i);

					   printf("%d",add_num[i].credit);
					   gotoxy(40,6+i);

					   printf("%s",add_num[i].clstmk);
					   gotoxy(54,6+i);

					   printf("%s",add_num[i].clspt);

					   q=1;

					   }

				if(t==r && h==0 && g==2)
				     {

				       gotoxy(3,6+i);

				       printf("%s",add_num_ext[i].subt);

				       gotoxy(18,6+i);

				       printf("%s",add_num_ext[i].sbmrk);

				   q=1;

				 }
			    }


			     if(q!=1)
				   {
				   gotoxy(18,19);

			           printf("\nMismatch your Roll no or Dept name.");

				   }

			           fclose(fn);

				   gotoxy(20,23);

				  printf("Do you continue (Y/N)?");

				  d=getche();

		           }while(d!=110);


		    		    if(g==3)
				    return 0;

				    return 0;


	     }




/*************************************** Edit add number **************************************/

   edit()
	{

	 int a;

	 while(1)
	   {
	   clrscr();

	   gotoxy(15,3);
	   printf("Enter your choice.");

	   gotoxy(25,5);
	   printf("1.Internal teacher.");

	   gotoxy(25,7);
	   printf("2.Extranal teacher.");

	   gotoxy(25,9);
	   printf("3.Return.");


	   a=getche();

		   switch(a)
			   {
			     case'1':
				    edit_int();
				    break;
			     case '2':
				     edit_ext();
				     break;
			     case '3':
				      return 0;
			      }

	           }

         }


/*********************************Edit intranal teacher marks **********************************/

edit_int()
	  {

	     char *c,w,*m;
	     int j,t,s,r,a,p,i,h,er,ec;
	     FILE *fn,*tn;


	  fn=fopen("d:\\data.txt","a+");

	  rewind(fn);

	  tn=fopen("d:\\temp1.txt","w");


     do
       {

	j=0;
	clrscr();

	gotoxy(25,3);
	printf("Enter student Dept name.");
	scanf("%s",c);


	gotoxy(25,5);
	printf("Enter student Roll number.");
        scanf("%d",&t);


        

		  for(i=0;i<=MAX;++i)
			 {

			 fscanf(fn,"%s",&add_num[i].mdept);
			 fscanf(fn,"%d",&add_num[i].mroll);


			 fscanf(fn,"%s",&add_num[i].subt);
			 fscanf(fn,"%s",&add_num[i].sbmrk);


			 fscanf(fn,"%s",&add_num[i].clstmk);
			 fscanf(fn,"%s",&add_num[i].clspt);
			 fscanf(fn,"%d",&add_num[i].credit);

			    er=add_num[i].mroll;
			    ec=add_num[i].credit;
			    if(er==0 && ec==0)
				   break;

				if(t==add_num[i].mroll && (strcmp(add_num[j].mdept,c))==0)          /* Find correct id number */
						{
                                                 clrscr();

					    gotoxy(25,3);
					    printf("Depertment: %s.",add_num[i].mdept);
					    gotoxy(25,5);
					    printf("Roll no.: %d.",add_num[i].mroll);
					    gotoxy(25,7);
					    printf("Course code: %s.",add_num[i].subt);
					    gotoxy(25,9);
					    printf("Credit number: %d.",add_num[i].credit);
					    gotoxy(25,11);
					    printf("Course mark: %s.",add_num[i].sbmrk);
					    gotoxy(25,13);
					    printf("Class test mark:%s.",add_num[i].clstmk);
					    gotoxy(25,15);
					    printf("Class attendence: %s.",add_num[i].clspt);

						   j++;
						   gotoxy(25,18);
						   printf("Do you edit this list(y/n)");

						   w=getche();

						     if(w!=110)
							   {
							   clrscr();

							   gotoxy(25,3);
							   printf("Enter dept name.",add_num[i].mdept);
							   scanf("%s",add_num[i].mdept);
							   fprintf(tn,"%s\n",add_num[i].mdept);

							   gotoxy(25,5);
							   printf("Enter roll no.",add_num[i].mroll);
							   scanf("%d",add_num[i].mroll);
							   fprintf(tn,"%d\n",add_num[i].mroll);

							   gotoxy(25,7);
							   printf("Enter course code.");
							   scanf("%s",m);

							   strcpy(add_num[i].subt,m);
							   fprintf(tn,"%s\n",add_num[i].subt);


							    z:

							   gotoxy(25,9);
							   printf("Enter course mark");
							   scanf("%s",add_num[i].sbmrk);

					    if((atoi(add_num[i].sbmrk))>70)
							   {
							   gotoxy(25,20);
							   printf("You must add  below to 70 mark.");
							   goto z;

							   }

							   fprintf(tn,"%s\n",add_num[i].sbmrk);

							   as:

							   gotoxy(25,11);
							   printf("Enter class test mark");
							   scanf("%s",add_num[i].clstmk);

					    if((atoi(add_num[i].clstmk))>20)
							  {
							  gotoxy(25,20);
							  printf("You must add  below to 20 mark.");
							  goto as;

							  }


							  fprintf(tn,"%s\n",add_num[i].clstmk);

							  aa:

							  gotoxy(25,13);
							  printf("Enter class attendence");
							  scanf("%s",add_num[i].clspt);

					     if((atoi(add_num[i].clspt))>10)
							   {
							   gotoxy(25,21);
							   printf("You must add  below to 10 mark.");
							   goto aa;

							   }

							   fprintf(tn,"%s\n",add_num[i].clspt);

							   nn:

							   gotoxy(25,15);
							   printf("Enter credit number.");
							   scanf("%d",&h);

					     if(h<=3 && h>0)
							   {
							    add_num[i].credit=h;
							    fprintf(fn,"%d\n",add_num[i].credit);
							    }

					    if(h<=0 || h>3)
							    {
							    gotoxy(25,22);
							    printf("You must enter credit number between 1 to 3.");
							    goto nn;
							    }

							    continue;
							    }

						 }

					     fprintf(tn,"%s\n",add_num[i].mdept);
					     fprintf(tn,"%d\n",add_num[i].mroll);
					     fprintf(tn,"%s\n",add_num[i].subt);
					     fprintf(tn,"%s\n",add_num[i].sbmrk);
					     fprintf(tn,"%s\n",add_num[i].clstmk);
					     fprintf(tn,"%s\n",add_num[i].clspt);
					     fprintf(tn,"%d\n",add_num[i].credit);

					     ++i;


					}



					if(j==0)
					{
					gotoxy(25,24);
					printf("Error in your inforation.");
					 }
					gotoxy(25,25);
					printf("Any more(y/n)?");


	       }while((getche())!=110);

			  fclose(tn);
			  fclose(fn);

			   if(j!=0)
				{
				remove("d:\\data.txt");

				rename("d:\\temp1.txt","d:\\data.txt");
				}

				return 0;

	   }


/************************************** Edit_ext ****************************************/
edit_ext(void)
	   {
	      char *c,w,*m;
	      int j,t,s,r,a,p,er;
	      FILE *ft,*tt;

	   ft=fopen("d:\\datatest.txt","a+");


	  rewind(ft);

	  tt=fopen("d:\\temp2.txt","w");


    do
      {
	j=0;


	clrscr();


	gotoxy(25,3);
	printf("Enter student Dept name.");
	scanf("%s",c);


	gotoxy(25,5);
	printf("Enter student Roll number.");
	scanf("%d",&t);


			  for(int l=0;l<=MAX;++l)
						{

						 fscanf(ft,"%s",&add_num_ext[l].mdept);
						 fscanf(ft,"%d",&add_num_ext[l].mroll);

						 fscanf(ft,"%s",&add_num_ext[l].subt);
						 fscanf(ft,"%s",&add_num_ext[l].sbmrk);

						   er=add_num_ext[l].mroll;
						   if(er==0)
						   break;

						    if(t==add_num[l].mroll && (strcmp(add_num_ext[l].mdept,c))==0)          /* Find correct id number */

							     {
							     j++;

							     clrscr();

							     gotoxy(25,3);
							     printf("Depertment:%s",add_num_ext[l].mdept);

							     gotoxy(25,5);
							     printf("Roll no:%d",add_num_ext[l].mroll);

							     gotoxy(25,7);
							     printf("Course code:%s",add_num_ext[l].subt);

							     gotoxy(25,9);
							     printf("Course maark:%s",add_num_ext[l].sbmrk);

							     gotoxy(25,11);
							     printf("Do you edit this list(y/n)");

							     if((getche())!=110)
								       {

									clrscr();

								       gotoxy(25,3);
								       printf("Enter dept name.",add_num_ext[l].mdept);
								       scanf("%s",add_num_ext[l].mdept);
								       fprintf(tt,"%s\n",add_num_ext[l].mdept);

								       gotoxy(25,5);
								       printf("Enter roll no.",add_num_ext[l].mroll);
								       scanf("%d",add_num_ext[l].mroll);
								       fprintf(tt,"%d\n",add_num_ext[l].mroll);

								       gotoxy(25,7);
								       printf("Enter course code.",add_num_ext[l].subt);
								       scanf("%s",add_num_ext[l].subt);
								       fprintf(tt,"%s\n",add_num_ext[l].subt);

								       gotoxy(25,9);
								       printf("Enter course mark.\n",add_num_ext[l].sbmrk);
								       scanf("%s",add_num_ext[l].sbmrk);
								       fprintf(tt,"%s\n",add_num_ext[l].sbmrk);


								       j=1;

								      continue;

									 }


							     }

							   fprintf(tt,"%s\n",add_num_ext[l].mdept);
							   fprintf(tt,"%d\n",add_num_ext[l].mroll);
							   fprintf(tt,"%s\n",add_num_ext[l].subt);
							   fprintf(tt,"%s\n",add_num_ext[l].sbmrk);

					   }




					if(j==0)
					{
					gotoxy(25,20);
					printf("Error in your inforation.");
					 }

					gotoxy(25,21);
					printf("Any more(y/n)?");


	       }while((getche())!=110);


			 fclose(ft);
			 fclose(tt);

			if(j!=0)
			 {
			remove("d:\\datatest.txt");

			rename("d:\\temp2.txt","d:\\datatest.txt");
			  }

				return 0;

	   }


/**************************** Delete student number list  ***************************/
delete_list(void)
	    {

	     int a;

	     while(1)

		   {

		   clrscr();

		   gotoxy(15,3);
		   printf("Enter your choice.");

		   gotoxy(25,5);
		   printf("1.Internal teacher.");

		   gotoxy(25,7);
		   printf("2.Extranal teacher.");

		   gotoxy(25,9);
		   printf("3.Return.");

		    a=getche();

		   switch(a)
			   {
			     case'1':
				    delete_int();
				    break;

			     case '2':
				     delete_ext();
				     break;

			     case '3':
				      return 0;
			     }
		       }



		}


/************************************************** Delete intranal teacher mark ******************************/


delete_int()
	  {
	     char *c,w,*m;
	     int j,t,s,r,a,p,i,h,er,ec;
	     FILE *fn,*tn;

	    fn=fopen("d:\\data.txt","a+");

	    rewind(fn);

	    tn=fopen("d:\\temp1.txt","w");


     do
	{
	   j=0;
	clrscr();

	gotoxy(25,3);
	printf("Enter student Dept name.");
	scanf("%s",c);


	gotoxy(25,5);
	printf("Enter student Roll number.");

	scanf("%d",&t);


		   for(i=0;i<=MAX;++i)
			   {

			 fscanf(fn,"%s",&add_num[i].mdept);
			 fscanf(fn,"%d",&add_num[i].mroll);

			 fscanf(fn,"%s",&add_num[i].subt);
			 fscanf(fn,"%s",&add_num[i].sbmrk);


			 fscanf(fn,"%s",&add_num[i].clstmk);
			 fscanf(fn,"%s",&add_num[i].clspt);
			 fscanf(fn,"%d",&add_num[i].credit);

			    er=add_num[i].mroll;
			    ec=add_num[i].credit;

		   if(er==0 && ec==0)
			    break;

		   if(t==add_num[i].mroll && (strcmp(add_num[j].mdept,c))==0)          /* Find correct id number */

					{
					   clrscr();

					    gotoxy(25,3);
					    printf("Depertment: %s.",add_num[i].mdept);

					    gotoxy(25,5);
					    printf("Roll no.: %d.",add_num[i].mroll);

					    gotoxy(25,7);
					    printf("Course code: %s.",add_num[i].subt);

					    gotoxy(25,9);
					    printf("Credit number: %d.",add_num[i].credit);

					    gotoxy(25,11);
					    printf("Course mark: %s.",add_num[i].sbmrk);

					    gotoxy(25,13);
					    printf("Class test mark: %s.",add_num[i].clstmk);

					    gotoxy(25,15);
					    printf("Class attendence: %s.",add_num[i].clspt);

						   j++;

						   gotoxy(25,19);
						   printf("Do you delete this list(y/n)");

						      w=getche();

						     if(w!=110)
							   {

							   add_num[i].mdept[0]=' ';
							   add_num[i].mroll=' ' ;
							   add_num[i].subt[0]=' ';

							   add_num[i].sbmrk[0]=' ';
							   add_num[i].clstmk[0]=' ';

							   add_num[i].clspt[0]=' ';
							   add_num[i].credit=' ';
							   continue;
							    }

						 }

					     fprintf(tn,"%s\n",add_num[i].mdept);
					     fprintf(tn,"%d\n",add_num[i].mroll);
					     fprintf(tn,"%s\n",add_num[i].subt);
					     fprintf(tn,"%s\n",add_num[i].sbmrk);
					     fprintf(tn,"%s\n",add_num[i].clstmk);
					     fprintf(tn,"%s\n",add_num[i].clspt);
					     fprintf(tn,"%d\n",add_num[i].credit);

					     ++i;


					}



					if(j==0)
					{
					gotoxy(25,22);
					printf("\nError in your inforation.");

					}
					gotoxy(25,23);
					printf("Any more(y/n)?");


	       }while((getche())!=110);

			  fclose(tn);
			  fclose(fn);

			   if(j!=0)
			   {
			     remove("d:\\data.txt");

			     rename("d:\\temp1.txt","d:\\data.txt");
			    }

			    return 0;

	   }


 /******************************************************* delete extranal teacher marks *********************************/

delete_ext(void)
	   {
	     char *c,w,*m;
	     int j,t,s,r,a,p,er;
	     FILE *ft,*tt;

	  ft=fopen("d:\\datatest.txt","a+");


	  rewind(ft);

	  tt=fopen("d:\\temp2.txt","w");


    do
      {
	j=0;
	clrscr();

	gotoxy(25,3);
	printf("Enter student Dept name.");
	scanf("%s",c);


	gotoxy(25,5);
	printf("Enter student Roll number.");
	scanf("%d",&t);

			 for(int l=0;l<=MAX;++l)
						{

						 fscanf(ft,"%s",&add_num_ext[l].mdept);
						 fscanf(ft,"%d",&add_num_ext[l].mroll);

						 fscanf(ft,"%s",&add_num_ext[l].subt);
						 fscanf(ft,"%s",&add_num_ext[l].sbmrk);

						   er=add_num_ext[l].mroll;


						    if(t==add_num[l].mroll && (strcmp(add_num_ext[l].mdept,c))==0)          /* Find correct id number */
							     {

							      j++;

							      clrscr();


							     gotoxy(25,3);
							     printf("Depertment:%s",add_num_ext[l].mdept);

							     gotoxy(25,5);
							     printf("Roll no:%d",add_num_ext[l].mroll);

							     gotoxy(25,7);
							     printf("Course code:%s",add_num_ext[l].subt);

							     gotoxy(25,9);
							     printf("Course maark:%s",add_num_ext[l].sbmrk);

							      gotoxy(25,11);
							     printf("Do you delete this list(y/n)?");

							if((getche())!=110)

								{

							   add_num_ext[l].mdept[0]=' ';
							   add_num_ext[l].mroll=' ';
							   add_num_ext[l].subt[0]=' ';
							   add_num_ext[l].sbmrk[0]=' ';

							      j=1;

							     continue;
								  }


								  }
							    if(er==0)
								 break;


							   fprintf(tt,"%s\n",add_num_ext[l].mdept);
							   fprintf(tt,"%d\n",add_num_ext[l].mroll);
							   fprintf(tt,"%s\n",add_num_ext[l].subt);
							   fprintf(tt,"%s\n",add_num_ext[l].sbmrk);

						      }




					if(j==0)
					{
					gotoxy(25,22);
					printf("Error in your inforation.");
					}

					gotoxy(25,23);
					printf("Any more(y/n)");


	       }while((getche())!=110);


			 fclose(ft);
			 fclose(tt);

		       if(j!=0)
			 {
			remove("d:\\datatest.txt");

			rename("d:\\temp2.txt","d:\\datatest.txt");
			  }

				return 0;

	   }



/****************************** Find free arry for final marks store *******************/



find_free(int u,char *l)
       {

	FILE *fn;

	fp=fopen("d:\\data.txt","r");

	rewind(fn);

	int i,k=0,a;



	for(i=0; i<MAX;i++)

		    {

	  fscanf(fn,"%s",&add_num[i].mdept);
	  fscanf(fn,"%d",&add_num[i].mroll);


	  fscanf(fn,"%s",&add_num[i].subt);
	  fscanf(fn,"%s",&add_num[i].sbmrk);
	  fscanf(fn,"%d",&add_num[i].credit);

	  fscanf(fn,"%s",&add_num[i].clstmk);
	  fscanf(fn,"%s",&add_num[i].clspt);


	  a=strcmp(add_num[i].mdept,l);



	if(a==0 && u==add_num[i].mroll)

	  ++k;

		      }

       fclose(fp);

       return k;

     }



/*********************************** Student information function ***************/

std_info()

      {

       while(1)

	     {

	      clrscr();


	      gotoxy(15,3);
	      printf("Enter your choice.");

	      gotoxy(25,5);
	      printf("1.Add student information.");

	      gotoxy(25,7);
	      printf("2.View student information.");

	      gotoxy(25,9);
	      printf("3.Edit student information.");

	      gotoxy(25,11);
	      printf("4.Return.");

	       switch(getche())
				  {
				  case'1':
					  add_inf();
					  break;

				  case'2':
					  viwe_inf();
					  break;

				  case'3':
					  edit_inf();
					  break;

				  case'4':
					  return 0;
				     }
		}


	 }


/**************************** Add new student information ****************************/


add_inf()
       {

	 int i=0;
	 char c;
	 FILE *fp;
	 rewind(fp);

	 fp=fopen("d:\\info.txt","a+");

	 printf("\nEnter information .\n");



	do
	    {
	       clrscr();

		gotoxy(25,3);
		printf("Enter deptment name ");
		scanf("%s",&base[i].dept);
		fprintf(fp,"%s\n",base[i].dept);

		gotoxy(25,5);
		printf("Enter student name.");
		scanf("%s",&base[i].name);
		fprintf(fp,"%s\n",base[i].name);

		gotoxy(25,7);
		printf("Enter roll no.");
		scanf("%s",&base[i].roll) ;
		fprintf(fp,"%s\n",base[i].roll) ;

		gotoxy(25,9);
		printf("Enter resistation no.");
		scanf("%s",&base[i].resist);
		fprintf(fp,"%s\n",base[i].resist);

		gotoxy(25,11);
		printf("Enter semester no.");
		scanf("%s",&base[i].semester);
		fprintf(fp,"%s\n",base[i].semester);

		gotoxy(25,13);
		printf("Enter session no.");
		scanf("%s",&base[i].session);
		fprintf(fp,"%s\n",base[i].session);

		 ++i;

		gotoxy(25,22);
		printf("Any more information(y/n)?");

		c=getche();

	     }while(c!=110);

		fclose(fp);

		return 0;

    }



/************************************ Viwe student information  menu ****************************/
 viwe_inf(void)

      {

       char *c;
       int i,s,t,h,se,r;
       FILE *fp;


       fp=fopen("d:\\info.txt","a+");

       rewind(fp);

   do
     {

     clrscr();

	load_info();

	i=0;

	gotoxy(25,3);
	printf("Enter student Dept name.");
	scanf("%s",c);

	gotoxy(25,5);

	printf("Enter student Roll number.");
	scanf("%d",&t);

	gotoxy(25,7);

	printf("Enter student semester.");
	scanf("%d",&se);



	for(int j=0;j<=MAX;++j)
				{

				s = atoi(base[j].roll);
				h=strcmp(base[j].dept,c);

				r=atoi(base[j].semester);


				if(s==t && h==0 && se==r)          /* Find correct id number */
						{

						  clrscr();

						  gotoxy(25,3);

						  printf("Departmant: %s",base[j].dept);

						  gotoxy(25,5);

						  printf("Name: %s",base[j].name);
						  gotoxy(25,7);

						  printf("Roll no.: %s",base[j].roll);
						  gotoxy(25,9);

						  printf("Resistation no.: %s",base[j].resist);
						  gotoxy(25,11);

						  printf("Semester: %s\n",base[j].semester);
						  gotoxy(25,13);

						  printf("Session:%s",base[j].session);



						 i++;

						 }

				}

					if(i==0)
					  {
					  gotoxy(25,22);

					  printf("Mismatch your information.");
                                           }

					gotoxy(25,23);

					printf("Any more(y/n)?");

					}while((getche())!=110);

			  fclose(fp);
	  return 0;
	  }

/*********************************** Delete student information menu **************************/
 delete_inf(void)
	   {
	     char *c,info,temp;
	     int i,t,s,se,r;
	     FILE *fp,*tp;

	  fp=fopen("d:\\info.txt","a+");

	  rewind(fp);
	  tp=fopen("d:\\temp.txt","w");


    do
      {
       clrscr();

	i=0;
	load_info();


	gotoxy(25,3);
	printf("Enter student Dept name.");
	scanf("%s",c);

	gotoxy(25,5);

	printf("Enter student Roll number.");
	scanf("%d",&t);

	gotoxy(25,7);

	printf("Enter student semester.");
	scanf("%d",&se);


	
	for(int j=0;j<=MAX;++j)
				{

				 s = atoi(base[j].roll);
				 r=atoi(base[j].semester);

		if(t==s && (strcmp(base[j].dept,c))==0 && se== r)          /* Find correct id number */

						{

						clrscr();

						  gotoxy(25,3);

						  printf("Departmant: %s",base[j].dept);

						  gotoxy(25,5);

						  printf("Name: %s",base[j].name);
						  gotoxy(25,7);

						  printf("Roll no.: %s",base[j].roll);
						  gotoxy(25,9);

						  printf("Resistation no.: %s",base[j].resist);
						  gotoxy(25,11);

						  printf("Semester: %s\n",base[j].semester);
						  gotoxy(25,13);

						  printf("Session:%s",base[j].session);

                                                  

						  i++;

                                                  gotoxy(25,22);
						  printf("Do you delete this list(y/n)");

					      if((getche())!=110)
							   {

							   base[j].dept[0]=' ' ;
							   base[j].name[0]= ' ';
							   base[j].roll[0]=' ';
							   base[j].resist[0]=' ';
							   base[j].semester[0]=' ';
							   base[j].session[0]=' ';
							   continue;
							    }

						 }

				  fprintf(tp,"%s\n",base[j].dept);
				  fprintf(tp,"%s\n",base[j].name);
				  fprintf(tp,"%s\n",base[j].roll);
				  fprintf(tp,"%s\n",base[j].resist);
				  fprintf(tp,"%s\n",base[j].semester);
				  fprintf(tp,"%s\n",base[j].session);




				}

					if(i==0)
					{
                                        gotoxy(25,23);
					printf("Error in your inforation.");
					 }

                                        gotoxy(25,23);
					printf("Any more(y/n)?");


	       }while((getche())!=110);


			  fclose(fp);
			  fclose(tp);

			     if(i!=0)
                             {
			     remove("d:\\info.txt");
                             
			     rename("d:\\temp.txt","d:\\info.txt");
                              }

				return 0;
	   }


/******************************* Controllar function **************************/


contrpllar()
	   {

	   while(1)
		{

		clrscr();

		 gotoxy(15,3);
		 printf("Enter your choice.");

		 gotoxy(25,5);
		 printf("1.Calculation.");

		 gotoxy(25,7);
		 printf("2.Final result.");

		 gotoxy(25,9);
		 printf("3.Return.");


		 switch(getche())

                    {
		     case '1':
			     calculation();
			     break;

		     case '2':
			      result_final();
			      break;

		     case '3':
			     return 0;
			 }
		      }
		   }



/************************************** Calculation the result *************************************/

calculation(){ 

	  {


	FILE *fn,*ft,*fre;
	clrscr();


	char *fd,d,*c,*str;
	int mr,w=0,p,q,m,r,y,a,b,cl,ca,mn,e,fr;
	float cgpa;
	double x;


	fre=fopen("d:\\result.txt","a+");

     do
     {

       clrscr();

	fn=fopen("d:\\datatest.txt","a+");
	ft=fopen("d:\\data.txt","r");

	rewind(ft);
	rewind(fn);

	w=0;




       gotoxy(25,3);
       printf("Enter dept name");
       scanf("%s",fd);

       gotoxy(25,5);
       printf("Enter roll no.");
       scanf("%d",&fr);

       gotoxy(25,7);
       printf("Enter course code.");
       scanf("%s",c);



	   for(int i=0;i<MAX;i++)
		    {

			 fscanf(ft,"%s",&add_num[i].mdept);
			 fscanf(ft,"%d",&add_num[i].mroll);

			 fscanf(ft,"%s",&add_num[i].subt);
			 fscanf(ft,"%s",&add_num[i].sbmrk);
			 fscanf(ft,"%s",&add_num[i].clstmk);
			 fscanf(ft,"%s",&add_num[i].clspt);
			 fscanf(ft,"%d",&add_num[i].credit);


			  m=add_num[i].mroll;

			 if((strcmp(add_num[i].mdept,fd))==0 && fr==m && (strcmp(add_num[i].subt,c))==0)

			 {

			  for(int g=0;g<MAX;++g)

			 {

			 fscanf(fn,"%s",&add_num_ext[g].mdept);
			 fscanf(fn,"%d",&add_num_ext[g].mroll);


			 fscanf(fn,"%s",&add_num_ext[g].subt);
			 fscanf(fn,"%s",&add_num_ext[g].sbmrk);

			 q=add_num_ext[g].mroll;

	   if((strcmp(add_num_ext[g].mdept,fd))==0 && q==fr && (strcmp(add_num_ext[g].subt,c))==0)

			   {

			   w=1;
			   mr=atoi(add_num[i].sbmrk);
			   r=atoi(add_num_ext[g].sbmrk);

			   a=mr-r;

		       if((a*a)<400)

			     {
			      clrscr();

			       mn=(mr+r)/2;

			       hh:

			       cl=atoi(add_num[i].clstmk);
			       ca=atoi(add_num[i].clspt);

			       x=(cl+ca+mn);

			 if(e<=70)
			       {
				x=(e+cl+ca);
				}

			    if(x<40)
				{

				printf("\n\nDepertment:%s.\nRoll no.:%d.\nCourse code:%s\n",add_num[i].mdept,fr,add_num[i].subt);

				printf("\nThe student result: Fail\n");

				b=9;


				       result[i].roll=add_num[i].mroll;


				       result[i].sbmrk=0;

				       result[i].int_mrk=mr;
				       result[i].ext_mrk=r;
				       result[i].clst=cl;
				       result[i].clsp=ca;
				       result[i].credit=add_num[i].credit;

				       strcpy(result[i].dept,add_num[i].mdept);

				       fprintf(fre,"%s\n",result[i].dept);

				       fprintf(fre,"%d\n",result[i].roll);

				       strcpy(result[i].subt,add_num[i].subt);

				       fprintf(fre,"%s\n",result[i].subt);

				       strcpy(result[i].grad,grade_latter[b]);

				       fprintf(fre,"%s\n",result[i].grad);

				       fprintf(fre,"%d\n",result[i].sbmrk);

				       fprintf(fre,"%d\n",result[i].int_mrk);

				       fprintf(fre,"%d\n",result[i].ext_mrk);

				       fprintf(fre,"%d\n",result[i].clst);

				       fprintf(fre,"%d\n",result[i].clsp);

				       fprintf(fre,"%d\n",result[i].thrmrk);

				       fprintf(fre,"%d\n",result[i].credit);

				       strcpy(result[i].gpa,gpa_point[b]);

				       fprintf(fre,"%s\n",result[i].gpa);


				       break;


				   }


			   if(x>=40 && x<45)
				{
				printf("\n\nDepertment:%s.\nRoll no.:%d.\nCourse code:%s\n",add_num[i].mdept,fr,add_num[i].subt);

				printf("\nIntranal teacher's mark:%s.\nExtranal teacher's mark:%s\n",add_num[i].sbmrk,add_num_ext[g].sbmrk);
				printf("\nClass test mark:%d\nClass attendence:%d\n", cl,ca);
				if(e<70)
				printf("\nThrid examinar:%d\n",e);

				printf("\nGrad latter D.\n");
				printf("\nGrad point 2.00.\n");
				cgpa=add_num[i].credit;
				printf("\nCredit %d.\n",add_num[i].credit);
				printf("\nTotal marks:%.2f.\n",x);
				printf("\nTotal Grad point %.2f.\n",(cgpa*2));
				b=8;
				    }

			   if(x>=45 && x<50)
				{

				printf("\n\nDepertment:%s.\nRoll no.:%d.\nCourse code:%s\n",add_num[i].mdept,fr,add_num[i].subt);
				printf("\nIntranal teacher's mark:%s.\nExtranal teacher's mark:%s\n",add_num[i].sbmrk,add_num_ext[g].sbmrk);
				printf("\nClass test mark:%d\nClass attendence:%d\n",cl,ca);
				if(e<70)
				printf("\nThrid examinar:%d\n",e);

				printf("\nGrad latter C.\n");
				printf("\nGrad point 2.25.\n");
				cgpa=add_num[i].credit;
				printf("\nCredit %d.\n",add_num[i].credit);
				printf("\nTotal marks:%.2f.\n",x);
				printf("\nTotal Grad point %.2f.\n",(cgpa*2.25));
				b=7;
				  }


			   if(x>=50 && x<55)
				 {
				printf("\nDepertment:%s.\nRoll no.:%d.\nCourse code:%s\n",add_num[i].mdept,fr,add_num[i].subt);
				printf("\nIntranal teacher's mark:%s.\nExtranal teacher's mark:%s\n",add_num[i].sbmrk,add_num_ext[g].sbmrk);
				printf("\nClass test mark:%d\nClass attendence:%d\n",cl,ca);
				if(e<70)
				printf("\nThrid examinar:%d\n",e);

				printf("\nGrad latter C+.\n");
				printf("\nGrad point 2.50.\n");
				cgpa=add_num[i].credit;
				printf("\nCredit %d.\n",add_num[i].credit);
				printf("\nTotal marks:%.2f.\n",x);
				printf("\nTotal Grad point %.2f.\n",(cgpa*2.50));
				b=6;
				   }

			   if(x>=55 && x<60)
				  {
				printf("\n\nDepertment:%s.\nRoll no.:%d.\nCourse code:%s\n",add_num[i].mdept,fr,add_num[i].subt);
				printf("\nIntranal teacher's mark:%s.\nExtranal teacher's mark:%s\n",add_num[i].sbmrk,add_num_ext[g].sbmrk);
				printf("\nClass test mark:%d\nClass attendence:%d\n",cl,ca);
				if(e<70)
				printf("\nThrid examinar:%d\n",e);

				printf("\nGrad latter B-.\n");
				printf("\nGrad point 2.75.\n");
				cgpa=add_num[i].credit;
				printf("\nCredit %d.\n",add_num[i].credit);
				printf("\nTotal marks:%.2f.\n",x);
				printf("\nTotal Grad point %.2f.\n",(cgpa*2.75));
				b=5;
				    }

			   if(x>=60 && x<65)
				  {
				printf("\n\nDepertment:%s.\nRoll no.:%d.\nCourse code:%s\n",add_num[i].mdept,fr,add_num[i].subt);
				printf("\nIntranal teacher's mark:%s.\nExtranal teacher's mark:%s\n",add_num[i].sbmrk,add_num_ext[g].sbmrk);
				printf("\nClass test mark:%d\nClass attendence:%d\n",cl,ca);
				if(e<70)
				printf("\nThrid examinar:%d\n",e);

				printf("\nGrad latter B.\n");
				printf("\nGrad point 3.00.\n");
				cgpa=add_num[i].credit;
				printf("\nCredit %d.\n",add_num[i].credit);
				printf("\nTotal marks:%.2f.\n",x);
				printf("\nTotal Grad point %.2f.\n",(cgpa*3.00));
				   b=4;
					}


			   if(x>=65 && x<70)
				    {
				printf("\n\nDepertment:%s.\nRoll no.:%d.\nCourse code:%s\n",add_num[i].mdept,fr,add_num[i].subt);
				printf("\nIntranal teacher's mark:%s.\nExtranal teacher's mark:%s\n",add_num[i].sbmrk,add_num_ext[g].sbmrk);
				printf("\nClass test mark:%d\nClass attendence:%d\n",cl,ca);
				if(e<70)
				printf("\nThrid examinar:%d\n",e);

				printf("\nGrad latter B+.\n");
				printf("\nGrad point 3.25.\n");
				cgpa=add_num[i].credit;
				printf("\nCredit %d.\n",add_num[i].credit);
				printf("\nTotal marks:%.2f.\n",x);
				printf("\nTotal Grad point %.2f.\n",(cgpa*3.25));
				b=3;
				     }

			   if(x>=70 && x<75)
				       {
				printf("\n\nDepertment:%s.\nRoll no.:%d.\nCourse code:%s\n",add_num[i].mdept,fr,add_num[i].subt);
				printf("\nIntranal teacher's mark:%s.\nExtranal teacher's mark:%s\n",add_num[i].sbmrk,add_num_ext[g].sbmrk);
				printf("\nClass test mark:%d\nClass attendence:%d\n",cl,ca);
				if(e<70)
				printf("\nThrid examinar:%d\n",e);

				printf("\nGrad latter A-.\n");
				printf("\nGrad point 3.50.\n");
				cgpa=add_num[i].credit;
				printf("\nCredit %d.\n",add_num[i].credit);
				printf("\nTotal marks:%.2f.\n",x);
				printf("\nTotal Grad point %.2f.\n",(cgpa*3.50));
				b=2;
					}

			   if(x>=75 && x<80)
					{
				printf("\n\nDepertment:%s.\n\nRoll no.:%d.\n\nCourse code:%s\n",add_num[i].mdept,fr,add_num[i].subt);
				printf("\nIntranal teacher's mark:%s.\n\nExtranal teacher's mark:%s\n",add_num[i].sbmrk,add_num_ext[g].sbmrk);
				printf("\nClass test mark:%d\n\nClass attendence:%d\n",cl,ca);
				if(e<70)
				printf("\nThrid examinar:%d\n",e);

				printf("\nGrad latter A.\n");
				printf("\nGrad point 3.75.\n");
				cgpa=add_num[i].credit;
				printf("\nCredit %d.\n",add_num[i].credit);
				printf("\nTotal marks:%.2f.\n",x);
				printf("\nTotal Grad point %.2f.\n",(cgpa*3.75));
				b=1;
					 }

			   if(x>=80 && x<100)
					    {
				printf("\n\nDepertment:%s.\n\nRoll no.:%d.\n\nCourse code:%s\n",add_num[i].mdept,fr,add_num[i].subt);
				printf("\nIntranal teacher's mark:%s.\n\nExtranal teacher's mark:%s\n",add_num[i].sbmrk,add_num_ext[g].sbmrk);
				printf("\nClass test mark:%d\n\nClass attendence:%d\n",cl,ca);
				if(e<70)
				printf("\nThrid examinar:%d\n",e);

				printf("\nGrad latter A+.\n");
				printf("\nGrad point 4.00.\n");
				cgpa=add_num[i].credit;
				printf("\nCredit %d.\n",add_num[i].credit);
				printf("\nTotal marks:%.2f.\n",x);
				printf("\nTotal Grad point %.2f.\n",(cgpa*4));
				b=0;
					    }



				       strcpy(result[i].dept,add_num[i].mdept);
				       fprintf(fre,"%s\n",result[i].dept);

				       result[i].roll=add_num[i].mroll;
				       fprintf(fre,"%d\n",result[i].roll);

				       strcpy(result[i].subt,add_num[i].subt);
				       fprintf(fre,"%s\n",result[i].subt);

				      strcpy(result[i].grad,grade_latter[b]);
				      fprintf(fre,"%s\n",result[i].grad);

				       result[i].sbmrk=x;
				       fprintf(fre,"%d\n",result[i].sbmrk);

				      result[i].int_mrk=mr;
				       fprintf(fre,"%d\n",result[i].int_mrk);

				       result[i].ext_mrk=r;
				       fprintf(fre,"%d\n",result[i].ext_mrk);

					result[i].clst=cl;
					fprintf(fre,"%d\n",result[i].clst);

				       result[i].clsp=ca;
				       fprintf(fre,"%d\n",result[i].clsp);

				       fprintf(fre,"%d\n",result[i].thrmrk);

					result[i].credit=add_num[i].credit;
					fprintf(fre,"%d\n",result[i].credit);

					strcpy(result[i].gpa,gpa_point[b]);
					fprintf(fre,"%s\n",result[i].gpa);


				       break;

				}


				if((a*a)>=400)
					 {

				      kk:
				      gotoxy(25,9);
				      printf("Enter Thrid examinar mark.");
				      scanf("%d",&e);

				if(e<=70)
				      {
				      result[i].thrmrk=e;
				      goto hh;
				      }

				if(e>70)
				      {
				      gotoxy(25,18);
				      printf("You cannat add more than 70 mark.\n Try again.");
				      goto kk;

				      }

				      }

				     }


				     }


				    }

				    }

	 if(w==0)
	     {
	     gotoxy(25,21);
	     printf("The student donot found");
	      }

	     fclose(fn);
	     fclose(ft);

	     gotoxy(25,23);
	     printf("Do you continue(y/n)?");

	     d=getche();

	 }while(d!=110);

       return 0;
       }

     }

/***************************************** Final result view function **********************************/


result_final()

     {

		FILE *fn,*ft,*fre;
	clrscr();


	char *fd,d,*c,*str;
	int mr,m,fr,ca,cred=0,sig,credit=0,f=1;
	float w=0,cgpa,gpa=0,gpa_credit=0,togpa=0;
	double x;



    do
     {
       clrscr();
	fre=fopen("d:\\result.txt","a+");

	rewind(fre);

	w=0;

	  gotoxy(25,3);
	  printf("Enter dept name. ");
	  scanf("%s",fd);
	  gotoxy(25,6);
	  printf("Enter roll no.");
	  //textcolor(15);
	  scanf("%d",&fr);

	   clrscr();

	   for(int i=0;i<MAX;i++)

			     {

				       fscanf(fre,"%s",&result[i].dept);

				       fscanf(fre,"%d",&result[i].roll);

				       fscanf(fre,"%s",&result[i].subt);

				       fscanf(fre,"%s",&result[i].grad);

				       fscanf(fre,"%d",&result[i].sbmrk);

				       fscanf(fre,"%d",&result[i].int_mrk);

				       fscanf(fre,"%d",&result[i].ext_mrk);

				       fscanf(fre,"%d",&result[i].clst);

				       fscanf(fre,"%d",&result[i].clsp);

				       fscanf(fre,"%d",&result[i].thrmrk);

				       fscanf(fre,"%d",&result[i].credit);

				       fscanf(fre,"%s",&result[i].gpa);


      gotoxy(3,3);
      printf("Depertment:%s",fd);

      gotoxy(20,3);
      printf("Roll no.:%d",fr);

      gotoxy(3,5);
      printf("Course:");


      gotoxy(12,5);
      printf("Marks %:");

      gotoxy(22,5);
      printf("Credit:");

      gotoxy(32,5);
      printf("GPA:");

      gotoxy(41,5);
      printf("Credit*Gpa");


      gotoxy(54,5);
      printf("Grade:");

      gotoxy(63,5);
      printf("CGPA.");

		     m=result[i].roll;

		   if(m==0)
			break;

	     if((strcmp(result[i].dept,fd))==0 && fr==m)

		    {
		    ca=1;

		     //textcolor(6);

		    // printf("\n\nDept:%s\t",result[i].dept);

		    // printf("Roll:%d\t",result[i].roll);

		     gotoxy(3,6+i);
		     printf("%s",result[i].subt);


		    // printf("\n\nInt_mrk:%d",result[i].int_mrk);


		     //printf("\tExt_mrk:%d  ",result[i].ext_mrk);

		    // printf("\tThrid:%d",result[i].thrmrk);

		    // printf("\n\nClass test:%d ",result[i].clst);

		    // printf("\tClass attendence:%d\n",result[i].clsp);

		     gotoxy(12,6+i);
		     printf("%d",result[i].sbmrk);

		     gotoxy(32,6+i);
		     printf("%s",result[i].gpa);

		     gotoxy(22,6+i);
		     printf("%d",result[i].credit);

		     gotoxy(54,6+i);
		     printf("%s",result[i].grad);

		     credit=result[i].credit;

		     gpa=atof(result[i].gpa);

		     cred=cred+credit;

		     sig=result[i].sbmrk;
		     if(sig<40)
		      f=0;

		     w=(gpa*credit);

		     gotoxy(41,6+i);
		     printf("%.2f",w);

		     togpa=(togpa+w);

		     gpa_credit= togpa/cred;


		     }



	       }

	       gotoxy(63,7);
	       printf("%.2f",gpa_credit);

	       gotoxy(20,19);
	       printf("Credit obtained %d",cred);
	       gotoxy(20,20);
	       printf("GPA obtained %.2f.",togpa);

	      if(f==0)
	      {
	      gotoxy(20,22);
	      printf("The student fail. Grade F.");

		}

	      if(f==1)
	      {

	       if(gpa_credit==4)

		  {
		   gotoxy(20,22);
		   printf("The student obtained Grade A+.");

		   }

	       if(gpa_credit<4.00 && gpa_credit>=3.75)

		  {
		   gotoxy(20,22);
		   printf("The student obtained Grade A.");

		   }

		if(gpa_credit<3.75 && gpa_credit>=3.50)

		  {
		   gotoxy(20,22);
		   printf("The student obtained Grade A-.");

		   }

		if(gpa_credit<3.50 && gpa_credit>=3.25)

		  {
		   gotoxy(20,22);
		   printf("The student obtained Grade B+.");

		   }

		if(gpa_credit<3.25 && gpa_credit>=3.00)

		  {
		   gotoxy(20,22);
		   printf("The student obtained Grade B.");

		   }

	       if(gpa_credit<3.00 && gpa_credit>=2.75)

		  {
		   gotoxy(20,22);
		   printf("The student obtained Grade B-.");

		   }


	       if(gpa_credit<2.75 && gpa_credit>=2.50)

		  {
		   gotoxy(20,22);
		   printf("The student obtained Grade C+.");

		   }

	       if(gpa_credit<2.50 && gpa_credit>=2.25)

		  {
		   gotoxy(20,22);
		   printf("The student obtained Grade C.");

		   }

	      if(gpa_credit==2.00 && gpa_credit<2.25)

		  {
		   gotoxy(20,22);
		   printf("The student obtained Grade D.");

		   }

		}

	    if(ca==0)
	    {
	    gotoxy(20,23);
	    printf(" The student not found.");
	    }

	    gotoxy(20,24);
	    printf("Do you contiue(Y/N)?");

	  } while((getche())!=110);

	 return 0;
	  }







/*************************** Edit student information function **********************/


edit_inf()

	{

             char *c,info,temp;
	     int i,t,s,se,r;
	     FILE *fp,*tp;

	   fp=fopen("d:\\info.txt","a+");

	   rewind(fp);
	   tp=fopen("d:\\temp.txt","w");


    do
      {

        clrscr();

	i=0;
	load_info();


	gotoxy(25,3);
	printf("Enter student Dept name.");
	scanf("%s",c);

	gotoxy(25,5);

	printf("Enter student Roll number.");
	scanf("%d",&t);

	gotoxy(25,7);

	printf("Enter student semester.");
	scanf("%d",&se);

       	      for(int j=0;j<=MAX;++j)
				{
				 s = atoi(base[j].roll);
				 r=atoi(base[j].semester);

	          if(t==s && (strcmp(base[j].dept,c))==0 && se== r)          /* Find correct id number */
						{
						  clrscr();

						  gotoxy(25,3);
						  printf("Departmant: %s",base[j].dept);
						  gotoxy(25,5);
						  printf("Name: %s",base[j].name);
						  gotoxy(25,7);
						  printf("Roll no.: %s",base[j].roll);
						  gotoxy(25,9);
						  printf("Resistation no.: %s",base[j].resist);
						  gotoxy(25,11);
						  printf("Semester: %s",base[j].semester);
						  gotoxy(25,13);
						  printf("Session:%s",base[j].session);


						 i++;

						  gotoxy(25,15);
		                                  printf("Do you edit this list(y/n)");

					  if((getche())!=110)
							   {
                                                             clrscr();

								gotoxy(25,3);
								printf("\Enter deptment name ");
								scanf("%s",&base[i].dept);
								fprintf(fp,"%s\n",base[i].dept);

								gotoxy(25,5);
								printf("Enter student name.");
								scanf("%s",&base[i].name);
								fprintf(fp,"%s\n",base[i].name);

								gotoxy(25,7);
								printf("Enter roll no.");
								scanf("%s",&base[i].roll) ;
								fprintf(fp,"%s\n",base[i].roll) ;

								gotoxy(25,9);
								printf("Enter resistation no.");
								scanf("%s",&base[i].resist);
								fprintf(fp,"%s\n",base[i].resist);

								gotoxy(25,11);
								printf("Enter semester no.");
								scanf("%s",&base[i].semester);
								fprintf(fp,"%s\n",base[i].semester);

								gotoxy(25,13);
								printf("Enter session no.");
								scanf("%s",&base[i].session);
								fprintf(fp,"%s\n",base[i].session);
														   continue;
							    }

						 }

				  fprintf(tp,"%s\n",base[j].dept);
				  fprintf(tp,"%s\n",base[j].name);
				  fprintf(tp,"%s\n",base[j].roll);
				  fprintf(tp,"%s\n",base[j].resist);
				  fprintf(tp,"%s\n",base[j].semester);
				  fprintf(tp,"%s\n",base[j].session);


					}

					if(i==0)
					{
					gotoxy(25,22);
					printf("Error in your inforation.");
					 }

				        gotoxy(25,23);
					printf("Any more(y/n)?");


	       }while((getche())!=110);


			  fclose(fp);
			  fclose(tp);

			     if(i!=0)
			     {
			     remove("d:\\info.txt");
			     rename("d:\\temp.txt","d:\\info.txt");
			      }

				return 0;
	   }


/**************************************Student information load from file ******************************************/

load_info(void)
	      {

	 FILE *fp,*fn,*ft;

	 fp=fopen("d:\\info.txt","a+");


	 rewind(fp);

		 
                                             /* Load information from file */
	      for(int i=0;i<=MAX;++i)
				 {
					 fscanf(fp,"%s",&base[i].dept);
					 fscanf(fp,"%s",&base[i].name);
					 fscanf(fp,"%s",&base[i].roll);
					 fscanf(fp,"%s",&base[i].resist);
					 fscanf(fp,"%s",&base[i].semester);
					 fscanf(fp,"%s",&base[i].session);



				  }


		 

	 fclose(fp);

	 return 0;

       }

