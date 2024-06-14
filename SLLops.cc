#include<bits/stdc++.h>
using namespace std;

class node{
    public:
        int data;
        node* next;

        node(int d){
            this->data=d; this->next = NULL;
        }
};

void printLL(node* &head){
    node* temp =head;
    while(temp!=NULL){
        cout<<temp->data<<" ";
        temp=temp->next;
    }
    cout<<endl;
}

void insertAtHead(node* & head, int d){
    node* temp = new node(d);
    temp->next = head;
    head=temp;
}

void insertAtTail(node* &tail, int d){
    node* temp = new node(d);
    tail->next = temp;
    tail =temp;
}

void insertAtPos(node* &head, node* &tail, int pos, int d){
    if(pos==1){
        insertAtHead(head, d);
        return;
    }
    
    node* nodeToInsert = new node(d);
    node* temp = head;
    int cnt=1;
    if(temp->next == NULL){
        insertAtTail(tail, d);
        return;
    }
    while(cnt<pos-1){
        cnt++;
        temp = temp->next;
    }
    nodeToInsert->next = temp->next;
    temp->next = nodeToInsert;
}

void deleteAtPos(node* &head, int pos){
    if(pos==1){
        //head case

    }
    else{
        //middle & tail case
    }
}
int main(){
    node* node1 = new node(10);
    insertAtHead(node1, 20);
    insertAtPos(node1, 2, 30);
    printLL(node1);
    return 0;
}