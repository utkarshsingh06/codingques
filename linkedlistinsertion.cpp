#include <iostream>
#include<bits/stdc++.h>
using namespace std;
class Node{  // creating a node class
    public:
    int data;
    Node* next;
    Node(int data){
    this->data=data;
    this->next=NULL;
}
};
void insertAthead(Node* &head , int d){ //insert at head
    Node* node2= new Node(d);
    node2->next=head;
    head=node2;
    
}
void insertAttail(Node* &tail, int d){  //insert at any random postion
    Node* temp= new Node(d);
    tail->next=temp;
    tail=tail->next;
}
void insertAtrandom(int d,int pos,Node* &head,Node* &tail){
    if(pos==1){
        insertAthead(head,d); //insert at posiiton 1
    }
    int cnt=1;
    Node* temp= head;
    while(cnt<pos-1){
        temp=temp->next;
        cnt++;
    }
    if(temp->next==NULL){
        insertAttail(tail,d);  //insert at position last
    } 
    Node* t1 = new Node(d);
    t1->next=temp->next;
    temp->next=t1;
    
}
void print(Node* &head){ //print the linkedlist
    Node* temp= head;
    while(temp!=NULL){
        cout<<temp->data<<" ";
        temp=temp->next;
    }
}
int main()
{
    Node* node1= new Node(10);
    Node* head= node1;
    Node* tail=node1;
    // cout<<node1->data<<endl;
    insertAttail(tail,20);
    insertAttail(tail,30);
    insertAttail(tail,40);
    insertAtrandom(70,2,head,tail);
    print(head);
    return 0;
}
