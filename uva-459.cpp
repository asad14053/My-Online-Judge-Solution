#include<bits/stdc++.h>
using namespace std;
int graph[26];
int kount;
int find(int i)
{
    if(graph[i] == i)
        return i;
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
    cin>>kases;
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

        for(int i=0;i<kount;i++)
        {
            graph[i] = i;
        }
        getchar();
        while(true)
        {
            getline(cin,str);
            if(str=="") break;
            c1 = str[0];
            c2 = str[1];
            join(c1 - 'A', c2 - 'A');
        }
        cout<<kount<<endl;
    }


    return 0;
}
