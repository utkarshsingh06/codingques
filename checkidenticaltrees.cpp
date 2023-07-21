void preorder(BinaryTreeNode<int>* root,vector<int> &v){
    if(root==NULL){
        return;
    }
    v.push_back(root->data);
    if(root->left)preorder(root->left,v);
    if(!root->left)(v.push_back(0));
    if(root->right)preorder(root->right,v);
     if(!root->right)(v.push_back(0));
}
bool identicalTrees(BinaryTreeNode<int>* root1, BinaryTreeNode<int>* root2) {
    vector<int> v1,v2;
    preorder(root1,v1);
    preorder(root2,v2);
    if(v1!=v2){
        return false;
    }
    return true;
}
