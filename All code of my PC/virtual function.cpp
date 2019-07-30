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
    virtual int a ()
    {
        return(0);
    }
};
class CRect : public CPol
{
public:
    int a ()
    {
        return(w * h);
    }
};
class CTri : public CPol
{
public:
    int a ()
    {
        return(w * h / 2);
    }
};
int main ()
{
    CRect rect;
    CTri trgl;
    CPol poly;
    CPol * ppoly1 = &rect;
    CPol * ppoly2 = &trgl;
    CPol * ppoly3 = &poly;
    ppoly1->set(4,5);
    ppoly2->set  (4,5);
    ppoly3->set  (4,5);
    cout << ppoly1->a () << endl;
    cout << ppoly2->a () << endl;
    cout << ppoly3->a () << endl;
    return 0;
}
