#include <iostream>
#include<queue>
using namespace std;
class node{
    public:
    int data;
    node* left;
    node* right;
    node(int data){
        this->data=data;
        this->left=NULL;
        this->right=NULL;
    }
};
node* buildtree(node* root){
    int data;
    cout<<"enter the data :"<<endl;
    cin>>data;
    root=new node(data);
    if(data==-1){
        return NULL;
    }
    cout<<"enter the data of left:"<<endl;
    root->left=buildtree(root->left);
    cout<<"enter the data of right:"<<endl;
    root->right=buildtree(root->right);
    return root;
}
void levelordertraversal(node* root){
    queue<node*> q1;
    q1.push(root);
    while(!q1.empty()){
        node* temp=q1.front();
        cout<<temp->data<<" ";
        q1.pop();
        if(temp->left){
            q1.push(temp->left);
        }
        if(temp->right){
            q1.push(temp->right);
        }
    }
}
int main()
{
    node* root=NULL;
    root=buildtree(root);
    levelordertraversal(root);
    
}
