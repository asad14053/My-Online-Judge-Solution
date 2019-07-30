#include<iostream>
#define max 50
using namespace std;
int main()
{
	int que[max],num1,num2,front=0,rear=0;
	cout<<"How many element insert in que: ";
	cin>>num1;
	cout<<" insert press 1 & delete for press 2";
	cin>>num2;
	switch(num2)
	{
	case 1:
		for(i=0;i<=num2;i++)
		{
			if(front==1&&rear==num2)
			{
				cout<<"over flow "<<endl;
			}
			if(front==rear+1)
			{
				cout<<"over flow "<<endl;
			}
			else
			{
				if(rear==num1)
				{
					rear=1;
					cin>>que[rear];
				}
				else
					
				{
					rear=rear+1;
				    cin>>que[rear];
				}
			}
		}
			}
		}

	}
	return 0;
}
