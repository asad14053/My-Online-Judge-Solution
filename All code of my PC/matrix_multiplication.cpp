#include<iostream>
using namespace std;
#include<conio.h>

int main()
{

	int a[10][10], b[10][10],c[10][10];
	int x,y,i,j,m,n;


	cout<<"\nEnter the number of rows and columns for Matrix A:::\n\n";
	cin>>x>>y;
	cout<<"\n\nEnter elements for Matrix A :::\n\n";

	for(i=0;i<x;i++)
	{
		for(j=0;j<y;j++)
		{
			cin>>a[i][j];
		}
		cout<<"\n";
	}

	cout<<"\n-----------------------------------------------------------\n";

	cout<<"\nEnter the number of rows and columns for Matrix B:\n";
	cin>>m>>n;
	cout<<"\n\nEnter elements for Matrix B :\n";

	for(i=0;i<m;i++)
	{
		for(j=0;j<n;j++)
		{
			cin>>b[i][j];
		}
		cout<<"\n";
	}
	cout<<"Matrix A :\n";

	for(i=0;i<x;i++)
	{
		for(j=0;j<y;j++)
		{
			cout<<"\t"<<a[i][j];
		}
		cout<<"\n";
	}


	cout<<"Matrix B :\n\n";

	for(i=0;i<m;i++)
	{
		for(j=0;j<n;j++)
		{
			cout<<"\t"<<b[i][j];
		}
		cout<<"\n";
	}

	if(y==m)
	{

		for(i=0;i<x;i++)
		{
			for(j=0;j<n;j++)
			{
				c[i][j]=0;
				for(int k=0;k<m;k++)
				{
					c[i][j]=c[i][j]+a[i][k]*b[k][j];
				}
			}
		}

		cout<<"\n-----------------------------------------------------------\n";

		cout<<"\n\nMultiplication of Matrix A and Matrix B :\n\n";

		for(i=0;i<x;i++)
		{
			for(j=0;j<n;j++)
			{
				cout<<"\t"<<c[i][j];
			}
			cout<<"\n\n";
		}
	}
	else
	{
		cout<<"\n\nMultiplication is not possible";
	}


	return 0;
}

