//L1 student at the university of chlef UHBC
#include <stdio.h>
#include <stdlib.h>
struct cellule{
  int data;
  struct cellule *link;
};

void add_node_beginning(struct cellule **head , int data);

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
    add_node_beginning(&head,4);
    add_node_beginning(&head,2);
    add_node_beginning(&head,1);
    add_node_beginning(&head,0);
   ptr = head;
   printf("{ ");
   while(ptr != NULL){
     printf(" %d, ",ptr->data);
     ptr = ptr->link;
   }
   printf("}");
}
void add_node_beginning(struct cellule **head , int data){
   struct cellule *ptr;
   ptr = malloc(sizeof(struct cellule));
   ptr->data = data;
   if(head == NULL){
     ptr->link = NULL;
     head = ptr;
    }
   else{
     ptr->link = *head;
     *head = ptr;
     }
}
//peace and love
