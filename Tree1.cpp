*It is a heirarchical data structure
*the top most node is called as root node
*DEGREE: The subtress a node have is called as degree
*LEAF: The node having zero subtree is called as LEAF
*TERMINAL NODE:The leaf nodes are also called as terminal nodes
*DEGREE OF TREE:The highest degree in the tree
*ANCESTORS AND DESCENDANTS:
upar vale nodes and niche vale nodes
LEVEL starts from 0
GENERATION:nodes which are at the same level are also called as at the same generation
DEPTH:The height of the TREE
EDGE: The line connecting the nodes
path: Sequence of consecutives edges
BRANCH: path ending at leaf nodes
Empty nodes or null tree
COMPLETE BINARY TREE: A complete binary tree is whose every node is non-empty and non-leaf nodes
and or leaf nodes are at the same level
ALMOST COMPLETE BINARY TREE:It is a tree in which there is all non-empty nodes at the left side
and right subtree and all leaf nodes are at last or second last level
*STRICT BINARY TREE:If every node has a non empty left nodes and right subtree.It means each node
has 0 or 2 children
*EXTENDED BINARY TREE:A tree which is a binary tree tranforms into extended binary tree by inserting an external nodes
such that evry internal node has 2 children
*When root contains null tree is Empty
-------------------------------------------------------------------------------
TRAVERSING BINARY TREE:
In order to traverse the tree(means to visit every node)
there is 3 ways to traversal:
1.preorder
2.postorder
3.inorder

1.PREORDER:
*process the root R
*Traverse left subtree of R in preorder
*Traverse right subtree of R in preorder

2.INORDER:
*Traverse left subtree of R in inorder
*process the root R
*Traverse right subtree of R in inorder

3.POSTORDER:
*Traverse left subtree of R in postorder
*Traverse right subtree of R in postorder
*Process the root R
--------------------------------------------------------------------------------
PREORDER TRAVERSAL:(Recursive approach)
struct binarytreenode{
  int info;
  struct binarytreenode *left;
  struct binarytreende *right;
};
void preorder(struct binarytreenode *root){
  if(root!=NULL){   //if root is not equals to null
    printf("%d",root->info);
    preorder(root->left);
    preorder(root->right);
  }
}
--------------------------------------------------------------------------------
INORDER TRAVERSAL:(Recursive approach)
struct binarytreenode{
  int info;
  struct binarytreenode *left;
  struct binarytreenode *right;
};
void inorder(struct binarytreenode *root){
  inorder(root->left);
  printf("%d",root->info);
  inorder(root->right);
}
--------------------------------------------------------------------------------
POSTORDER TRAVERSAL:(Recursive approach)
struct binarytreenode{
  int info;
  struct binarytreenode *left;
  struct binarytree *right;
}
void postorder(struct binarytreenode *root){
  preorder(root->left);
  preorder(root->right);
  printf("%d",root->info);
}
--------------------------------------------------------------------------------
LEVELORDER TRAVERSAL:
*In this traversal we traverse the nodes step by step
like 1,2,3,4,5,6,7
STEPS;
1. We need to traverse the root nodes
2.Then visit the next nodes step by step until all levels are completed
3. We will keep looking for the addressess of the L+1 level node than keep them one by one in the queue 
until NULL in the left and right arrives in the second last level nodes.

void levelorder(struct binarytree *root){
struct binarytree *temp;
struct Queue *Q=createnode();
if(!root){
    return;
}
  enQueue(Q,root);
while(!isemptyQueue(Q)){
    temp=deQueue(Q);
    printf("%d",temp->info);

    if(temp->left)
        enQueue(Q,temp->left);
    if(temp->right)
        enQueue(Q,temp->right);
}
deleteQueue(Q);
}
