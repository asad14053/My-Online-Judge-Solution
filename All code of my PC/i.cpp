#include<stdio.h>
#include<stdlib.h>


struct node
{
  int data;
  struct node *next;
};

 void sortedInsert(struct node** head_ref, struct node* new_node)
{
  struct node* current = *head_ref;


  if (current == NULL)
  {
     new_node->next = new_node;
     *head_ref = new_node;
  }


  else if (current->data >= new_node->data)
  {

    while(current->next != *head_ref)
        current = current->next;
    current->next = new_node;
    new_node->next = *head_ref;
    *head_ref = new_node;
  }

  else
  {

    while (current->next!= *head_ref && current->next->data < new_node->data)
      current = current->next;

    new_node->next = current->next;
    current->next = new_node;
  }
}


void printList(struct node *start)
{
  struct node *temp;

  if(start != NULL)
  {
    temp = start;
    printf("\n");
    do {
      printf("%d ", temp->data);
      temp = temp->next;
    } while(temp != start);
  }
}


int main()
{
  int arr[] = {12, 56, 2, 11, 1, 90};
  int list_size, i;


  struct node *start = NULL;
  struct node *temp;


  for(i = 0; i< 6; i++)
  {
    temp = (struct node *)malloc(sizeof(struct node));
    temp->data = arr[i];
    sortedInsert(&start, temp);
  }

  printList(start);
  getchar();
  return 0;
}
