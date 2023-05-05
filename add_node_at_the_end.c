//L1 Student at the university of chlef UHBC 
#include <stdio.h>
#include <stdlib.h>
struct node{
  int data;
  struct node *link;
};
void add_at_end(struct node *head , int data);
int main()
{
    struct node *head,*ptr;
    head = malloc(sizeof(struct node));
    head->data = 8;
    head->link = NULL;
    
    struct node *current = malloc(sizeof(struct node));
    current->data = 16;
    current->link = NULL;
    head->link = current;
    add_at_end(head,70);
    add_at_end(head,100);
    add_at_end(head,2005);
    add_at_end(head,600);
    ptr = head;
    printf("--------------------------------------------------\n");
    while(ptr != NULL){
      printf(" %d\t",ptr->data);
      ptr = ptr->link;
    }
    printf("\n--------------------------------------------------\n");
   return 0;
}
void add_at_end(struct node *head , int data){
  struct node *ptr , *temp;
  temp = malloc(sizeof(struct node));
  temp->data = data;
  temp->link = NULL;
  if(head == NULL){
    head->link = temp;
    }
  else{
    ptr = head;
    while(ptr->link != NULL){
      ptr = ptr->link;
    }
    ptr->link = temp;
  }
}
//peace and love 