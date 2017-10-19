#include<bits/stdc++.h>
using namespace std;
int main()
{
    long long s=0;
    char a[20000];

    while(gets(a))
    {
        if(strcmp(a,"caw caw"))
          {
             // cout<<"a---::"<<a<<endl;
              for(int i=strlen(a)-1;i>=0;i--)
              if(a[i]=='*')
                s+=pow(2,strlen(a)-1-i);
          }
        else
       {
        cout<<s<<endl;
        s=0;

         memset(a,'\0',sizeof(a));
       }

    }

    return 0;
}

/*

--*
caw caw
*--
caw caw
caw caw
--*
--*
--*
caw caw
*--
*--
caw caw
--*
*--
caw caw

*/

