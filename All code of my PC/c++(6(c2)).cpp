#include<bits/stdc++.h>
using namespace std;
class b
{
public:
   b()
    {
        cout<<"base"<<endl;
    }
};
class d:public b
{
    public:
 d()
    {
        cout<<"derived"<<endl;
    }
};
class e: public d
{
public:

   e()
   {
       cout<<"e"<<endl;
   }
};
int main()
{
    e ob;
   // ob.display();
    return 0;
}

