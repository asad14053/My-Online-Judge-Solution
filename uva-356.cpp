#include <bits/stdc++.h>
using namespace std;
#include <math.h>

int main()
{
	int n, p, i, k = 0;
	double t, r;
	while(scanf("%d",&n)==1)
	{
		if(k==1)
			printf("\n");
		p = 8*n-4;
		r = n - 0.5;
		t = 0;
		for(i=1;i<n;i++)
			t +=floor(sqrt(r*r-i*i)); //cout<<t<<endl;
		t *= 4;
		printf("In the case n = %d, %d cells contain segments of the circle.\n",n,p);
		printf("There are %.0lf cells completely contained in the circle.\n",t);
		k = 1;
	}
	return 0;
}
