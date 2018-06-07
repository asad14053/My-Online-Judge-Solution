#include<bits/stdc++.h>
#define MX 100000000
using namespace std;
bool Check(int N,int pos){return (bool)(N & (1<<pos));}
int Set(int N,int pos){ return N | (1<<pos);}

int status[(MX/32)+2];
void sieve()
{
     int i, j, sqrtN,cnt=0;
     sqrtN = int( sqrt( MX ) );
     printf("2\n");
     cnt++;
     for( i = 3; i <= sqrtN; i += 2 )
        if(!(status[i>>5] & (1<<(i&31))))
        {
            if(!(cnt%100))  printf("%d\n",i);
            cnt++;
            for( j = i*i; j <= MX; j += (i<<1) )
                status[j>>5]= status[j>>5] | (1<<(j&31));
        }

     for(i=sqrtN+1;i<=MX;i+=2)
         if(!(status[i>>5] & (1<<(i&31))))
         {
             if(!(cnt%100))  printf("%d\n",i);
             cnt++;
         }
    return;
}
int main()
{
    sieve();
return 0;
}
