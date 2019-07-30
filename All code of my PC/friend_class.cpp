#include <iostream>
using namespace std;
class CSq
{
private:
    int x;
    public:
    void set(int a)
    {
        x=a;
    }
    friend class CRect;
};
class CRect
{
    int w, h;
public:
    int a()
    {
        return(w * h);
    }
    void convert (CSq a);
};

void CRect::convert (CSq a)
{
    w = a.x;
    h  = a.x;
}
int main ()
{
    CSq sqr;
    CRect rect;
    sqr.set(4);
    rect.convert(sqr);
    cout << rect.a()<<endl;
    return 0;
}
