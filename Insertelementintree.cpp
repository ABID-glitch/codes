struct BSTnode{
int data;
struct BSTnode *left;
struct BSTnode *right;
};
void insert(struct BSTnode *root,int data){
    struct BSTnode *par;
    struct BSTnode *n=malloc(sizeof(struct BSTnode));
    n->left=NULL;
    n->data=data;
    n->right=NULL;

    if(root==NULL)
        root=n;
else{
    par=root; //now par pointer will start pointing to the node same as the root pointer is pointing
while(!par==NULL){
    if(par->data>data){
        if(par->left==NULL)
            par->left=n;
        par=par->left;
    }
else if(par->data<data){
    if(par->right==NULL)
        par->right=n;
    par=par->right;
}
}
}
}
