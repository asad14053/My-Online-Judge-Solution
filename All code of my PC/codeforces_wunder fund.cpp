#include<iostream>
#include<cstdlib>
#include<vector>
using namespace std;
int main()
{
	int n;
	cin>>n;
	vector<int>v;
	v.push_back(1);
	for(int i=2;i<=n;i++)
	{
		v.push_back(1);
		for(int i=v.size()-1;i>=0;i--)
		{
			if(v[i] == v[i-1])
			{
				v[i-1]+=1;
				v.pop_back();
			}
			else
			{
				break;
			}
		}
	}
	for(int i=0;i<v.size();i++)
	{
		cout<<v[i]<<" ";
	}
	cout<<endl;
	return 0;
}
