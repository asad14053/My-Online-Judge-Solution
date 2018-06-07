#include <bits/stdc++.h>
using namespace std;
#define ll                  long long
#define fr(i,a,b)           for(int i=(a);i<(b);i++)
#define rfr(i,a,b)          for(int i=(b-1);i>=(a);i--)
#define input()             freopen("in0.txt","r",stdin)
#define output()            freopen("out0.txt","w",stdout)
#define fast()              ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL);

template<typename T>inline  string toString(T a){ ostringstream os("");os<<a;return os.str();}

// Complete the averageOfTopEmployees function below.
void averageOfTopEmployees(vector<int> rating) {
    ll sm=0,c=0;
    fr(i,0,rating.size())
    {
        if(rating[i]>=90)
            sm+=rating[i],c++;
    }
    ll m=sm/c;
    double z=(sm/(double)c)-m;
  //  cout<<z<<endl;
    string s=toString(z);
   // vector<string>v;
  //   s="0.345";
     if(s.size()>=4)
    rfr(i,4,s.size())
    {
        if(s[i]>='5')
            s[i-1]+=(ll)1;
    }
   // cout<<s<<endl;
    if(z>0 and s.size()>=4)
   cout<<m<<"."<<s[2]<<s[3]<<endl;
    else if(z>0) cout<<m<<"."<<s[2]<<0<<endl;
    else  cout<<m<<".00"<<endl;

}

int main()
{
   input();
   output();
    int n;
    cin >> n;
    cin.ignore(numeric_limits<streamsize>::max(), '\n');

    vector<int> rating(n);

    for (int rating_itr = 0; rating_itr < n; rating_itr++) {
        int rating_item;
        cin >> rating_item;
        cin.ignore(numeric_limits<streamsize>::max(), '\n');

        rating[rating_itr] = rating_item;
    }

    averageOfTopEmployees(rating);

    return 0;
}
