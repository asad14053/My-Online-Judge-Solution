#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    while(cin>>n)
    {
        int a[n+2];
        for(int i=0; i<n; i++)
            cin>>a[i];
        int t=0;
        for (int i = 0; i < n; i++)
        {
            //int Swaps = 0;

            for (int j = 0; j < n - 1; j++)
            {
                if (a[j] > a[j + 1])
                {
                    swap(a[j], a[j + 1]);
                    //Swaps++;
                    t++;
                }
            }
        }
        cout<<"Array is sorted in "<<t<<" swaps."<<endl;

        cout<<"First Element: "<<a[0]<<endl;

        cout<<"Last Element: "<<a[n-1]<<endl;
    }
    return 0;
}
