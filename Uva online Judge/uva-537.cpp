#include<bits/stdc++.h>
using namespace std;
bool isU,isP,isI;
double U,P,I;
string s;
void check(int i)
{
    // cout<<s[i]<<endl;
    double V;
    string temp;
    int j;
    for(j=i+2; !(isalpha(s[j])); j++)
        temp+=s[j];
    //  cout<<temp<<endl;
    stringstream ss(temp);
    ss>>V;
    if (s[j] == 'm') V *= 0.001;
    if (s[j] == 'k') V *= 1000;
    if (s[j] == 'M') V *= 1000000;
    if (s[i] == 'P')
    {
        isP = true;
        P = V;
        return;
    }
    else if (s[i] == 'U')
    {
        isU = true;
        U = V;
        return;
    }
    else if (s[i] == 'I')
    {
        isI = true;
        I = V;
        return;
    }
}
int main()
{
    int n;
    while(cin>>n)
    {
        // string s;
        getchar();
        for(int i=0; i<n; i++)
        {
            isP=isU=isI=false;
            printf("Problem #%d\n", i+1);
            getline(cin,s);
            int u=s.find_first_of("=");
            check(u-1);
            int v=s.find_last_of("=");
            check(v-1);
            if (!isP)
            {
                P = U * I;
                printf("P=%.2lfW\n\n", (double)P);
            }
            else if (!isU)
            {
                U = P / I;
                printf("U=%.2lfV\n\n", (double)U);
            }
            else if (!isI)
            {
                I = P / U;
                printf("I=%.2lfA\n\n", (double)I);
            }
        }
    }
    return 0;
}
