Def: Tree data structure in which each node has at most two children, referred to as the left child and the right child.

Path - sequence of nodes along the edges of a tree
Root - the node at the top of the tree.
Parent - any node except the root node has one edge upward to a node called parent.
Child - node below a given node connected by its edge downwards.
Leaf - node which does not have any child node
Subtree - represents descendants of a node
Visiting - refers to checking the value of a node when control is on the node
Traversing - passing through nodes in a specific order
Levels - represents the generation of a node e.g. root at level 0, child 1, grandchild 2 etc
Keys - value of a node based on which a search operation is to be carried out for a node.


Binary Trees - hold a maximum of 2 subtrees: left subtree and right subtree.
	Full Binary Tree - binary tree type where every node has either 0 or 2 child nodes
	Complete Binary Tree - binary tree type where all leaf nodes must be on the same level. However, root and internal nodes in a complete binary tree can either have 0, 1 or 2 child nodes.
	Perfect Binary Tree - binary tree type where all the leaf nodes are on the same level and every node except the leaf nodes have 2 children.

Binary Search Trees - possess all properties of Binary Trees but with extra properties.
	Data in BST is stored in such a way that the values in the left subtree are always less than the values in the root node and the values in the right subtree are always greater than the values in the root node i.e. subtree < root node ≤ right subtree.




Tree Traversal - inorder, preorder and postorder

```
struct node {
    int data;
    struct node* left;
    struct node* right;
}
```


Inorder traversal

1. First, visit all the nodes in the left subtree
2. Then the root node
3. Visit all the nodes in the right subtree

```
display(root->data)
preorder(root->left)
preorder(root->right)
```


Preorder traversal

1. Visit root node
2. Visit all the nodes in the left subtree
3. Visit all the nodes in the right subtree
```
display(root->data)
preorder(root->left)
preorder(root->right)
```




Postorder traversal

1. Visit all the nodes in the left subtree
2. Visit all the nodes in the right subtree
3. Visit the root node

```
postorder(root->left)
postorder(root->right)
display(root->data)
```



```
// Tree traversal in C

#include <stdio.h>
#include <stdlib.h>

struct node {
  int item;
  struct node* left;
  struct node* right;
};

// Inorder traversal
void inorderTraversal(struct node* root) {
  if (root == NULL) return;
  inorderTraversal(root->left);
  printf("%d ->", root->item);
  inorderTraversal(root->right);
}

// preorderTraversal traversal
void preorderTraversal(struct node* root) {
  if (root == NULL) return;
  printf("%d ->", root->item);
  preorderTraversal(root->left);
  preorderTraversal(root->right);
}

// postorderTraversal traversal
void postorderTraversal(struct node* root) {
  if (root == NULL) return;
  postorderTraversal(root->left);
  postorderTraversal(root->right);
  printf("%d ->", root->item);
}

// Create a new Node
struct node* createNode(value) {
  struct node* newNode = malloc(sizeof(struct node));
  newNode->item = value;
  newNode->left = NULL;
  newNode->right = NULL;

  return newNode;
}

// Insert on the left of the node
struct node* insertLeft(struct node* root, int value) {
  root->left = createNode(value);
  return root->left;
}

// Insert on the right of the node
struct node* insertRight(struct node* root, int value) {
  root->right = createNode(value);
  return root->right;
}

int main() {
  struct node* root = createNode(1);
  insertLeft(root, 12);
  insertRight(root, 9);

  insertLeft(root->left, 5);
  insertRight(root->left, 6);

  printf("Inorder traversal \n");
  inorderTraversal(root);

  printf("\nPreorder traversal \n");
  preorderTraversal(root);

  printf("\nPostorder traversal \n");
  postorderTraversal(root);
}
```
