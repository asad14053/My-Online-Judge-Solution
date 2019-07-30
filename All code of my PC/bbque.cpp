#include<iostream>
#define max 50
using namespace std;
void main()
{
	int que[max],num1,num2,front=0,rear=0;
	int i,x,y=0,p=0;
	int re=0;
   int w=0;
	char m;
    cout<<"How many element insert in que: ";
    cin>>num1;
	   
	cout<<"Enter do the work pass Y & not for N:";
	cin>>m;
	
	while(m=='Y')
	{
     cout<<" insert press 1 & delete for press 2........"<<endl;
	 cout<<"agine insertion prass 3"<<endl;
     cin>>num2;
	switch(num2)
	{
	case 1:
		{
        
			
       		
		  for(i=1;i<=num1;i++)
		    {
				
			if((front==0))
			{
				rear=1;
				front=1;
                cin>>que[rear];
			}
				else
					
				{
					rear=rear+1;

                    cin>>que[rear];
					y=rear;
			     }
				    		
			}
			
		
		break;
	case 2:
		try
		{
		cout<<"How many element delete:";
		cin>>x;
		if(x>y||que[x]=='\0'||y==0)
		{
			cout<<"Under flow";
		}
		else
		{

			for(i=x;i<=num1;i++)
			{
				cout<<que[++i];
				
				
			}
          front=i+1;
		}
		}
		catch(...)
		{
			
		}
		break;

			
		
	case 3:
		
		{
		 if(front==0)
		 {
			cout<<endl<<"Over flow ";
		 }
		 else
		 {
			 cout<<" How many agine insertion ";
			 cin>>re;
			 if(re>front)
			 {
				 cout<<" over flow";

			 }
			 else
			 {
				 if(y==num1)
				 {
					
					 p=1;
				 }
				 for(i=p;i<=re;i++)
				 {
						
						 rear=i;
						 cin>>que[rear];
				 
				 }
			 }
		 }
		 
			 break;
	
	}
    cout<<"Enter agine the work pass y & not for N:";
	cin>>m;
		

	}
	

		{
     for(i=front;i<=re+rear;i++)
		{
			if(i==num1)
			{
				i=1;
				for(i=1;i<=re;i++)
				{
			    cout<<","<<que[i];
				}
				break;
			}
			else
			{
				cout<<que[i];
			}

		}
	 }
	

}


