// Given a non-empty binary tree, find the maximum path sum.

// For this problem, a path is defined as any sequence of nodes from some starting node to any node in the tree along the parent-child connections. The path must contain at least one node and does not need to go through the root.

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
    
    int temp =  max( node->val, node->val + max(left, right));
    res = max(res, temp);
    res = max( res, left+right+ node->val);
    return temp;
    
 }

int main(){


	struct Node* root = newNode(-10);
	root->left = newNode(9);
	root->right = newNode(20);
	// root->left->left = newNode(4);
	// root->left->right = newNode(5);
    // root->left->right->right = newNode(-5);
    root->right->left = newNode(15);
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
