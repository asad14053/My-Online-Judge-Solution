 #include<bits/stdc++.h>
 using namespace std;
int main()
{
    string rom[6] = {"i","v","x","l","c"};
    char s;
    string mat;
    int n;
    while(cin>>(n))
    {
        if(n==0) break;
        int p=0;
        int f=0;
        mat="";
        map<string,int>mp;
        int a,he;
        for(int i=1,j=0; i<=n; i++,j++)
        {
            a=i;
            if(a>=90)
            {
                mp[rom[4]]++;
                if(a>=90 && a<100)
                    mp[rom[2]]++;
                if(a==99)
                    mp[rom[2]]++;
            }
            if(a>=40 && a<90)
            {

                mp[rom[3]]++;
                if(a>=40 && a<=49)
                {
                    mp[rom[2]]++;
                }

                if(a==49)
                    mp[rom[2]]++;
                if(a>=60)
                {
                    he=a-50;
                    mp[rom[2]]+=he/10;
                }

            }
            if(a>=59 && a<99)
            {
                if(a%10==9) mp[rom[2]]++;
            }
            if(a>=9 && a<40)
            {
                if(a%10==9) mp[rom[2]]++;
                mp[rom[2]]+=a/10;
            }

            if(a%10==1 || a%10==6 || a%10==9 || a%10==4)
                mp[rom[0]]++;
            if(a%10==2 || a%10==7)
                mp[rom[0]]+=2;
            if(a%10==3 || a%10==8)
                mp[rom[0]]+=3;
            if(a%10==4||a%10==5 || a%10==6 || a%10==7 || a%10==8)
                mp[rom[1]]++;

        }
        printf("%d: %d i, %d v, %d x, %d l, %d c\n",n,mp[rom[0]],mp[rom[1]],mp[rom[2]],mp[rom[3]],mp[rom[4]]);

    }

    return 0;
}

