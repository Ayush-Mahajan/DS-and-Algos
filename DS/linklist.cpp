#include <iostream>
using namespace::std;

class node{
public:
    int data;
    node* next;

    node(int d){
        data = d;
        next = NULL;
    }
};

// class LinkedList{
//     node*head;
//     node*tail;
// public:
//     LinkedList(){
//         head = NULL;
//         tail = NULL;
//     }
// };

void insertAtHead(node*&head, int data){
    node*n = new node(data);
    n->next = head;
    head = n;
}

// void insertAtTail(node*&head,int data){
//     node*prv = head;
     
// }

void print(node*head){
    while(head!=NULL){
        cout << head->data << "->";
        head = head->next;
    }
}