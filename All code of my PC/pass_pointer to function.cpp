#include<bits/stdc++.h>
using namespace std;

int salaryhike(int  *var, int hike)
{
      *var = *var+hike;
      return *var;
}
int main()
{
      int sal=5000;
      int hike=10000;
      int op = salaryhike (&sal, hike);
      printf("Final salary: %d", op);
 return 0;
}
