#include<bits/stdc++.h>
using namespace std;

class Node { 
public: 
    int data; 
    Node* next; 
  
    // Default constructor 
    Node() 
    { 
        data = 0; 
        next = NULL; 
    } 
  
    // Parameterised Constructor 
    Node(int data) 
    { 
        this->data = data; 
        this->next = NULL; 
    } 
};

class stackNode{
    public:
    Node* top;
    stackNode(){top=NULL;}
    void push(int x){
        Node* newNode = new Node(x);
        if(top==NULL) top=newNode;
        newNode->next = top;
        top=newNode;
    }
    int pop(){
        if(top==NULL) return -1;
        int x = top->data;
        top = top->next;
        return x;
    }
    int top(){
        if(top==NULL) return -1;
        return top->data;
    }
    bool isEmpty(){
        return top==NULL;
    }

};

int main(){

}