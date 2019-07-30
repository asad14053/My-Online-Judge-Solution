Code:

//TO CALCULATE THE DETERMINANT OF MATRIX OF ANY ORDER USING RECURSION

#include<iostream.h>
#include<conio.h>
#include<math.h>
#include<process.h>

void main()
{
 int determinant(int[5][5],int);// FUNCTIONS
 void read(int[5][5],int);
 void print(int[5][5],int);     //           PROTOYPES
 int a[5][5],l,n;
 int result;
 l1:clrscr();
 cout<<"



	ENTER ORDER OF MATRIX(MAX. OF 4X4):";
 cin>>l>>n;
 if(l!=n)
  {                                               //TESTING CONDITION
	cout<<"


				SORRY!!!!!\n				ONLY SQUARE MATRIX";
	goto l1;
  }
 read(a,n);
 result = determinant(a,n);
 print(a,n);
 cout<<"


		THE DETERMINANT OF THE ABOVE MATRIX IS:"<<result;
 getch();
}


void read(int b[5][5],int m)     //FUNCTION FOR READING MATRIX
{
 cout<<"


	ENTER "<<m*m<<" ELEMENTS OF MATRIX(ROW-WISE):";
 for(int i=0;i<m;i++)
  for(int j=0;j<m;j++)
	cin>>b[i][j];
}


void print(int b[5][5],int m)
{
 clrscr();                           //FUNCTION FOR PRINTING MATRIX
 cout<<"



	MATRIX IS :-

		";
 for(int i=0;i<m;i++)
 {
  cout<<"
";
  for(int j=0;j<m;j++)
	cout<<"	"<<b[i][j];
 }
}

int determinant(int b[5][5],int m)   //FUNCTION TO CALCULATE
DETERMINANT
{
 int i,j,sum = 0,c[5][5];
 if(m==2)
  {                                        //BASE CONDITION
	sum = b[0][0]*b[1][1] - b[0][1]*b[1][0];
	return sum;
  }
 for(int p=0;p<m;p++)
 {
  int h = 0,k = 0;
  for(i=1;i<m;i++)
  {
	for( j=0;j<m;j++)
	{
	 if(j==p)
	  continue;
	 c[h][k] = b[i][j];
	 k++;
	 if(k == m-1)
	  {
		 h++;
		 k = 0;
	  }

	}
  }

  sum = sum + b[0][p]*pow(-1,p)*determinant(c,m-1);
 }
 return sum;
}





