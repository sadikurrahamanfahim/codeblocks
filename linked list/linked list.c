#include <stdio.h>

// A linked list node
struct Node
{
  int data;
  struct Node *next;
};

void push(struct Node** head_ref, int new_data)
{
    struct Node* new_node = (struct Node*) malloc(sizeof(struct Node));
    new_node->data  = new_data;
    new_node->next = (*head_ref);
    (*head_ref)    = new_node;
}

void insertAfter(struct Node* prev_node, int new_data)
{
    if (prev_node == NULL)
    {
      printf("the given previous node cannot be NULL");
      return;
    }
    struct Node* new_node =(struct Node*) malloc(sizeof(struct Node));
    new_node->data  = new_data;
    new_node->next = prev_node->next;
    prev_node->next = new_node;
}

// function for insert a node at first of the linked list//
void append(struct Node** head_ref, int new_data)
{
    struct Node* new_node = (struct Node*) malloc(sizeof(struct Node));

    struct Node *last = *head_ref;
    new_node->data  = new_data;
    new_node->next = NULL;
    if (*head_ref == NULL)
    {
       *head_ref = new_node;
       return;
    }
    while (last->next != NULL)
        last = last->next;
    last->next = new_node;
    return;
}

void printList(struct Node *node)
{
  while (node != NULL)
  {
     printf(" %d ", node->data);
     node = node->next;
  }
}

// function for deletion
void deleteNode(struct Node **head_ref, int position)
{
   if (*head_ref == NULL)
      return;
   struct Node* temp = *head_ref;
    if (position == 0)
    {
        *head_ref = temp->next;
        free(temp);
        return;
    }
    for (int i=0; temp!=NULL && i<position-1; i++)
         temp = temp->next;
    if (temp == NULL || temp->next == NULL)
         return;
    struct Node *next = temp->next->next;
    free(temp->next);
    temp->next = next;
}

// function to count the node//
int getCount(struct Node* head)
{
    int count = 0;
    struct Node* current = head;
    while (current != NULL)
    {
        count++;
        current = current->next;
    }
    return count;
}

int main()
{
  struct Node* head = NULL;

  append(&head, 6);
  push(&head, 7);
  push(&head, 1);

  append(&head, 4);
  insertAfter(head->next, 8);

  printf("\nLinked list is: ");
  printList(head);
  deleteNode(&head, 2);
  puts("\nLinked List after Deletion: ");
  printList(head);

  printf("\nLegnth of nodes is: %d", getCount(head));

  return 0;
}
