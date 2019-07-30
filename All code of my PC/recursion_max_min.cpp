#include<bits/stdc++.h>
using namespace std;
int mx=INT_MIN;
int mn=INT_MAX;
void funct(int arr[],int len,int n)
{
	if(n==len)
		return;
	else
	{
		//printf("%d %d",max,min);
		mx=mx>arr[n]?mx:arr[n];
		mn=mn<arr[n]?mn:arr[n];
		funct(arr,len,n+1);
	}
}
int main( )
{
	int arr[100];
	int n;
	for(int i=0;i<n;i++)
        cin>>arr[i];
	funct(arr,n-1,0);
	printf("%d %d",mx,mn);
	return 0;
}

