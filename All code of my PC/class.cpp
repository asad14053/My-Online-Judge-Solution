#include <iostream>
using namespace std;
class rect
{
    int x, y;
public:
    void set (int,int);
    int area ()
    {
        return(x*y);
    }
};
void rect::set (int a, int b)
{
    x = a;
    y = b;
}
int main ()
{
    rect r;
    r.set (3,4);
    cout << "area: "<< r.area()<<endl;
    return 0;
}
