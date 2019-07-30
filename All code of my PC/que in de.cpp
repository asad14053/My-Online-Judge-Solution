#inclde<stdio.h>
#define max 50

int main()
{
	int que[max],num1,num2,front=0,rear=0;
	printf"How many element insert in que: ");

	printf(""num1"");
	printf(" insert press 1 & delete for press 2");
	scanf("num2");
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
					scanf(""que[rear]");
				}
				else

				{
					rear=rear+1;
				    que[rear];
				}
			}
		}
			}
		}

	}
	return 0;
}
