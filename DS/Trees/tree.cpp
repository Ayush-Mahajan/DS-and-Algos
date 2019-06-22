#include <iostream>

using namespace::std;

class node{
    public:
        int data;
        node*left;
        node*right;

        node(int d){
            data = d;
            left = NULL;
            right = NULL;
        }
};

node* buildTree(){
    int d;
    cout << "Enter root node - " ;
    cin >> d;
    if(d==-1){
        return NULL;
    }
    node *root = new node(d);
    root->left = buildTree();
    root->right = buildTree();
    cout << "done with 1 sub tree" << endl;
    return root;
}

void proprint(node *a){
    if(a==NULL){
        return;
    }
    else {
        cout << a->data;
        proprint(a->left);
        proprint(a->right);
    }
}

void ioprint(node *a){
    if(a==NULL){
        return;
    }
    else {
        ioprint(a->left);
        cout << a->data;
        ioprint(a->right);
    }
}

void pooprint(node *a){
    if(a==NULL){
        return;
    }
    else {
        pooprint(a->left);
        pooprint(a->right);
        cout << a->data;
    }
}

int main(){
    node *root = buildTree(); 
    cout << "Tree building done, now we can print tree" << endl;
    cout << " printing in pre-order -  ";
    proprint(root);
    cout << endl;
    cout << " printing in inorder -  ";
    ioprint(root);
    cout << endl;
    cout << " printing in post-order -  ";
    pooprint(root);
    cout << endl;
    return 0;
}