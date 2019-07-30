#include<iostream>
#include<conio.h>
#define null 0
using namespace std;
struct node
{
	int info;
	node *left;
	node *right;
};
int main()
{
	struct node *list,*nptr,*tptr;
	list=null;
	int n=1,k;
	cout<<"Out from the loop 100"<<endl;
	while(n==1)
	{
		cout<<endl<<"Insertion pass 1";
		cin>>k;
		if(k==1)
		{
			nptr=new node;
			cin>>nptr->info;
			if(nptr->info==100)
			{
				break;
			}
			nptr->left=null;
			nptr->right=null;
			if(list==null)
			{
				list=nptr;
				tptr=nptr;
			}
			else
			{
				tptr->right=nptr;
				nptr->left=tptr;
				tptr=nptr;
			}

		}
		else
		{
			while(tptr->left!=null)
			{
				cout<<tptr->info<<",";
				tptr=tptr->left;
			}
            cout<<tptr->info<<",";
		}
	}
	getch();
	return 0;
}
