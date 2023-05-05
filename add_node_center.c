#include <stdio.h>
#include <stdlib.h>
struct cellule{
  int data;
  struct cellule *link;
};


void add_node_center(struct cellule *head , int data , int posb);

int main()
{
   struct cellule *head, *ptr;
   head = malloc(sizeof(struct cellule));
   head->data = 8;
   head->link = NULL;
  
   struct cellule *cel = malloc(sizeof(struct cellule));
   cel->data = 16;
   cel->link = NULL;
   head->link = cel;
   
   cel = malloc(sizeof(struct cellule));
   cel->data = 59;
   cel->link = NULL;
   head->link->link = cel;
   add_node_center(head,10,16);
   add_node_center(head,5,10);
   add_node_center(head,37,59);
   ptr = head;
   printf("{ ");
   while(ptr != NULL){
     printf(" %d, ",ptr->data);
     ptr = ptr->link;
   }
   printf("}");
}
void add_node_center(struct cellule *head , int data , int posb){
  struct cellule *ptr1 , *ptr2;
  ptr1 = head;ptr2 = head;
  struct cellule *temp = malloc(sizeof(struct cellule));
  temp->data = data;
  if(head == NULL){
    temp->link = NULL;
    head = temp;
  }
  else{
    while(ptr1->data != posb){
      ptr2 = ptr1;
      ptr1 = ptr1->link;
    }
    temp->link = ptr1;
    ptr2->link = temp;
  }
}