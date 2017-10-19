///    Md.ASADUZZAMAN
///    Dept of ICT
///    MBSTU
///
///
#include<bits/stdc++.h>
using namespace std;

int main()
{
//    fast();
    //  input();
    //  output();
    int mon[]= {31,28,31,30,31,30,31,31,30,31,30,31};
    int m,d;
    while(cin>>m>>d)
    {
        int c=1;
        int z=7-d+2;
        int j=0,i;
       // bug(mon[m-1]);
        for(i=z,j=1; i<=mon[m-1]; i++,j++)
        {
            int x;
            if(j%7==0)
            {
                c++;
            }
        }
       // bug(j);
        if((j-1)%7!=0)
            c++;
   cout<<c<<endl;
    }

    return 0;
}




