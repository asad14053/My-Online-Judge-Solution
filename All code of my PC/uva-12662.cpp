#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    while(cin>>n)
    {
       // getchar();
        string a[106];
        string c;
        int k=0;
        for(int i=1;i<=n;i++)
        {
            cin>>a[i];
           // cout<<a[i];
        }
       // cout<<" ======= "<<a<<endl;
        int m;
        cin>>m;
        while(m--)
        {
            int x;
            cin>>x;
            if(a[x]!="?")
                cout<<a[x]<<endl;
            else
            {
                int l=0,p=0,r=0;
                p=x-1;
                while(p>0 and a[p]=="?")
                    p--,l++;
                if(p<=0) l=0x3f3f3f;
                p=x+1;
                while(p<=n and a[p]=="?")
                    p++,r++;
                if(p>n) r=0x3f3f3f;
                l++,r++;
                if(l==r)
                cout<<"middle of "<<a[x-l]<<" and "<<a[x+r]<<endl;
                else if(l<r)
                {
                    for(int j=0;j<l;j++)
                        printf("right of ");
                        cout<<a[x-l]<<endl;
                }
                else
                {
                    for(int j=0;j<r;j++)
                        printf("left of ");
                        cout<<a[x+r]<<endl;
                }
            }
        }
    }

    return 0;
}


/*
10
A ? ? ? ? ? B ? ? ?
10
1
2
3
4
5
6
7
8
9
10

*/
