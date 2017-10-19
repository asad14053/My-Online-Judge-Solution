#include <bits/stdc++.h>
using namespace std;
char str[1100000];
char s[1100000];
int b[1100000];

void p(char *s)
{
    const int m = strlen(s);
    int i = 0, j = -1;

    b[i] = -1;
    while(i < m)
    {
        while(j >= 0 && s[i] != s[j])
            j = b[j];

		i++;
        j++;
        b[i] = j;
    }
}

int k(char *str, char *s)
{
    int i=0, j=0, c= 0;
    const int n = strlen(str);
    const int m = strlen(s);

	p(s);
    while (i<n)
    {
        while (j>=0 && str[i]!=s[j])
            j=b[j];

        i++;
        j++;

        if (j==m)
        {
            c++;
            j=b[j];
        }
    }
    return c;
}

int main()
{
	int t, i;
	cin>>t;
	getchar();
	for(i = 0; i <t; i++)
	{
		gets(str);
		gets(s);

		printf("Case %d: %d\n", i + 1, k(str, s));
	}

	return 0;
}
