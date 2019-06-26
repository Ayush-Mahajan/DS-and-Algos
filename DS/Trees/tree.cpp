#include <iostream>
#include <queue>


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
    if(root==0){
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

void levelOrderPrint(node *temp){
    cout << "---";
    int i, h = height(temp);
    cout << "Enter the function";
    for(i=0 ; i<=h; i++){
        printKthLevel(temp, i);
        cout << endl;
    }
    return;
}

// Breath First Search
void bfs(node *root){
    queue<node*> q;
    q.push(root);

    while(!q.empty()){
        node *f = q.front();
        cout << f->data << ", ";
        q.pop();

        if(f->left){
            q.push(f->left);
        }
        if(f->right){
            q.push(f->right);
        }
    }

    return;
}


int main(){
    node *root = buildTree(); 
    node *temp = root;
    cout << "Tree building done, now we can print tree" << endl;
    // cout << " printing in pre-order -  ";
    // proprint(root);
    // cout << endl;
    // cout << " printing in inorder -  ";
    // ioprint(root);execvp
    // cout << endl;
    // cout << " printing in post-order -  ";
    // pooprint(root);
    // cout << endl;

    // printKthLevel(root, 1);
    // cout << endl;
    // printKthLevel(root, 2);
    // cout << endl;
    // printKthLevel(root, 3);

    // cout << endl << "printing level order" << endl;
    // levelOrderPrint(temp);
    
    bfs(root);
    
    return 0;
}