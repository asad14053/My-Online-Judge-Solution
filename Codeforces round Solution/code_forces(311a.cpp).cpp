 #include<bits/stdc++.h>
 using namespace std;
#define MAX 100005




int main()
{
    int n;
    cin>>n;
    int min11,min12,min21,min22,min31,min32;
    cin>>min11>>min12>>min21>>min22>>min31>>min32;
    int ans1=min11,ans2=min21,ans3=min31;

    n=n-(min11+min21+min31);
    if(n>0)
    {
        int r=min12-ans1;
        if(n>r)
        {
            ans1+=(r);
            n=n-r;
        }
        else

        {
            ans1+=n;
            n=0;
        }

    }

    if(n>0)
    {
        int r=min22-ans2;
        if(n>r)
        {
            ans2+=(r);
            n=n-r;
        }
        else

        {
            ans2+=n;
            n=0;
        }

    }

    if(n>0)
    {
        int r=min32-ans3;
        if(n>r)
        {
            ans3+=(r);
            n=n-r;
        }
        else

        {
            ans3+=n;
            n=0;
        }

    }
    cout<<ans1<<" "<<ans2<<" "<<ans3;








    return 0;
}
