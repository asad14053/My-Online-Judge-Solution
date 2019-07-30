#include  "testlib.h"
#include  <iostream>
using  namespace std ;
int main( int argc ,  char * argv [])
{
    registerGen ( argc , argv ,  1 );
   int n=15;
   // int n=1e4;
     freopen("in0.txt","a+w",stdout);
   //freopen("in0.txt","w",stdout);

    cout<<n<<endl;
    long long m=1e2;
    for(int i=0; i<n; i++ )
    {
        //cout << rnd.next(1,100)  <<" "<<rnd.next(2,10)<<endl ;
        //if(i%2)
       // cout << rnd.next("[a-c]{1000}") <<endl ;
        //else cout << rnd.next("[a-z]{100}") <<endl ;
       // cout << rnd.next("[0-1]{10,100}") <<endl;
        //cout << rnd.next(0,m)  <<endl ;
      //  cout << rnd.next(1LL,m)  <<endl ;
        if(i%2)
          cout << rnd.next(1LL*1,m)  <<endl ;
        //cout<<rnd.next ("one | two | three | Four")<<endl;
      //  
      else cout<<i+1<<endl;
    }
    //cout << rnd . next ( 1 , n )  << endl ;
}
