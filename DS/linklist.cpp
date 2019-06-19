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
int lenght(node*head){
    int len=0;
    while(head!=NULL){
        head = head->next;
        len++;
    }
    return len;
}


void insertAtHead(node*&head, int data){
    node*n = new node(data);
    n->next = head;
    head = n;
}

void insertAtTail(node*&head, int data){
    if(head==NULL){
        head = new node(data);
        return;
    }
    node*tail = head;
    while(tail->next!=NULL){
        tail = tail->next;
    }
    tail->next = new node(data);
    return;
}

void insertAtMiddle(node*&head, int data, int pos){
    if(head==NULL||pos==0){
        insertAtHead(head, data);
    } else if(pos>lenght(head)){
        insertAtTail(head, data);
    } else {
        int jump=0;
        node*temp=head;
        while(jump<=pos-1){
            temp = temp->next;
            jump++;
        }

        node*n = new node(data);
        n->next = temp->next;
        temp->next = n;
    }
}

void deleteAtHead(node*&head) {
    if(head==NULL){
        return;
    }
    node*temp = head;
    head = head->next;
    delete temp;
    return
}

void deleteAtTail(node*head) {
    if(head==NULL){
   node*pre = NULL;
   node*temp = head;
   while(temp->next!=NULL){
       prev = temp;
       temp = temp->next;
   }
    delete temp;
    pre->next = NULL;
    return;
}

void deleteAtMid(node*head, int pos){
    if(head==NULL){
        return;
    } else{
        node*temp = head;
        node*pre = NULL;
        if(pos == 1){
            delete next;
        } else if( pos> lenght(head)){
            deleteAtTail(head);
        } else {
            int jump=0;
            while(jump<=pos-1){
                temp = temp->next;
                pre = temp;
            }
            pre = temp->next;
            delete temp;
        }
    }
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