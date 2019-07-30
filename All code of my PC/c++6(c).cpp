#include<bits/stdc++.h>
using namespace std;
class b
{
public:
    int i;
    void set_i(int x)
    {
        i=x;
    }
    int get_i()
    {
        return i;
    }
};
class d: public b
{
    public:
    int j;
     void set_j(int x)
     {
         j=x;
     }
     int mul()
     {
         return j*get_i();
     }
};
int main()
{
    d ob;
    ob.set_i(20);
    ob.set_j(30);
    cout<<ob.mul()<<endl;
    return 0;
}
