#include<iostream>
#include<cstdio>
#include<cmath>
#include<cstdlib>
#include<cstring>
#include<algorithm>



#include<string>
#include<vector>
#include<map>
#include<queue>
#include<stack>


#define loop(i, n) for(int i=0; i<n; i++)
#define loopfrom1(i, n) for(int i=1; i<n; i++)
#define mem(array, value) memset(array, value, sizeof(array))
#define MIN(a, b) (a<b?a:b)
#define MAX(a, b) (a>b?a:b)
#define pb(a) push_back(a)
#define SZ size()
#define getint(n) scanf("%d", &n)
#define pi acos(-1.0)
#define inf 536870912         // 1<<29
#define debug cout<<"ok"<<endl
#define ll long long int
#define mod(a) (a>0?a:-a)
#define Read(filename) freopen(filename, "r", stdin)


using namespace std;


int graph[26];
int kount;

int find(int i)
{
    if(graph[i] == i)
    {
        return i;
    }
    return graph[i] = find(graph[i]);
}



void join(int i, int j)
{
    int u = find(i);
    int v = find(j);
    if(u != v)
    {
        graph[u] = v;
        kount--;
    }
}


int main()
{
    int kases;
    bool blank = false;
    char top;
    string str;
    char c1, c2;
    int N;


    getint(kases);

    while(kases--)
    {
        if(blank)
        {
            printf("\n");
        }
        blank = true;


        cin>>top;
        N = top - 'A';
        kount = N + 1;

        loop(i, kount)
        {
            graph[i] = i;
        }

        cin.ignore();

        while(true)
        {
            getline(cin, str);
            if(str=="") break;
            c1 = str[0];
            c2 = str[1];
            join(c1 - 'A', c2 - 'A');
        }

        cout<<kount<<endl;





    }

    return 0;
}
