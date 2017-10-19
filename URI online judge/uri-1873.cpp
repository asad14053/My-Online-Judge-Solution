#include<bits/stdc++.h>
using namespace std;
int main()
{
        int n;
        cin>>n;
        string a, b;

        for (int i = 0; i < n; i++)
        {
            cin>>a>>b;

            if(a==b) printf("empate\n");
            else if(a=="tesoura"&& b=="papel") printf("rajesh\n");
            else if(a=="papel" && b=="pedra") printf("rajesh\n");
            else if(a=="pedra" && b=="lagarto") printf("rajesh\n");
            else if(a=="lagarto" && b=="spock") printf("rajesh\n");
            else if(a=="spock" && b=="tesoura") printf("rajesh\n");
            else if(a=="tesoura" && b=="lagarto") printf("rajesh\n");
            else if(a=="lagarto" && b=="papel") printf("rajesh\n");
            else if(a=="papel" && b=="spock") printf("rajesh\n");
            else if(a=="spock" && b=="pedra") printf("rajesh\n");
            else if(a=="pedra"&& b=="tesoura") printf("rajesh\n");
            else printf("sheldon\n");
        }
    }

