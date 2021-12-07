//https://www.geeksforgeeks.org/a-program-to-check-if-a-binary-tree-is-bst-or-not/

#include <conio.h>
#include<bits/stdc++.h>

using namespace std;


struct TreeNode {
int val;
TreeNode *left;
TreeNode *right;
TreeNode(int x) : val(x), left(NULL), right(NULL) {}
};

typedef struct TreeNode TreeNode;
 

bool check_bst(TreeNode* node){
	cout<<node->val<<endl;
    if(node == NULL || !(node->left) && !(node->right)) return 1;

    if( node->left && node->val <  node->left->val ){
        return 0;
    }

    if( node->right && node->val > node->right->val){
        return 0;
    }

    return check_bst(node->left) && check_bst(node->right);

} 
int main(){

    TreeNode* root = new TreeNode(4);
    root->left = new TreeNode(2);
    root->right = new TreeNode(6);
    root->left->left = new TreeNode(1);
    root->left->right = new TreeNode(3);
    root->right->right = new TreeNode(7);
    root->right->left = new TreeNode(15);
    // root->left->right->left = newNode(6);   

    
    cout << "hello "<< check_bst(root);

    getch();
    return 0;
}

