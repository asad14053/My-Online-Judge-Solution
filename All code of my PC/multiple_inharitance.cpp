#include <iostream>
using namespace std;
class CPol
{
public:
    int w, h;
    void set (int a, int b)
    {
        w=a;
        h=b;
    }
};
class COut
{
public:
    void out (int i);
};
void COut::out(int i)
{
    cout << i << endl;
}
class CRect:
public CPol, public COut
{
public:
    int a()
    {
        return(w* h);
    }
};
class CTri:
public CPol, public COut
{
public:
    int a()
    {
        return(w*h/ 2);
    }
};
int main ()
{
    CRect rect;
    CTri trgl;
    rect.set (4,5);
    trgl.set  (4,5);
    rect.out (rect.a());
    trgl.out (trgl.a());
    return 0;
}
