// building a segment tree for minimun range query problem;

#include <iostream>
#include <climits>
using namespace std;

int query(int *tree, int ss, int se, int qs, int qe, int index){
	// Complete overlape
	if(ss >= qs && se <=qe)
		return tree[index];
		
	// No overlap
	if(ss > qe || se < qs)
		return INT_MAX; 
		
	// Partial overlap - call on both the sideds and update the current ans
	int mid = (ss+se)/2;
	int leftAns = query(tree, ss, mid, qs, qe, 2*index);
	int rightAns = query(tree, mid+1, se, qs, qe, 2*index+1);
	return min(leftAns, rightAns);

}

void buildTree(int *a, int s, int e, int *tree, int index){
	
	//end case
	if(s==e){
		tree[index] = a[s];
		return;
	}
	
	//recursion
	int mid = (s+e)/2;
	buildTree(a, s, mid, tree, 2*index);
	buildTree(a, mid+1, e, tree, 2*index + 1);
	tree[index] = min(tree[2*index], tree[2*index+1]);
	
	return;
	
}

void updateNode(int *tree, int ss, int se, int i, int increment, int index){
	//out of bounds
	if(i > se || i < ss){
		return;
	}
	
	//base case; when you have reached leaf node
	if(ss==se){
		tree[index]+=increment;
		return;
	}
	
	//rec case; left and right call
	int mid = (ss+se)/2;
	updateNode(tree, ss, mid, i, increment, 2*index);
	updateNode(tree, mid+1, se, i, increment, 2*index+1);
	tree[index] = mid(tree[2*index], tree[2*index+1])
	
	
}

int main(){
	int a[]= {1,3,2,-5,6,4};
	int n = sizeof(a)/sizeof(int);
	
	int *tree = new int[4*n+1];
	
	for(int i=0 ; i<=22 ; i++){
		tree[i] = 0;
	}
	
	buildTree(a, 0, n-1, tree, 1);
	
	for(int i=1 ; i<=45 ; i++){
		cout << tree[i]<< " ";
	}
	cout << endl;
	
	int l, r;
	cin >> l >> r;
	cout << query(tree, 0, n-1, l, r, 1); 
	cout << endl;
	
	
}
