#include<iostream>
using namespace std;
class Node{
    public:
    int data;
    Node* prev;
    Node* next;
    Node(int data){
        this->data=data;
        this->next=NULL;
        this->prev=NULL;
    }
};
void insertathead(Node* &head,Node* &tail,int d){
    if(head==NULL){
        Node* n1= new Node(d);
        head=n1;
        tail=n1;
    }
    else{
    Node* temp= head;
    Node* n1= new Node(d);
    n1->next=head;
    head->prev=n1;
    head=n1;
    }
    
}
void insertattail(Node* &head,Node* &tail,int d){
    if(tail==NULL){
        Node* n1= new Node(d);
        head=n1;
        tail=n1;
    }
    else{
        Node* temp=tail;
        Node* n2 = new Node(d);
        n2->prev=tail;
        tail->next=n2;
        tail=n2;
    }
}
void insertrandom(Node* &head,int pos,int d){
    Node* left=head;
    int cnt=1;
    while(cnt<pos-1){
        left=left->next;
        cnt++;
    }
    Node* n3= new Node(d);
    n3->next=left->next;
    left->next->prev=n3;
    left->next=n3;
    n3->prev=left;
    
}
void print(Node* &head){
    Node* temp=head;
    while(temp!=NULL){
        cout<<temp->data<<" ";
        temp=temp->next;
    }
    cout<<endl;
} 
void deleteelement(Node* &head,Node* &tail,int pos){
    if(pos==1){
        Node* temp=head;
        head=temp->next;
        temp->next->prev=NULL;
        free(temp);
    }
    else{
        int cnt=1;
        Node* curr=head;
        Node* pree=NULL;
        while(cnt<pos){
            pree=curr;
            curr=curr->next;
            cnt++;
        }
        curr->prev=NULL;
        pree->next=curr->next;
        curr->next=NULL;
        free(curr);
        
    }
}
Node* reverse(Node* &head,int k){
    if(head==NULL){
        return NULL;
    }
    Node* forward=NULL;
    Node* curr=head;
    Node* prev=NULL;
    int cnt=0;
    while(curr!=NULL && cnt<k){
        forward=curr->next;
        curr->next=prev;
        prev=curr;
        curr=forward;
        cnt++;
    }
    if(forward!=NULL){
        head->next=reverse(forward,k);
    }
    return prev;
    
    
}
int main(){
    Node* head=NULL;
    Node* tail=NULL;
    insertattail(head,tail,10);
    insertattail(head,tail,20);
    insertattail(head,tail,30);
    insertathead(head,tail,70);
    insertathead(head,tail,90);
    insertrandom(head,3,80);
    print(head);
    // deleteelement(head,tail,4);
    // print(head);
    int k=6;
    head=reverse(head,k);
    print(head);
}
