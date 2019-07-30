#include <iostream>
#include <string>
#include <sstream>
using namespace std;
struct mov
{
    string title;
    int year;
};
int main ()
{
    string mystr;
   // mov amovie;
    mov * pmovie;
   // pmovie = &amovie;
    cout << "Enter title: ";
    cin>>pmovie->title;
    cout << "Enter year: ";
    cin>> pmovie->year;
    cout << "\nYou have entered:\n";
    cout << pmovie->title;
    cout << " ("<< pmovie->year << ")\n";
    return 0;
}
