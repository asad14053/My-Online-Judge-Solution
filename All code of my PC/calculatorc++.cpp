#include<bits/stdc++.h>
using namespace std;
class calc
{
    int val1,val2;
public:
    void set_val1(int a);
    void set_val2(int b);
    int get_val1();
    int get_val2();
    int sum(int p, int q);
    int sub(int p, int q);
    int mul(int p,int q);
    int div(int p,int q);
};
void calc::set_val1(int a)
{
    val1=a;
}
int calc::get_val1()
{
    return val1;
}
void calc::set_val2(int b)
{
    val2=b;
}
int calc::get_val2()
{
    return val2;
}

  int calc::sum(int c,int d)
  {
      return c+d;
  }
  int calc::sub(int c,int d)
  {
      return c-d;
  }
  int calc::mul(int c,int d)
  {
      return c*d;
  }
  int calc::div(int c,int d)
  {
      return c/d;
  }


int main()
{
    int x,y,i,j,k;
    calc f;
    while(cin>>k)
    {
        cin>>x>>y;
        f.set_val1(x);
        f.set_val2(y);
        i=f.get_val1();
        j=f.get_val2();
        if(k==1)
            cout<<f.sum(i,j)<<endl;
        else if(k==2)
            cout<<f.sub(i,j)<<endl;
        else if(k==3)
            cout<<f.mul(i,j)<<endl;
        else if(k==4)
            cout<<f.div(i,j)<<endl;
    }
    return 0;
}
