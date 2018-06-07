#include<bits/stdc++.h>
using namespace std;
int main()
{

    string a[]= {"Happy", "birthday", "to", "you","Happy","birthday", "to", "you", "Happy", "birthday", "to", "Rujia", "Happy", "birthday", "to", "you"};
    int n;
    while(cin>>n)
    {
        string b[n];
        for(int i=0; i<n; i++)
        {
            cin>>b[i];
            // cout<<b[i]<<endl;
        }
        // cout<<b[0]<<endl;
        int x=n/16+1;
        int k=0;
        for(int i = 0 ; i <x ; i++ )
        {

            for(int j = 0 ; j < 16 ; j++)
            {
                cout<<b[ (k%n)  ]<<": "<<a[j]<<endl;
                k++;
            }


        }
    }
}

