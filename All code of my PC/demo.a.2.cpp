
///    Md.ASADUZZAMAN
///    Dept of ICT
///    MBSTU
#include<bits/stdc++.h>
using namespace std;
#define ll                  long long
string prng(string s)
{
    ll l=s.size();
    string s1="",s2="ABCDEFGHIJKLMNOPQRSTUVWXYZ";
   for(int i=0;i<l;i++)
   {
    ll x=rand()%26;
    s1+=s2[x];
   }
    return s1;
}
int main()
{

    ll n, x, y, a, b, c, t, q;
    string s,s1,s2;

    while (cin >>s)
    {
        s2="";
        s1=prng(s);
       // bug(s1);
        cout<<"KEY :"<<s1<<endl;
        for(int i=0;i<s.size();i++)
        s2+=(char)((ll)s[i]^(ll)s1[i]);
        cout<<"ENCRYPTED MESSAGE :"<<s2<<endl;
        string s3="";
         for(int i=0;i<s2.size();i++)
        s3+=(char)((ll)s2[i]^(ll)s1[i]);
        cout<<"DECRYPTED MESSAGE :"<<s3<<endl;

    }
//    end = clock();
//    time_spent = (double)(end - begin) / CLOCKS_PER_SEC;
//   cout<<"Time spent = "<<time_spent<<endl;


    return 0;
}
