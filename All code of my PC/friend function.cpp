#include <iostream>
using namespace std;
class C
{
    int w, h;
public:
    void s (int, int);
    int a ()
    {
        return(w * h);
    }
    friend C duplicate (C);
};
void C::s (int a, int b)
{
    w = a;
    h = b;
}
C duplicate (C rect)
{
    C rectres;
    rectres.w = rect .w*2;
    rectres.h = rect .h*2;
    return(rectres);
}
int main ()
{
    C  rect, rectb;
    rect.s (2,3);
    rectb = duplicate (rect);
    cout << rectb.a ();
    return 0;
}
