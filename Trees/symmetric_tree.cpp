#include <conio.h>
#include<bits/stdc++.h>

using namespace std;




  struct TreeNode {
      int val;
      struct TreeNode *left;
      struct TreeNode *right;
  };
  
  typedef struct TreeNode treenode;
  
  treenode* newNode(int val) {
      treenode* node = (treenode *) malloc(sizeof(treenode));
      node->val = val;
      node->left = NULL;
      node->right = NULL;
      return node;
  }
 


void preorder_left(treenode* node,vector<int> &nodes){
    
    if(node == NULL) return;

    
    preorder_left(node->left,nodes);
    nodes.push_back(node->val);
    preorder_left(node->right,nodes);

}


void preorder_right(treenode* node,vector<int> &nodes){
    
    if(node == NULL) return;

    
    preorder_right(node->right,nodes);
    nodes.push_back(node->val);
    preorder_right(node->left,nodes);

}

void show(vector<int> v){

    auto itr = v.begin();

    while(itr != v.end()){
        cout<<*itr++<<" ";
    }
    cout<<endl;

}

int isSymmetric(treenode* A) {

    vector<int> left,right;

    preorder_left(A->left,left);
    preorder_right(A->right,right);

    show(left);
    show(right);
    
    int i = 0;
    int n = left.size();
    int m = right.size();
    if(n != m) return 0;
    \
    while(left[i] == right[i] && i<n){
        i++;
    }
    return (( i == n) ? 1:0);

}



int main(){

     treenode* root = newNode(1);
    root->left = newNode(2);
    root->right = newNode(2);
    root->left->left = newNode(4);
    root->left->right = newNode(6);
    root->right->right = newNode(4);
    root->right->left = newNode(6);
    // root->left->right->left = newNode(6);   

    
    cout << isSymmetric(root);

    getch();
    return 0;
}