#include<string>
#include<vector>
#include<iostream>
using namespace std;
string s;
vector<int> a[30];
int main()
{
	cin >> s;
	for (int i = 1; i < s.size(); ++i)
	{
		if (s[i] == s[i - 1])
		{
			for(char c='a';c<='z';c++)
			{
				if (c != s[i] && c != s[i + 1])
				{
					s[i] = c;
					break;
				}
			}
			continue;
		}
	}
	cout << s;
	return 0;
}
