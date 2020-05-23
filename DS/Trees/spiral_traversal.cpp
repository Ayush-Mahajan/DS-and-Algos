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

void printGivenLevelIterative(node* root, int level, int ltr){
    if(root==NULL){
        return;
    }

    if(level == 1){
        cout << root->data;
    }
    if(ltr){
        printGivenLevelIterative(root->left, level-1, ltr);
        printGivenLevelIterative(root->right, level-1, ltr);
    }
    else{
        printGivenLevelIterative(root->right, level-1, ltr);
        printGivenLevelIterative(root->left, level-1, ltr);
    }
}

void printSpiral(node * root){
    int h = height(root);
    int i;

    bool ltr = false;
    for(i=0; i<=h ; i++){
        printGivenLevelIterative(root, i, ltr);

        ltr = !ltr;
    }
}

int main(){

    node *root = buildTree();
    node *temp = root;
    printSpiral(root);
    return 0;
}