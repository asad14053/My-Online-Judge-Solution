#include<bits/stdc++.h>
using namespace std;
struct node
{
    int in;
    struct node*link;
}*start=NULL;
int main()
{
    int a;
    struct node *ptr,*New;
    New=(struct node*)malloc(sizeof(struct node));
    cin>>a;
    New->in=a;
     New->link=NULL;
      if(start==NULL)
        start=NEW;
        else
        {

        }
    return 0;
}
