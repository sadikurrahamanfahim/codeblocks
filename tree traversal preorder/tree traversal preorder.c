#include<Stdio.h>
 struct node
 {
 int data;
 struct node* left;
 struct node* right;
 };

 struct node* createNewNode(int value)
 {
 struct node* nd =  malloc(sizeof(struct node));
 nd->data=value;
 nd->left=NULL;
 nd->right=NULL;
  return nd;
}
 void printPreorder(struct node* nd)
 {
 if(nd == NULL)
 return;
 printf("%d", nd -> data);
 printPreorder(nd->left);
 printPreorder(nd->right);
 }
 main()
 {
 struct node* root = createNewNode(1);
 root -> left = createNewNode(2);
 root->right = createNewNode(3);
 root-> left->left = createNewNode(4);
 root->left->right= createNewNode(5);

  printPreorder(root);
 }
