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

void print(node *a){
    if(a==NULL){
        return;
    }
    else {
        cout << a->data;
        print(a->left);
        print(a->right);
    }
}

int main(){
    node *root = buildTree(); 
    cout << "Tree building done, now we can print tree" << endl;
    cout << " printing in inorder -  ";
    print(root);
    cout << endl;
    return 0;
}