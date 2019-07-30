#include<bits/stdc++.h>

typedef long long ll;
using namespace std;


int main()
{
  string s;
  cin >> s;
  if (s.find("BAC") != -1 || s.find("ACB") != -1 || s.find("ABC") != -1 || s.find("BCA") != -1 || s.find("CAB") != -1 || s.find("CBA") != -1)
    {
      cout << "Yes\n";
    }
  else cout << "No\n";



}
