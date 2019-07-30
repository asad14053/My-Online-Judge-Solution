//SOURCE CODE:
/* C Program on binary Search Tree */
#include<stdio.h>
 //#include< conio.h>
  #include<string.h>
   #include<dos.h>
    #include<stdlib.h>

    struct node {
    char data[15];
    struct node *left,*right;
    };
     void insert(struct node *r,struct node *p)
     {
    if((r->right==NULL)&&(strcmp(p->data,r->data)>0))
       r->right=p;
        else if((r->right!=NULL)&&(strcmp(p->data,r->data)>0))
         insert(r->right,p);
         if((r->left==NULL)&&(strcmp(p->data,r->data)< 0))
         r->left=p;
          else if((r->left!=NULL)&&(strcmp(p->data,r->data)< 0))
           insert(r->left,p);
            }

            void tree(struct node *r,int c)
            {
             int top,flag;
             struct node *w,*stack[20];
              if(r!=NULL)
              {
               if(c!=4)
               {
                if(c == 1)
                 printf(" %s ",r->data);
                 tree(r->left,c);
                  if(c == 2)
                   printf(" %s ",r->data);
                    tree(r->right,c);
                     if(c == 3)
                      printf(" %s ",r->data);
                      }
                        }
                         if(c == 4)
                          {
                           top = 0; w = r; flag = 0;
                            while((top != -1)&&(w!=NULL))
                             {
                              while((flag == 0) && (w->left!=NULL))
                              {
                               stack[top] = w;
                               top++;
                                w = w->left;
                                 }
                                  printf(" %s ",w->data);
                                  if(w->right != NULL)
                                  {
                                   w = w->right;
                                    flag = 0;
                                     }
                                      else
                                      {
                                       top--;
                                       w = stack[top];
                                        flag = 1;
                                         }
                                          }
                                           }
                                            }
                                             int main()
                                              {
                                               int choice,c,i,flag;
                                                char temp='N',temp1[15];
                                                 struct node *s,*root,*r,*q;
                                                  root = NULL;
                                                  do
                                                  {
                                                   //clrscr();
                                                   printf("\n 1. Enter");
                                                   printf("\n 2. Delete ");
                                                   printf("\n 3. Search ");
                                                    printf("\n 4. Display");
                                                    printf("\n 5. Exit");
                                                    printf("\nEnter Your Choice : ");
                                                    scanf("%d",&choice);
                                                    switch(choice)

                                                    {
                                                    case 1:
                                                    printf("***** Data Entry ***** ");
                                                     do {
                                                      //s=malloc(sizeof(struct node));
                                                      s=new(node);
                                                       s->left=NULL;
                                                       s->right=NULL;
                                                       printf("\nEnter Data : ");
                                                       scanf("%s",&s->data);
                                                       if(root==NULL)
                                                        root=s;
                                                        else
                                                        insert(root,s);
                                                        printf("\nEnter Your Elements[y/n] : ");
                                                        scanf("%c",&temp);
                                                        } while(temp=='y');
                                                        break;

                                                         case 2:
                                                         printf("****** Delete Operation *******\n");
                                                          do {
                                                           printf("\nEnter Element To Be Deleted : ");
                                                            scanf("%s",temp1);
                                                            s=root;
                                                            i=0;
                                                            flag=0;
                                                             do {
                                                              if(strcmp(s->data,temp1)>0)
                                                              {
                                                              r=s;
                                                               s=s->left;
                                                               i=2;
                                                                }
                                                                if(strcmp(s->data,temp1)==0)
                                                                 {
                                                                  flag=1;
                                                                   if(i==0)
                                                                    {
                                                                    if(root->right!=NULL)
                                                                    { q=root->left;
                                                                     root=root->right;
                                                                      insert(root,q);
                                                                       }
                                                                        if(root->right==NULL)
                                                                        root=root->left;
                                                                    }
                                                                     else
                                                                      {
                                                                       if(i==1)
                                                                        { q=s->left;
                                                                         r->right=s->right;
                                                                          if(s->left!=NULL)
                                                                          insert(r,q);
                                                                           }
                                                                            if(i==2)
                                                                            {
                                                                             q=s->right;
                                                                             r->left=s->left;
                                                                             if(s->right!=NULL)
                                                                             insert(r,q);
                                                                              }
                                                                               }
                                                                                }
                                                                                 }
                                                                                  while(flag==0&&s!=NULL);
                                                                                  printf("\n Delete Any More[Y/N] : ");
                                                                                   scanf("%c",&temp);
                                                                                    } while(temp=='y');
                                                                                     break;

                                                                                     case 3:
                                                                                     printf("****** Search Operation *******\n");
                                                                                     do {
                                                                                     printf("\n Enter Name To Be Searched");
                                                                                     scanf("%s",temp1);
                                                                                      i=0;
                                                                                       s=root;
                                                                                        while(s!=NULL&&i==0)
                                                                                         {
                                                                                          if(strcmp(s->data,temp1)< 0)
                                                                                          s=s->right;
                                                                                           if(strcmp(s->data,temp1)>0)
                                                                                            s=s->left;
                                                                                            if(strcmp(s->data,temp1)==0)
                                                                                             i=1;
                                                                                              }
                                                                                               if(i==0)
                                                                                               printf("\nElement Not Found\n");
                                                                                                else printf("\nElement Found\n");
                                                                                        printf("\nEnter More Elements[Y/N] : ");
                                                                                         scanf("%c",&temp);
                                                                                         } while(temp=='y');
                                                                                         break;

                                                                                          case 4:
                                                                                          //clrscr();
                                                                                          do {
                                                                                          // clrscr();
                                                                                          printf("\n 1. Preorder\n 2. Inorder \n 3. Postorder \n 4. Non Recursion \n 5. Exit");
                                                                                           printf("\nEnter Your Choice : ");
                                                                                            scanf("%d",&c);
                                                                                             if(root==NULL)
                                                                                             printf("Tree Not Started Yet");
                                                                                             else
                                                                                             tree(root,c);
                                                                                              printf("\n Press Any Key To Continue......");
                                                                                              // getch();
                                                                                               } while(c!=5);
                                                                                               break;
                                                                                               }
                                                                                                } while(choice!=5);
                                                                                                }


//OUTPUT: 1. Enter 2. Delete 3. Search 4. Display 5. Exit
//Enter Your Choice : 1 /****** Data Entry ******* Enter Data : Lionel Enter More Elements(Y/N) : y Enter Data : Dylan Enter More Elements(Y/N) : y Enter Data : Daniel Enter More Elements(Y/N) : y Enter Data : Malcolm Enter More Elements(Y/N) : y Enter Data : Cyril
//Enter More Elements(Y/N) : y Enter Data : Jason Enter More Elements(Y/N) : n 1. Enter 2. Delete 3. Search 4. Display 5. Exit Enter Your Choice : 4 // entering sub-menu 1. Preorder 2. Inorder 3. Postorder 4. Non Recursion 5. Exit Enter Your Choice : 1 Lionel Dylan Malcolm Cyril Daniel Jason Press Any Key to Contiue.... 1. Preorder 2. Inorder 3. Postorder 4. Non Recursion 5. Exit Enter Your Choice : 2 Malcolm Cyril Dylan Lionel Jason Daniel Press Any Key to Contiue.... 1. Preorder 2. Inorder 3. Postorder 4. Non Recursion 5. Exit Enter Your Choice : 3 Cyril Malcolm Dylan Lionel Jason Daniel Press Any Key to Contiue.... 1. Preorder 2. Inorder 3. Postorder 4. Non Recursion 5. Exit
//Enter Your Choice : 4 Malcolm Cyril Dylan Lionel Jason Daniel Press Any Key to Contiue.... 1. Preorder 2. Inorder 3. Postorder 4. Non Recursion 5. Exit Enter Your Choice : 5 // leaving the sub-menu Press Any Key To Continue..... 1. Enter 2. Delete 3. Search 4. Display 5. Exit Enter Your Choice : 3 Enter Name To Be Searched : Dylan Element Found Enter More Elements(Y/N) : n 1. Enter 2. Delete 3. Search 4. Display 5. Exit Enter Your Choice : 2 ****** Delete Operation ******* Enter Element To Be Deleted : Dylan Delete Any More(Y/n) : n 1. Enter 2. Delete 3. Search 4. Display 5. Exit Enter Your Choice : 5 */
//
