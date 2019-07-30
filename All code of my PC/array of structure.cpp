#include <iostream>
#include <string>
#include <sstream>
using namespace std;
#define N 3
struct mov
{
    string title;
    int year;
} films [N];
void p (mov movie);
int main ()
{
    string mystr;
    int n;
    for(n=0; n<N; n++)
    {
        cout << "Enter title: ";
        cin>>films[n].title;
        cout << "Enter year: ";
        cin>>films[n].year;
    }
    cout << "\nYou have entered these movies:\n";
    for(n=0; n<N; n++)
        p (films[n]);
    return 0;
}
void p (mov movie)
{
    cout << movie.title;
    cout << " ("<< movie.year << ")\n";
}
