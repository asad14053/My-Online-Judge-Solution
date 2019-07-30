#include<bits/stdc++.h>
using namespace std;
int main()
{

    int n,a;
    while(cin>>n)
    {

        if(n==0) break;
        priority_queue<int>p;
        int s=0,k=0;
        for(int i=0; i<n; i++)
        {
            cin>>a;
            p.push(-a);
        }
        for(int i=0; i<n-1; i++)
        {
            int c=-p.top();
            p.pop();
            int d=-p.top();
            p.pop();
             k=c+d;
            s+=k;
            p.push(-k);


        }
        cout<<s<<endl;
    }
    return 0;
}
