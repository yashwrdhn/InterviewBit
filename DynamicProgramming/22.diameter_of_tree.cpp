#include <bits/stdc++.h>

using namespace std;

struct Node {
	int data;
	struct Node *left,*right;

	Node(int data){
		this->data = data;
		left = right = NULL;
	}
};

Node* newNode(int data){
	Node* node = new Node(data);
	return node;
}

int max_distance(struct Node *node, int &res){
    
    if( !node) return 0;
    
    int left = max_distance(node->left, res);
    int right = max_distance(node->right, res);
    
    int temp = 1 + max(left, right);
     res = max( res, left+right+1);
    return temp;
    
 }

int main(){


	struct Node* root = newNode(1);
	root->left = newNode(2);
	root->right = newNode(3);
	root->left->left = newNode(4);
	root->left->right = newNode(5);
    root->left->right->right = newNode(15);
	// root->right->right = newNode(7);
	root->left->right->right->right = newNode(6);
    root->left->left->left = newNode(16);
	// cout<<"inOrderTraversal\n";
	// inOrderTraversal(root);
	cout<<"\n";
    int res = INT_MIN;
    int x =  max_distance(root, res);
    cout<< res;
    return 0;
}
