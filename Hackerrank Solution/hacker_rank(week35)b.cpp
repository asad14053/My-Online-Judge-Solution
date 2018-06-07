
///    Md.ASADUZZAMAN
///    Dept of ICT
///    MBSTU
#include<bits/stdc++.h>
using namespace std;

#define ll                  long long
#define ull                 unsigned long long

#define fr(i,a,b)           for(int i=(a);i<(b);i++)


///----------------------Main Code-------------------------------------///


int main()
{
#ifndef ONLINE_JUDGE
   // input();
   // output();
#endif
//    fast();
//    clock_t begin, end;
//    double time_spent;
//    begin = clock();
    ll  x, y,b, c, t, q,m,k;
    string s;
    //char c;
    //cin>>t;

    while (cin >> x>>m>>k)
    {
         ll arr[x+1][x+1];
        fr(i,0,x)
        {
            fr(j,0,x)
            {
                if(!i and !j)
                    arr[i][j]=m;
                else if(i==j)
                    arr[i][j]=arr[i-1][j-1]+k;
                else if(i>j)
                     arr[i][j]=arr[i-1][j]-1;
                else  arr[i][j]=arr[i][j-1]-1;
            }
        }
        fr(i,0,x)
        {
            fr(j,0,x)
            {
                if(j)
                    cout<<" ";
                cout<<arr[i][j];
            }
            cout<<endl;
        }
        //bug(n);
    }
//    end = clock();
//    time_spent = (double)(end - begin) / CLOCKS_PER_SEC;
//   cout<<"Time spent = "<<time_spent<<endl;


    return 0;
}
