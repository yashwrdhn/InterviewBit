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
 
void Inorder(TreeNode *root){

	stack<TreeNode*> s;
	TreeNode* current = root;
	s.push(current);

	while(!s.empty() || current){
		
		while(current != NULL){

			s.push(current);
			current = current->left;
		}


		current = s.top();
		s.pop();

		cout<<current->val<<endl;
		// v.push_back(current);

		current = current->right;

	}

} 	


int main(){
	
	struct TreeNode* root = newNode(4);
	root->left = newNode(2);
	root->right = newNode(5);
	root->left->left = newNode(1);
	root->left->right = newNode(3);
	root->left->right->left = newNode(5);

	Inorder(root);

	getch();
	return 0;
}