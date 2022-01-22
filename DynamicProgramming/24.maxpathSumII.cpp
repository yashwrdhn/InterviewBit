// Maximum path sum from leaf to leaf

// If a binary tree is given, how to find Maximum path sum between two leaves of binary tree.

// All should be numbers
// The maximum sum path may or may not go through root.
// For example, in the following binary tree, the maximum sum is 27(3 + 6 + 9 + 0 – 1 + 10). Expected time complexity is O(n).

#include <bits/stdc++.h>

using namespace std;

struct Node {
	int val;
	struct Node *left,*right;

	Node(int data){
		this->val = data;
		left = right = NULL;
	}
};

Node* newNode(int data){
	Node* node = new Node(data);
	return node;
}


int max_sum(struct Node *node, int &res){
    
    if( !node) return 0;
    
    int left = max_sum(node->left, res);
    int right = max_sum(node->right, res);
    
    int temp =  node->val + max(left, right);
    res = max(res, temp);
    res = max( res, left+right+ node->val);
    return temp;
    
 }

int main(){


	struct Node* root = newNode(-1);
	root->left = newNode(9);
	root->right = newNode(20);
	// root->left->left = newNode(4);
	// root->left->right = newNode(5);
    // root->left->right->right = newNode(-5);
    root->right->left = newNode(-15);
	root->right->right = newNode(7);
	// root->left->right->right->right = newNode(6);
    // root->left->left->left = newNode(-2);
	// cout<<"inOrderTraversal\n";
	// inOrderTraversal(root);
	cout<<"\n";
    int res = INT_MIN;
    int x =  max_sum(root, res);
    cout<< res;
    return 0;
}
