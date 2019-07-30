#include<bits/stdc++.h>
using namespace std;
struct node
{
    int value;
    struct node *next;

}*head=NULL;
int remove()
{
   struct node *ptr,*ptr1;
   int a;
   cin>>a;
   ptr1=head;
   if(ptr1->value==a)
   {
       head=ptr1->next;
   }
   else
   {
        while(ptr1->next!=NULL&&ptr1->value!=a) ptr1=ptr1->next;
         if(ptr1!=NULL)
            ptr1->next=(ptr1->next)->next;
        else
            printf("No such element exist\n");
   }
}
int search()
{
     int n=0,a,k=0;
    struct node *ptr,*ptr1;
    ptr1=head;
    cout<<"search value:"<<endl;
    cin>>a;
    while(ptr1->next!=NULL)
    {
        if(ptr1->value==a)
        {n=1;k++;}
        ptr1=ptr1->next;

    }
    if(n==1&&k!=0) cout<<"value found !! pos:"<<k+1<<endl;
    else cout<<"not found !"<<endl;

}
int split()
{

}
int merge()
{

}
int before_mid()
{

}
int display()
{
    cout<<"list:"<<endl;
     struct node *ptr,*ptr1;
     if(head==NULL) cout<<" empty"<<endl;
     else
     {
         ptr1=head;
         while(ptr1!=NULL)
         {
            cout<<ptr1->value<<"-->";
            ptr1=ptr1->next;
         }
         cout<<endl;

     }
    return 0;
}
int at_end()
{
    int a;
    struct node *ptr,*ptr1;
    ptr=(struct node*)malloc(sizeof(struct node));
    cin>>a;
    ptr->value=a;
    ptr->next=NULL;
    if(head==NULL)
    head=ptr;
    else
    {
        ptr1=head;
        while(ptr1->next!=NULL) ptr1=ptr1->next;
        ptr1->next=ptr;
        ptr->value=a;
        ptr->next=NULL;
    }
    return 0;
}
int after_mid()
{
     int a,b;
    struct node *ptr,*ptr1;
    ptr=(struct node*)malloc(sizeof(struct node));
    cout<<"input & search value:"<<endl;
    cin>>a>>b;
     ptr->value=a;
    ptr->next=NULL;
    ptr1=head;
    while(ptr1->next!=NULL&&ptr1->value!=b)
        ptr1=ptr1->next;
    if(ptr1!=NULL)
    {
        ptr->next=ptr1->next;
        ptr1->next=ptr;

    }
     else
        printf("No such element exist\n");

}
int at_first()
{
   int a;
    struct node *ptr,*ptr1;
    ptr=(struct node*)malloc(sizeof(struct node));
    cin>>a;
    ptr->value=a;
    ptr->next=NULL;
    if(head==NULL)
    head=ptr;
    else
    {
        ptr->next=head;
        head=ptr;
    }

}
int main()
{
    cout<<"       -------------------------my project--------------------------"<<endl<<endl;
    while(1)
    {
        int x;

        cout<<"\n1=end ,2=mid after ,3=before mid ,4=first5=search \n6=split ,7=merge 8=remove ,9=dispay ,else break;\nenter choice :"<<endl;
        cin>>x;
        if(x==1) at_end();
        else if(x==2) after_mid();
        else if(x==3) before_mid();
        else if(x==4) at_first();
        else if(x==5) search();
        else if(x==6) split();
        else if(x==7) merge();
        else if(x==8) remove();
        else if(x==9) display();
        else break;
    }
    return 0;
}

