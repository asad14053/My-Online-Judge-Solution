#include<bits/stdc++.h>
using namespace std;
int main()
{
    string a;
    int n=0,t;
    while(cin>>a)
    {
        if(a[0]=='0')
            break;
        int c=0;
        int l=a.size();
        if(a[0]=='1'&&a[l-1]=='2')
        {
            for(int i=1;i<l;i++)
            {
                if(a[i-1]=='1'&&(a[i]=='4'||a[i]=='5') )c=0;
                else if(a[i-1]=='4'&&(a[i]=='3'||a[i]=='2')) c=0;
                else if(a[i-1]=='5'&&a[i]=='8') c=0;
                else if(a[i-1]=='3'&&(a[i]=='4'||a[i]=='5')) c=0;
                else if(a[i-1]=='8'&&(a[i]=='6'||a[i]=='7')) c=0;
                else if(a[i-1]=='6'&&(a[i]=='3'||a[i]=='2')) c=0;
                else if(a[i-1]=='7'&&a[i]=='8') c=0;
                else
                {
                    c=1;
                    cout<<++n<<". NOT"<<endl;
                    break;
                }
            }
        }
        else
        {
            cout<<++n<<". NOT"<<endl;
            continue;
        }
        if(c==0)  cout<<++n<<". VALID"<<endl;
    }


    return 0;
}
