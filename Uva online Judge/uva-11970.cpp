#include<bits/stdc++.h>
using namespace std;
int main ()
{
    int t;
    scanf ("%d", &t);
    int c = 0;

    while ( t-- )
    {
        int n;
        cin>>n;
        int len = sqrt (1000000000);
        vector <int> output;
        for ( int i = 1; i <= len; i++ )
        {
            int x = n - (i * i);
            if ( x % i == 0 && x > 0 ) output.push_back (x);
        }
        sort (output.begin (), output.end ());
        printf ("Case %d:", ++c);
        for(int i = 0; i <output.size (); i++ ) printf (" %d", output [i]);
        cout<<endl;
    }
    return 0;
}
