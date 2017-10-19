 #include<bits/stdc++.h>
using namespace std;
char input [100];
map <string, bool> visited;
bool unique(int x, int l)
{
    if ( x >= l ) return false;

    char tmp [100];
    int len = 0;

    while ( x < l ) tmp [len++] = input [x++];

    tmp [len] = 0;
    char rev [100];

    strcpy (rev, tmp);
    reverse (rev, rev + len);

    if ( strcmp (rev, tmp) == 0 )
    {
        if ( visited [tmp] == true ) return false;
        visited [tmp] = true;
        return true;
    }

    return false;
}

int main ()
{
    while ( cin >> input )
    {
        visited.clear ();

        int len = strlen (input);
        int cnt = 0;

        for ( int i = 0; i < len; i++ )
        {
            for ( int j = 0; j < len; j++ )
            {
                if ( unique(i, len - j))
                    cnt++;
            }
        }
        printf ("The string '%s' contains %d palindromes.\n", input, cnt);
    }

    return 0;
}
