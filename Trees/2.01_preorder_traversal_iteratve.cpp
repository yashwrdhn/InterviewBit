#include <conio.h>
#include<bits/stdc++.h>

using namespace std;


  
struct TreeNode {
  int val;
  TreeNode *left;
  TreeNode *right;
  TreeNode(int x) : val(x), left(NULL), right(NULL) {}
};

TreeNode* newNode(int data){
	struct TreeNode* node = new TreeNode(data);
	return node;
}
 

void preorder(TreeNode *root){

	stack<TreeNode* > s;
	s.push(root);

	while(!s.empty()){
		
		TreeNode* temp = s.top();
		

		if(temp->right != NULL){
			s.push(temp->right);	
		}
		
		if(temp->left != NULL){
			s.push(temp->left);
		}

		if(temp->left == NULL && temp->right == NULL){
			s.pop();
			v.push_back(temp->val);
			cout<<temp->val<<endl;
		}

	}

} 	

int main(){
	
	struct TreeNode* root = newNode(4);
	root->left = newNode(2);
	root->right = newNode(5);
	root->left->left = newNode(1);
	root->left->right = newNode(3);
	root->left->right->left = newNode(5);

	preorder(root);

	getch();
	return 0;
}