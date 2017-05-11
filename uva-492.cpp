  #include<bits/stdc++.h>
 using namespace std;
 int main()
 {
     char c,l;
     while(scanf("%c",&c)==1)
     {
         if(isalpha(c))
         {
             if(c=='a'||c=='A'||c=='e'||c=='E'||c=='i'||c=='I'||c=='o'||c=='O'||c=='u'||c=='U')
             {
                 while(isalpha(c))
                 {
                     putchar(c);
                     c=getchar();
                 }
                 printf("ay");
             }
             else
             {
                l=c;
                c=getchar();
                 while(isalpha(c))
                 {
                     putchar(c);
                     c=getchar();
                 }
                 printf("%cay",l);
             }
         }
         putchar(c);

     }
     return 0;
 }
