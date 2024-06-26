#include <stdio.h>
#include <stdlib.h>

struct node
{
     int data;
     struct node* left;
     struct node* right;
};

struct node* newNode(int data)
{
     struct node* node = (struct node*) malloc(sizeof(struct node));
     node->data = data;
     node->left = NULL;
     node->right = NULL;

     return(node);
}


void findLeafNode(struct node* root)
{
   if (!root)
      return;
   if (!root->left && !root->right)
   {
      printf("%d ", root->data);
      return;
   }
   if (root->left)
      findLeafNode(root->left);
   if (root->right)
      findLeafNode(root->right);
}

int main()
{
     struct node *root = newNode(1);
     root->left = newNode(2);
     root->right = newNode(3);
     root->left->left = newNode(4);
     root->left->right = newNode(5);
     root->right->left = newNode(6);
     root->right->right = newNode(7);

     printf("Leaf nodes of the tree: ");
     findLeafNode(root);

     getchar();
     return 0;
}

