struct BSTnode{
int data;
BSTnode *left;
BSTnode *right;
};
struct BSTnode* FIND(struct BSTnode *root,int data){ //it will return the address of the node when the search is done
    if(root==NULL)
        return(NULL);
    if(data<root->data)
        return(FIND(root->left,data));
    if(data>root->data)
        return(FIND(root->right,data));
return(root);
}
