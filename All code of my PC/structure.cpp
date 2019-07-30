#include<bits/stdc++.h>
using namespace std;
struct t
{
    string title;
    int year;
} mine, yours;
void p (struct t);
int main ()
{
    string mystr;
    mine.title = "2001 A Space Odyssey";
    mine.year = 1968;
    cout << "Enter title: ";
    getline (cin,yours.title);
    cout << "Enter year: ";
    getline (cin,mystr);
    stringstream(mystr)>> yours.year;
    cout << "My favorite movie is:\n ";
    p (mine);
    cout << "And yours is:\n ";
    p (yours);
    return 0;
}
void p (struct t p)
{
    cout << p.title;
    cout << " ("<< p.year << ")\n";
}
