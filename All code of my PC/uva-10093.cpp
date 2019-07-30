#include <bits/stdc++.h>
using namespace std;
int main()
{
    string str;
    while(getline(cin,str))
    {
        int sum=0;
        int Max=1;
        for(int i=0; i<str.size(); i++)
        {
            int R=0;
            if(isdigit(str[i])) R=str[i]-48;
            else if(isupper(str[i])) R=str[i]-55;
            else if(islower(str[i])) R=str[i]-61;
            sum+=R;
            if(R>Max) Max=R;
        }
        for(int i=Max; i<=62; i++)
        {
            if(sum%i==0)
            {
                cout<<i+1<<endl;
                break;
            }
            else if(i==62) cout<<"such number is impossible!"<<endl;
        }
    }
    return 0;
}
