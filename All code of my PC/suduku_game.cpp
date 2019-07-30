/* SU DOKU */

#include <iostream.h>
void main()
{
	int k[9][9],K[9][9];
	int i,j,i1,j1,i2,j2;
	int error,temp;
	int count=0;

	for(i=0;i<9;i++)
	for(j=0;j<9;j++)
		K[i][j]=0;

	for(i=0;i<9;i++)
	for(j=0;j<9;j++)
	{
		cin>>K[i][j];
		k[i][j]=K[i][j];
	}
	cout<<"O.K.? (Enter 0 if OK, 1 to update): ";
	cin>>error;
	if(error==0)
		goto matrixvalidation;

matrixupdation:
	while(1)
	{
		cout<<"Enter Row, Col, Revised number:(0 to exit) ";
		cin>>i;
		if(i==0)break;
		cin>>j>>temp;
		if(i>0&&j>0&&temp>=0&&i<10&&j<10&&temp<10)
		{
			K[i-1][j-1]=temp;
			k[i-1][j-1]=temp;
		}
		else
			cout<<"Enter row/column 1 to 9 & number 0 to 9 only.
";
	}

matrixvalidation:
	cout<<"
Input matrix:
";
	for(i=0;i<9;i++)
	{
		for(j=0;j<9;j++)
			cout<<k[i][j]<<" ";
		cout<<"
";
	}

	for(i=0;i<9;i++)
	for(j=0;j<9;j++)
		if(k[i][j]<0||k[i][j]>9)
		{
			cout<<"
"<<i+1<<" "<<j+1<<" "<<k[i][j];
			cout<<"
Input matrix error.";
			cout<<"
Numbers should be 1 to 9 only.

";
			goto matrixupdation;
		}

	for(i=0;i<9;i++)
	for(j=0;j<9;j++)
	{
		if(k[i][j]==0)continue;
		error=0;
		for(i1=0;i1<9;i1++)
			if(i!=i1&&k[i][j]==k[i1][j])
			{
				error=1;
				i2=i1;
				j2=j;
			}
		for(j1=0;j1<9;j1++)
			if(j!=j1&&k[i][j]==k[i][j1])
			{
				error=1;
				i2=i;
				j2=j1;
			}
		for(i1=0;i1<9;i1++)
		for(j1=0;j1<9;j1++)
			if((i!=i1||j!=j1)&&i/3==i1/3&&j/3==j1/3&&k[i][j]==k[i1][j1])
			{
				error=1;
				i2=i1;
				j2=j1;
			}
		if(error)
		{
			cout<<"
"<<i+1<<" "<<j+1<<" "<<k[i][j];
			cout<<"
"<<i2+1<<" "<<j2+1<<" "<<k[i2][j2];
			cout<<"
Input matrix error.";
			cout<<"
A number has been repeated in the same row, col or
block.

";
			goto matrixupdation;
		}
	}

/* Logic starts: */
	for(i=0;i<9;i++)
	for(j=0;j<9;j++)
	{
		if(K[i][j]>0) goto chksol;
		for(k[i][j]++;k[i][j]<=9;k[i][j]++)
		{
			error=0;
			for(i1=0;i1<9;i1++)
				if(i!=i1&&k[i][j]==k[i1][j])error=1;
			for(j1=0;j1<9;j1++)
				if(j!=j1&&k[i][j]==k[i][j1])error=1;
			for(i1=0;i1<9;i1++)
			for(j1=0;j1<9;j1++)
				if((i!=i1||j!=j1)&&i/3==i1/3&&j/3==j1/3&&k[i][j]==k[i1][j1])
					error=1;
			if(error==0)break;
		}
		if(k[i][j]>9)
		{
			k[i][j]=0;
			do
			{
				if(i==0&&j==0)goto nomoresol;
				if(j>0)j--;else{j=8;i--;}
			}while(K[i][j]>0);
			j--;
		}
chksol:	if(i==8&&j==8)
		{
			cout<<"
Solution: "<<++count<<"
";
			for(i1=0;i1<9;i1++)
			{
				for(j1=0;j1<9;j1++)
					cout<<k[i1][j1]<<" ";
				cout<<"
";
			}
			if(count==50)
			{
				cout<<"
Too many solutions.
Not checking for more
solutions.

";
				return;
			}

			while(K[i][j]>0)
			{
				if(i==0&&j==0)goto nomoresol;
				if(j>0)j--;else{j=8;i--;}
			}
			k[i][j]=0;
			do
			{
				if(i==0&&j==0)goto nomoresol;
				if(j>0)j--;else{j=8;i--;}
			}while(K[i][j]>0);
			j--;
		}
	}
nomoresol:
	if(count>0)
		cout<<"
No more solutions.

";
	else
		cout<<"No solution.

";
}



