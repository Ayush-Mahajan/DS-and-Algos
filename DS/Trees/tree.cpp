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

// Pre Order, In Order, and Post Order printing
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


// Level Order Printing of tree
int height(node*root){
    if(root=0){
        return 0;
    }
    int ls=height(root->left);
    int rs=height(root->right);
    return max(ls, rs)+1;
}

void printKthLevel(node*root, int k){
    if(root==NULL){
        return;
    }
    if(k==1){
        cout << root->data << " ";
        return;
    }
    printKthLevel(root->left, k-1);
    printKthLevel(root->right, k-1);
    return;
}

void levelOrderPrint(node*root){
    int i;
    for(i=1 ; i<=height(root); i++){
        printKthLevel(root, i);
        cout << endl;
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

    printKthLevel(root, 4);

    cout << endl << "printing level order" << endl;
    levelOrderPrint(root);
    return 0;
}