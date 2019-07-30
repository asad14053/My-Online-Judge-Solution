#include<bits/stdc++.h>
using namespace std;
void tower(int n,char a,char b,char c)
{
    if(n>=1)
    {
    tower(n-1,a,c,b);
   cout<<"move top disk from tower "<<a<<" to top of the tower "<<b<<endl;
    tower(n-1,c,a,b);
    }
}
int main()
{
    int t,n;
    char a,b,c;
    cin>>t;
    while(t--)
    {

        cin>>n;
        a='A',b='B',c='C';
        tower(n,a,b,c);
        cout<<"total steps :"<<pow(2,n)-1<<endl;
    }
    return 0;
}
