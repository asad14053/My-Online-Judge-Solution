#include<bits/stdc++.h>
using namespace std;
string arr;
vector<char>result;
int c=0,taken[200]={0};
void call(string arr)
{
	if(result.size()==4)
	{
		for(int i=0;i<4;i++)
		printf("%c",result[i]);
        cout<<endl;
        c++;
		return;
	}
	for(int i=0;i<4;i++)
    {
        if(taken[i]==0)
        {
            cout<<i<<endl;
            taken[i]=1;
            result.push_back(arr[i]);
            call(arr);
            taken[i]=0;
            result.pop_back();

        }
    }
}
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
         c=0;
    cin>>arr;
    call(arr);
    cout<<c<<endl;
    }
}
