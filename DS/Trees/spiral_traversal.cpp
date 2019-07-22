#include<iostream>

using namespace::std;

class node{
    public:
        int data;
        node *left;
        node *right;

        node(int d){
            data = d;
            left = NULL;
            right = NULL;
        }
};

node* buildTree(){
    int d;
    cout << "Enter root node - ";
    cin >> d;
    if(d==-1){
        return NULL;
    }
    node *root = new node(d);
    root->left = buildTree();
    root->right = buildTree();
    cout << "done with 1 subtree" << endl;
    return root;
}

int height(node *root){
    if(root == NULL){
        return 0;
    }
    int ls = height(root->left);
    int rs = height(root->right);
    return max(ls, rs)+1;
}

void printSpiral(node * root){
    int h = height(root);

}