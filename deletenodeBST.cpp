BinaryTreeNode<int>* deleteNode(BinaryTreeNode<int>* root, int key){
    if(root==NULL){
        return NULL;
    }
    if(root->data==key){
        if(root->left==NULL && root->right==NULL){
        delete root;
        return NULL;
    }
    else if(root->left!=NULL &&root->right==NULL){
        BinaryTreeNode<int>* temp=root->left;
        delete(root);
        return temp;
    }
    else if(root->left==NULL &&root->right!=NULL){
        BinaryTreeNode<int>* temp=root->right;
        delete(root);
        return temp;
    }
    else{
        BinaryTreeNode<int>* minnode=root->right;
        while(minnode->left!=NULL){
            minnode=minnode->left;
        }
        int rightmin=minnode->data;
        root->data=rightmin;
        root->right=deleteNode(root->right, rightmin);
        return root;
    }
    }
    else if(root->data>key){
        root->left=deleteNode(root->left,key);
        return root;
    }
    else{
        root->right=deleteNode(root->right,key);
        return root;
    }
}
